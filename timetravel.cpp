#include<iostream>
using namespace std ;
void timeTravel(int hours,int minutes) ;
 
main()
{
int Hours, Minutes ;
cout<<"Enter Hours: ";
cin>> Hours ;
cout<<"Enter Minutes: ";
cin>> Minutes ;
timeTravel(Hours,Minutes) ;

}
void timeTravel(int hours,int minutes) 
{
int newMinutes = minutes + 15 ;

if(newMinutes>59)
{
int newHours = hours + 1 ;
cout<< newHours<<":"<< newMinutes ;

}

if(newMinutes<59) 
{
cout<<hours <<":"<< newMinutes ;

}

}	