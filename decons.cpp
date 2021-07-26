#include <iostream>
using namespace std;

int main()
{
double radius, height, base, width, cylinder, volume, surface_area;



cout << "Enter cylinder height:\n";
cin >> height;
cout << "Enter cylinder radius:\n";
cin >> radius;

//Cylinder (radius, height);
cout << "The cylinder volume is " <<(3.14*radius*radius*height)<<endl;
cout << "The cylinder surface area is "<<(2*3.14*radius*height+2*3.14*radius*radius)<<endl;
return 0;
}


using namespace std;
class Cylinder
{
public:
	
// Constructors
Cylinder();
Cylinder(double r, double h);
// Accessors

double getRadius();
double getHeight();
void setRadius(double r);
void setHeight(double h);
double area();
double volume();
private:
	
double radius;
double height;
};



const double PI = 3.14159;
// Constructors

Cylinder::Cylinder()
{
radius = 0;
height = 0;
}
Cylinder::Cylinder(double r, double h)
{
radius = r;
height = h;
}
// Accessors
double Cylinder::getRadius()
{
return radius;
}
double Cylinder::getHeight()
{
return height;
}
// Setters
void Cylinder::setRadius(double r)
{
radius = r;
}
void Cylinder::setHeight(double h)
{
height = h;
}
// Calculations
double Cylinder::area()
{
return 2 * PI * radius * radius + 2 * PI * radius * height;
}
double Cylinder::volume()
{
return PI * radius * radius * height;
}
