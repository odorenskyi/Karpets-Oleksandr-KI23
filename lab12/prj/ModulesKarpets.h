#ifndef MODULESKARPETS_H_INCLUDED
#define MODULESKARPETS_H_INCLUDED

#include <cmath>


class ClassLab12_Karpets {

public:
    ClassLab12_Karpets(float len) {
        formatd(len);
    };

    void setLen(float len);
    void setRipn();

    float getLen() {
        return lengthCube;
    };

    float getVol() {
        return pow(lengthCube, 3);
    };

    char getRipn() {
        return ripeness;
    };
private:
    void formatd(float len);
    bool lenValidate(float len);
    float lengthCube;
    char ripeness;
};

void ClassLab12_Karpets::formatd(float len) {
    setLen(len);
    ripeness = 'n';
};

void ClassLab12_Karpets::setLen(float len) {
    if (lenValidate(len) == true) {
        lengthCube = len;
    }
    else { lengthCube = 0.1; }
};

bool ClassLab12_Karpets::lenValidate(float len) {
    if (len > 0 && len < 1) { return true; }
    else { return false; }
};

void ClassLab12_Karpets::setRipn() {
    if (ripeness == 'n') ripeness = 'y';
    else ripeness = 'n';
};

#endif // MODULESKARPETS_H_INCLUDED
