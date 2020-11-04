#include "Window.hpp"


Window::Window(int argc, char **argv) : _algorithm(new Algorithm()) {
    gtk_init(&argc, &argv);
    _window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(_window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    createIHM();
}

Window::~Window() {
    delete _algorithm;
};

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

void Window::createIHM() {
    GtkWidget *mainBox = gtk_hbox_new(FALSE, 10);

    // Création du canvas
    _canvas = gtk_drawing_area_new();
    gtk_drawing_area_size(GTK_DRAWING_AREA(_canvas), CANVAS_WIDTH, CANVAS_HEIGHT);
    gtk_container_add(GTK_CONTAINER(mainBox), _canvas);


    // Création du menu
    GtkWidget *menuBox = gtk_vbox_new(FALSE, 10);
    // Création des champs
    // Villes
    GtkWidget *villeBox = gtk_hbox_new(FALSE, 10);
    gtk_container_add(GTK_CONTAINER(villeBox), gtk_label_new("Nombre de villes :"));
    _nbVilleInput = gtk_entry_new();
    gtk_entry_set_text(GTK_ENTRY(_nbVilleInput), utils::toString(Settings::getNbVille()).c_str());
    gtk_container_add(GTK_CONTAINER(villeBox), _nbVilleInput);
    // Fourmi
    GtkWidget *fourmiBox = gtk_hbox_new(FALSE, 10);
    gtk_container_add(GTK_CONTAINER(fourmiBox), gtk_label_new("Nombre de fourmis :"));
    _nbFourmiInput = gtk_entry_new();
    gtk_entry_set_text(GTK_ENTRY(_nbFourmiInput), utils::toString(Settings::getNbFourmi()).c_str());
    gtk_container_add(GTK_CONTAINER(fourmiBox), _nbFourmiInput);
    // A
    GtkWidget *aBox = gtk_hbox_new(FALSE, 10);
    gtk_container_add(GTK_CONTAINER(aBox), gtk_label_new("Sensibilité au phéromones (a) :"));
    _aInput = gtk_entry_new();
    gtk_entry_set_text(GTK_ENTRY(_aInput), utils::toString(Settings::getA()).c_str());
    gtk_container_add(GTK_CONTAINER(aBox), _aInput);
    // B
    GtkWidget *bBox = gtk_hbox_new(FALSE, 10);
    gtk_container_add(GTK_CONTAINER(bBox), gtk_label_new("Sensibilité à la distance (b) :"));
    _bInput = gtk_entry_new();
    gtk_entry_set_text(GTK_ENTRY(_bInput), utils::toString(Settings::getB()).c_str());
    gtk_container_add(GTK_CONTAINER(bBox), _bInput);
    // Q
    GtkWidget *qBox = gtk_hbox_new(FALSE, 10);
    gtk_container_add(GTK_CONTAINER(qBox), gtk_label_new("Quantité de phéromone (Q) :"));
    _qInput = gtk_entry_new();
    gtk_entry_set_text(GTK_ENTRY(_qInput), utils::toString(Settings::getQ()).c_str());
    gtk_container_add(GTK_CONTAINER(qBox), _qInput);
    // C
    GtkWidget *cBox = gtk_hbox_new(FALSE, 10);
    gtk_container_add(GTK_CONTAINER(cBox), gtk_label_new("Coefficient d'évaporation (C) :"));
    _cInput = gtk_entry_new();
    gtk_entry_set_text(GTK_ENTRY(_cInput), utils::toString(Settings::getC()).c_str());
    gtk_container_add(GTK_CONTAINER(cBox), _cInput);
    // Seuil
    GtkWidget *seuilBox = gtk_hbox_new(FALSE, 10);
    gtk_container_add(GTK_CONTAINER(seuilBox), gtk_label_new("Seuil :"));
    _seuilInput = gtk_entry_new();
    gtk_entry_set_text(GTK_ENTRY(_seuilInput), utils::toString(Settings::getSeuil()).c_str());
    gtk_container_add(GTK_CONTAINER(seuilBox), _seuilInput);
    // Bouton OK
    GtkWidget *okBtn = gtk_button_new_with_label("OK");
    g_signal_connect(okBtn, "clicked", G_CALLBACK(okCallback), this);
    // Bouton Démarrer & Label résultat
    GtkWidget *bottomBox = gtk_hbox_new(FALSE, 10);
    GtkWidget *runBtn = gtk_button_new_with_label("Démarrer");
    g_signal_connect(runBtn, "clicked", G_CALLBACK(runCallback), this);
    gtk_container_add(GTK_CONTAINER(bottomBox), runBtn);
    _resultLabel = gtk_label_new(utils::toString(_algorithm->getLongueurMin()).c_str());
    gtk_container_add(GTK_CONTAINER(bottomBox), _resultLabel);

    gtk_container_add(GTK_CONTAINER(menuBox), villeBox);
    gtk_container_add(GTK_CONTAINER(menuBox), fourmiBox);
    gtk_container_add(GTK_CONTAINER(menuBox), aBox);
    gtk_container_add(GTK_CONTAINER(menuBox), bBox);
    gtk_container_add(GTK_CONTAINER(menuBox), qBox);
    gtk_container_add(GTK_CONTAINER(menuBox), cBox);
    gtk_container_add(GTK_CONTAINER(menuBox), seuilBox);
    gtk_container_add(GTK_CONTAINER(menuBox), okBtn);
    gtk_container_add(GTK_CONTAINER(menuBox), bottomBox);


    gtk_container_add(GTK_CONTAINER(mainBox), menuBox);


    gtk_container_add(GTK_CONTAINER(_window), mainBox);
}

gboolean Window::okCallback(GtkWidget *widget, gpointer data) {
    auto *window = (Window *) data;
    Settings::setNbVille(window->getNbVilleInput());
    Settings::setNbFourmi(window->getNbFourmiInput());
    Settings::setA(window->getAInput());
    Settings::setB(window->getBInput());
    Settings::setQ(window->getQInput());
    Settings::setC(window->getCInput());
    Settings::setSeuil(window->getSeuilInput());
    delete window->_algorithm;
    window->_algorithm = new Algorithm();
    return TRUE;
}

gboolean Window::runCallback(GtkWidget *widget, gpointer data) {
    auto *window = (Window *) data;
    if (window->_algorithm->needStep()) {
        window->_algorithm->step();
        gtk_label_set_text(GTK_LABEL(window->_resultLabel),
                           utils::toString(window->_algorithm->getLongueurMin()).c_str());
    }
    return TRUE;
}

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

void Window::show() {
    gtk_widget_show_all(_window);
    gtk_main();
}

int Window::getNbVilleInput() const {
    return std::stoi(gtk_entry_get_text(GTK_ENTRY(_nbVilleInput)));
}

int Window::getNbFourmiInput() const {
    return std::stoi(gtk_entry_get_text(GTK_ENTRY(_nbFourmiInput)));
}

double Window::getAInput() const {
    return std::stod(gtk_entry_get_text(GTK_ENTRY(_aInput)));
}

double Window::getBInput() const {
    return std::stod(gtk_entry_get_text(GTK_ENTRY(_bInput)));
}

double Window::getCInput() const {
    return std::stod(gtk_entry_get_text(GTK_ENTRY(_cInput)));
}

double Window::getQInput() const {
    return std::stod(gtk_entry_get_text(GTK_ENTRY(_qInput)));
}

double Window::getSeuilInput() const {
    return std::stod(gtk_entry_get_text(GTK_ENTRY(_seuilInput)));
}
