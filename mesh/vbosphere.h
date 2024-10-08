#ifndef VBOSPHERE_H
#define VBOSPHERE_H

#include "drawable.h"

class VBOSphere : public Drawable {
private:
    unsigned int vaoHandle;
    GLuint nVerts, elements;
    float radius, slices, stacks;

    void generateVerts(float*, float*, float*, GLuint*);

public:
    VBOSphere(float, int, int);

    void render() const;

    int getVertexArrayHandle();
};

#endif // VBOSPHERE_H
