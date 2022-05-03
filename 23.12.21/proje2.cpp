/*
Decimal sayýyý binary sayýya  dönüþtüren  recursive fonksiyon */
#include<iostream >
using namespace  std;

string DecimalToBinary(int number)
{
	if (number==1)
	  return "1";
    else 
	 return   DecimalToBinary(number/2) + to_string (number%2);
	 
}




int main ()
{


int sayi;
cout<<"bir sayý giriniz:";
cin>>sayi;
cout<<"girilen sayýnýn binary  olarak karþýlðý="<< DecimalToBinary(sayi);


return 0;

}
