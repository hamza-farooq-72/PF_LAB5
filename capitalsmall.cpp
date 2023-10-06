#include<iostream>
using namespace std;

string checkAlphabetCase(char letter) ;

	main(){
	char alphabet ;
	cout<<"Enter a character (A/a): ";
	cin>> alphabet ;
	cout<< checkAlphabetCase(alphabet) ;
	return 0 ;
}
	
	string checkAlphabetCase(char letter) 
{
	if(letter== 'A')
{
	string ifCapital = "You have entered Capital A" ;
	return ifCapital ;
}
	if(letter== 'a')
{
	string ifSmall = "You have entered small A" ;
	return ifSmall ;
}
}
