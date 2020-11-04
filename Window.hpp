#ifndef TP2_WINDOW_HPP
#define TP2_WINDOW_HPP

#include <gtk/gtk.h>

#include "Settings.hpp"


class Window {
public:
    Window(int argc, char **argv);

    ~Window();

public:
    void show();

private:
    GtkWidget *_window;
};


#endif //TP2_WINDOW_HPP
