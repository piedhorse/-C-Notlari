#include<iostream>
using namespace std;

unsigned long long faktoriyel(int number)
{
	if(number==1)
	   return 1;
	else
	   return number*faktoriyel(number-1);	
}


int main()
{
	int sayi;
	cout<<"Bir sayı giriniz:";
	cin>>sayi;
	cout<<"Girilen sayının faktoriyeli="<<faktoriyel(sayi); 
	
	return 0;
}
