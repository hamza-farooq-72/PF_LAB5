#include<iostream>
using namespace std;

string evenOrodd(int num) ;

	main()
{
	int number;
	cout<<"Enter a five-digit number: ";
	cin>> number ;
	cout<< evenOrodd(number) ;

	return 0 ;
}
	
	string evenOrodd(int num) 
{
	int firstDig , secondDig , thirdDig ,fouthDig , fifthDig , sum ;
	firstDig  = num%10 ;
	num = num/10 ;
	secondDig = num%10 ;
	num = num/10 ;
	thirdDig = num%10 ;
	num = num/10 ;
	fouthDig = num%10 ;
	num = num/10 ;
	fifthDig = num ;
	sum = firstDig + secondDig +thirdDig+ fouthDig +fifthDig ; 

if(sum%2==0)
{
	string res1 = "Evenish" ;
	return res1 ;
}
if(sum%2==1)
{
	string res2 = "Oddish" ;
	return res2 ;
}
}
