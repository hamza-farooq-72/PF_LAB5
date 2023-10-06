#include<iostream>
#include<cmath>
using namespace std;


float heightFinder(float height,float angle) ;

int main()
{
float dis , angle ;
cout<< "Enter the distance from the base of the tree (in feet): ";
cin>> dis ;
cout<<"Enter the angle of elevation (in degrees): ";
cin>> angle ;
heightFinder(dis,angle) ;
return 0 ;
}

float heightFinder(float base,float angle)
{
float inradians = angle/57.2958 ;
float height = base*tan(inradians) ;
cout<<"The height of the tree is: " << height  << " feet";


}