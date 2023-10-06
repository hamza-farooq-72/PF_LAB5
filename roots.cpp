#include<iostream>
#include<cmath>
using namespace std;

void roots(int a,int b,int c) ;

	main()
{ 	int A , B , C ;
	cout<<"Enter the value of a: ";
	cin>> A ;
	cout<<"Enter the value of b: ";
	cin>> B ;
	cout<<"Enter the value of c: ";
	cin>> C ;
	roots(A,B,C) ;
}
	void roots(int a,int b,int c) 
{
	float Disc ;
	Disc = pow(b,2)-4*a*c ;
	if(Disc==0)
{
	float root1, root2 ;
	root1 = root2 =  -b/2*a ;
	cout<< "Solution: x = " << root1 ;
}
	if(Disc>0)
{
	float Root1 =  (-b+sqrt(Disc))/(2*a);
	float Root2 = (-b-sqrt(Disc))/(2*a) ;
	cout<< "Solutions: x = " << Root1 <<" and x = "<< Root2 ;

}
	if(Disc<0)
{
	float rOot1 = -b/2*a ;
	float rOot2 = sqrt(-Disc)/2*a ;
	cout<< "Complex Solutions: x = " << rOot1 <<" + " << rOot2 <<"i and x = " << rOot1 <<" - "<< rOot2 <<"i" ;
}
}