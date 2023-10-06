#include<iostream>
using namespace std;

string IsSymmetrical(int num) ;

	main()
{
	int number;
	cout<<"Enter a three-digit number: ";
	cin>> number ;
	cout<< IsSymmetrical(number) ;

	return 0 ;
}
	
	string IsSymmetrical(int num) 
{
	int firstDig , secondDig , thirdDig ;
	firstDig  = num%10 ;
	num = num/10 ;
	secondDig = num%10 ;
	num = num/10 ;
	thirdDig = num ;

if(firstDig==thirdDig)
{
	string res1 = "The number is symmetrical." ;
	return res1 ;
}
if(firstDig!=thirdDig)
{
	string res2= "The number is not symmetrical." ;
	return res2;
}
}
