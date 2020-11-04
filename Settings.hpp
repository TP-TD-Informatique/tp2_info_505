#ifndef TP2_SETTINGS_HPP
#define TP2_SETTINGS_HPP


class Settings final {
private:
    Settings();

    ~Settings();

public:
    static int getNbVille();

    static void setNbVille(int nbVille);

    static int getNbFourmi();

    static void setNbFourmi(int nbFourmi);

    static double getA();

    static void setA(double a);

    static double getB();

    static void setB(double b);

    static double getSeuil();

    static void setSeuil(double seuil);

    static double getQ();

    static void setQ(double q);

    static double getC();

    static void setC(double c);

private:
    static int _nbVille;
    static int _nbFourmi;
    static double _a;
    static double _b;
    static double _seuil;
    static double _q;
    static double _c;
};


#endif //TP2_SETTINGS_HPP
