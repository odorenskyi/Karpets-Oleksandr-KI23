#ifndef MODULESKARPETS_H_INCLUDED
#define MODULESKARPETS_H_INCLUDED

#include <cmath>

class ClassLab12_Karpets {

public:
    ClassLab12_Karpets(float len) {
        lengthCube = len;
        ripeness = 'n';
    }

    void setLen(float len) {
        lengthCube = len;
    }

    float getLen() {
        return lengthCube;
    }

    float getVol() {
        return pow(lengthCube, 3);
    }

    void setRipn() {
        if (ripeness = 'n') ripeness = 'y';
        else ripeness = 'n';
    }

    char getRipn() {
        return ripeness;
    }
private:
    float lengthCube;
    char ripeness;
};

#endif // MODULESKARPETS_H_INCLUDED
