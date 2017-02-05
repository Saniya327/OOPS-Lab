/*Create a Circle class with following members.
A data member that stores the radius of a circle
A constructor function with an argument that initializes the radius
A function that computes and returns area of a circle
Create two derived classes Sector and Segment that inherit the Circle class. Both classes inherit radius and the function that returns the circle’s area from Circle. In addition to the members inherited from Circle, Sector and Segment have some specific members as follows:
Sector
1. A data member that stores the control angle of a sector (in radians)
2. A constructor function with arguments that initialize radius and angle
3. A function that computes and returns the area of a sector
Segment
1. A data member that stores the length of a segment in a circle
2. A constructor function with arguments that initialize radius and length
3. A function that computes and returns the area of a segment
Create the main () function to instantiate an object of each class and then call appropriate member functions to compute and return the area of a circle, sector and segment.
Note :
Area_of_circle = pi * r2
Area_of_Sector=r2θ/2
Area_of_segment=r2 *((r-h)/r) – (r-h) (2rh-h2)1/2
Where r is the radius of a circle, θ is the central angle of a sector in radians, h is the length of a segment and ((r-h)/r) is in radians.*/

#include<iostream>
using namespace std;
#define PI 3.14
#include<math.h>


class Circle
{
    protected:
         int radius;
    public:
        Circle(int a)
        { radius=a; }

        float area_of_circle()
        {
            float area;
            area=PI*radius*radius;
            return area;
        }
};

class Sector: public Circle
{
    protected:
        float angle;
    public:
        Sector(int rad,float ang):
        Circle(rad)
        {
            float radians;
            radians=(ang*PI)/180.0;
            angle=radians;
        }

        float area_of_sector()
        {
            float area;
            area=(radius*radius)*(angle/2.0);
            return area;
        }
};

class Segment:public Circle
{
    protected:
        int length;
    public:
        Segment(int rad,int len):

            Circle(rad)
        {
            length=len;
        }

        float area_of_segment()
        {
            float area;
            //area=(radius*radius) *((radius-length)/radius) – ((radius-length)*(pow((2*radius*length)-(length*length),1/2)));

            area=pow(radius,2)*((radius-length)/radius)-(radius-length)*pow((2*radius*length-pow(length,2)),1/2);
            return area;
        }
};

int main()
{
    Circle C(1);
    Sector Sec(1,1);
    Segment Seg(1,1);

    cout<<"\nArea of circle is: "<<C.area_of_circle();
    cout<<"\nArea of sector is: "<<Sec.area_of_sector();
    cout<<"\nArea of segment is: "<<Seg.area_of_segment();
}
