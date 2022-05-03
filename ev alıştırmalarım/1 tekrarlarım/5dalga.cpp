/*
özyinelemeli fonksiyon kullanýlarak faktoriyel hesaplama 
*/
#include <iostream>
using namespace std;

int faktoriyel (int number );/*fonksiyon buraya yazýlýr */

int main()
{
	int sayi;
	cout<<"bir sayý giriniz:";
	cin>>sayi;
	cout<<faktoriyel(sayi);
	return 0;

}


int faktoriyel (int number)
{
	if (number <=1)
	return 1;
	else 
	return (number * faktoriyel(number-1));
	
}
