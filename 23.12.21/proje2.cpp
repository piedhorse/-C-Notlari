/*
Decimal say�y� binary say�ya  d�n��t�ren  recursive fonksiyon */
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
cout<<"bir say� giriniz:";
cin>>sayi;
cout<<"girilen say�n�n binary  olarak kar��l��="<< DecimalToBinary(sayi);


return 0;

}
