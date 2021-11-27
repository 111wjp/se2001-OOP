#include "Cylinder.h"

Cylinder::Cylinder(float a,float b,float r,float h):Circle(a,b,r),height(h){
}

void Cylinder::setHeight(float h){
    height = h;
}

float Cylinder::getHeight() const {
    return height;
}

float Cylinder::area() const {
    return Circle::area()*2 + 2*3.14159*radius*height;
}

float Cylinder::volume() const{
    return 2*Circle::area()*height;
}


ostream &operator << (ostream &output,const Cylinder& cy){
    output<<"Center=["<<cy.x<<cy.y<<"],r = "<<cy.radius<<".h = "<<cy.height<<"\narea = "<<cy.area()<<",volume"<<cy.volume()<<endl;
    return output;
}