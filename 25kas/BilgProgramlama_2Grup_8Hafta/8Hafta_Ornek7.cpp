/*
Ýç-içe if kullanýmý
*/
#include<iostream>
using namespace std;
int main()
{
  //Türkçe karakterlerin düzgün çýkmasý için
  setlocale(LC_ALL,"Turkish");
  
  string kullAd, sifre;
  short yas;
  
  cout<<"Kullanýcý adýný giriniz:";
  cin>>kullAd;
  
  if(kullAd == "Arel")
  {
  	system("cls"); //Console ektanýný temizler
  	cout<<"Þifreyi giriniz:";
  	cin>>sifre;
  	if(sifre == "1234")
  	{
  	   system("cls");
  	   cout<<"Yaþýnýzý giriniz:";
	   cin>>yas; 
	   if(yas>=18)
	   {
	   	 cout<<"Sisteme giriþ yapabilirsiniz";	   	
	   }
	   else
	   {
	   	 cout<<"Sisteme giriþ izniniz yok";
	   }
  	}
	else
	{
		cout<<"Þifre hatalý girildi.";
	}
  }
  else
  {
  	cout<<"Kullanýcý adý hatalý";
  }
  
  return 0;
}
