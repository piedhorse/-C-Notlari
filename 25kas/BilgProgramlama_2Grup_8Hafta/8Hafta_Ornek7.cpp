/*
��-i�e if kullan�m�
*/
#include<iostream>
using namespace std;
int main()
{
  //T�rk�e karakterlerin d�zg�n ��kmas� i�in
  setlocale(LC_ALL,"Turkish");
  
  string kullAd, sifre;
  short yas;
  
  cout<<"Kullan�c� ad�n� giriniz:";
  cin>>kullAd;
  
  if(kullAd == "Arel")
  {
  	system("cls"); //Console ektan�n� temizler
  	cout<<"�ifreyi giriniz:";
  	cin>>sifre;
  	if(sifre == "1234")
  	{
  	   system("cls");
  	   cout<<"Ya��n�z� giriniz:";
	   cin>>yas; 
	   if(yas>=18)
	   {
	   	 cout<<"Sisteme giri� yapabilirsiniz";	   	
	   }
	   else
	   {
	   	 cout<<"Sisteme giri� izniniz yok";
	   }
  	}
	else
	{
		cout<<"�ifre hatal� girildi.";
	}
  }
  else
  {
  	cout<<"Kullan�c� ad� hatal�";
  }
  
  return 0;
}
