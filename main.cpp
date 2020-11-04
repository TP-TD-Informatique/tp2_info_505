#include <iostream>
#include <vector>

#include "Settings.hpp"
#include "Window.hpp"


int main(int argc, char **argv) {
    srand(time(nullptr));
    Settings::setNbVille(100);
    Settings::setNbFourmi(10);
    Settings::setA(1.0);
    Settings::setB(1.0);
    Settings::setSeuil(10.0);
    Settings::setC(0.7);
    Settings::setQ(1.0);

    // Création de la fenêtre
    auto *window = new Window(argc, argv);
    window->show();

    delete window;

    return 0;
}
