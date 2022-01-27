/* Activity 1.4

Fix the syntax errors in the given code. The goal of the code is to calculate the length of the side of a triangle given the lengths of the other 2 sides and the angle between them using the law of cosines shown below:

You can write the error code free here, and then submit

*/

// The sintax error was the error was that it did not have the main() function, and the skeleton to be able to run the program.


#include <iostream>
#include <math.h>
using namespace std;

int main() {

double side_a,side_b,side_c,side_c2,angle=0;

std::cout<<"// Program that calculate the sides of triangles// \n\n";

std::cout<<"Enter the length of SIDE A of Triangle \n";
cin>>side_a;

std::cout<<"Enter the length of SIDE B of Triangle \n";
cin>>side_b;

std::cout<<"Enter the ANGLE'S VALUE of Triangle \n";
cin>>angle;

// I had research about coseno function in https://es.wikipedia.org/wiki/Cos_(math.h).

// FORMULA c^2= a^2 + b^2 - (2ab cos(angle))
//         c = √(a^2 + b^2 - (2ab cos(angle)))

side_c= ( (pow(side_a,2)) +  (pow(side_b,2)) ) - (2 * side_a * side_b * cos(angle));     

side_c2= (sqrt(side_c));

std::cout<<"The SIDE C of Triangle is:\n";
cout<<side_c2;


  return 0;
}

