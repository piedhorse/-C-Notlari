/* Decimal say�y� Binary say�ya d�n��t�ren Recursive Function */
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
	cout<<"Bir say� giriniz:";
	cin>>sayi;
	cout<<"Girilen say�n�n binary olarak kar��l���="<<DecimalToBinary(sayi);	
	return 0;
}
