#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 double h_inches, d_feet, d_inches, angle_degrees;

 cout<<"Enter the height in inches:";
 cin>>h_inches;
 cout<<"Enter the distance in feet:";
 cin>>d_feet;
 cout<<"Enter the distance in inches:";
 cin>>d_inches;
 cout<<"Enter the angle in degrees:";
 cin>>angle_degrees;

 double d_total_inches = d_feet * 12 + d_inches;
 double angle_radians = angle_degrees * M_PI/180;
 double tree_height_feet = (h_inches + d_total_inches * tan(angle_radians))/12;

 cout<<"The height of the tree is: "<< tree_height_feet <<"feet." <<endl;
    return 0;
}
