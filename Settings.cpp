#include "Settings.hpp"

int Settings::_nbVille = 100;
int Settings::_nbFourmi = 10;
double Settings::_a = 1.0;
double Settings::_b = 1.0;
double Settings::_seuil = 10.0;
double Settings::_q = 1.0;
double Settings::_c = 0.7;

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

Settings::Settings() = default;

Settings::~Settings() = default;

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

int Settings::getNbVille() {
    return _nbVille;
}

void Settings::setNbVille(int nbVille) {
    _nbVille = nbVille;
}

int Settings::getNbFourmi() {
    return _nbFourmi;
}

void Settings::setNbFourmi(int nbFourmi) {
    _nbFourmi = nbFourmi;
}

double Settings::getA() {
    return _a;
}

void Settings::setA(double a) {
    _a = a;
}

double Settings::getB() {
    return _b;
}

void Settings::setB(double b) {
    _b = b;
}

double Settings::getSeuil() {
    return _seuil;
}

void Settings::setSeuil(double seuil) {
    _seuil = seuil;
}

double Settings::getQ() {
    return _q;
}

void Settings::setQ(double q) {
    _q = q;
}

double Settings::getC() {
    return _c;
}

void Settings::setC(double c) {
    _c = c;
}
