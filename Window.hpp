#ifndef TP2_WINDOW_HPP
#define TP2_WINDOW_HPP

#include <gtk/gtk.h>
#include <string>

#include "Settings.hpp"
#include "Algorithm.hpp"
#include "utils.hpp"

class Window {
public:
    Window(int argc, char **argv);

    ~Window();

private:
    void createIHM();

    void paint(cairo_t *cr);

    static gboolean okCallback(GtkWidget *widget, gpointer data);

    static gboolean runCallback(GtkWidget *widget, gpointer data);

    static gboolean realize_evt_reaction(GtkWidget *widget, gpointer data);

    static gboolean expose_evt_reaction(GtkWidget *widget, GdkEventExpose *event, gpointer data);

public:
    void show();

    int getNbVilleInput() const;

    int getNbFourmiInput() const;

    double getAInput() const;

    double getBInput() const;

    double getCInput() const;

    double getQInput() const;

    double getSeuilInput() const;

private:
    GtkWidget *_window;
    GtkWidget *_canvas;
    GtkWidget *_nbVilleInput;
    GtkWidget *_nbFourmiInput;
    GtkWidget *_aInput;
    GtkWidget *_bInput;
    GtkWidget *_cInput;
    GtkWidget *_qInput;
    GtkWidget *_seuilInput;
    GtkWidget *_resultLabel;

    Algorithm *_algorithm;
};


#endif //TP2_WINDOW_HPP
