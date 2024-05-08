#ifndef CLASSLAB12_H_INCLUDED
#define CLASSLAB12_H_INCLUDED

#include <cmath>

class ClassLab12_Karpets {

public:
    void setLen(float len) {
        lengthCube = len;
    }

    float getLen() {
        return lengthCube;
    }

    float getVol() {
        return pow(lengthCube, 3);
    }

    void setRipn(char status) {
        ripeness = status;
    }

    char getRipn() {
        return ripeness;
    }
private:
    float lengthCube;
    char ripeness;
};

#endif // CLASSLAB12_H_INCLUDED
