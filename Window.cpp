#include "Window.hpp"


Window::Window(int argc, char **argv) {
    gtk_init(&argc, &argv);
    _window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(_window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_container_add(GTK_CONTAINER(_window), gtk_label_new("Hello World !"));
}

Window::~Window() {
    delete _window;
}

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

void Window::show() {
    gtk_widget_show_all(_window);
    gtk_main();
}