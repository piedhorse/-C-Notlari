/* Decimal sayýyý Binary sayýya dönüþtüren Recursive Function */
#include<iostream>
using namespace std;

string  DecimalToBinary(int number)
{
	if(number == 1)
	  return "1";
	else
	  return  DecimalToBinary(number/2) + to_string(number%2); 	
}


int main()
{
	
	int sayi;
	cout<<"Bir sayý giriniz:";
	cin>>sayi;
	cout<<"Girilen sayýnýn binary olarak karþýlýðý="<<DecimalToBinary(sayi);	
	return 0;
}
