/*
Bu program kullan�c� ad� ve �ifre ile sisteme giri� yap�lmas�n� sa�lamaktad�r.
Sisteme giri� i�in kullan�c�n 5 tane hakk� bulunmaktad�r.
*/
#include<iostream>

#define user "Arel"
#define password "1234"

using namespace std;
int main()
{
  //T�rk�e karakterlerin d�zg�n ��kmas� i�in
  setlocale(LC_ALL,"Turkish");
  
  string kullAd, sifre;
  short sayac = 5;
  
  start:
  	if(sayac>=1)
  	{
	   cout<<"Kullan�c� Ad�:";
       cin>>kullAd;
       cout<<"Sifre:";
       cin>>sifre;
    }
    else
    {
    	goto end;
	}
  
  if(kullAd == user && sifre == password)
  {
   	cout<<"Sisteme giri� yapt�n�z"<<endl;
  }
  else if(kullAd == user && sifre != password)
  {
  	cout<<"�ifreyi yanl�� girdiniz"<<endl;
  	sayac--;
  	cout<<"Sisteme giri� yapabilmek i�in "<<sayac<<" hakk�n�z kald�."<<endl;
  	goto start;
  }
  else if(kullAd != user && sifre == password)
  {
  	cout<<"Kullan�c� ad� yanl�� girildi"<<endl;
  	sayac--;
  	cout<<"Sisteme giri� yapabilmek i�in "<<sayac<<" hakk�n�z kald�."<<endl;
  	goto start;
  }
  else if(kullAd != user && sifre != password)
  {
  	cout<<"Kullan�c� ad� ve �ifre hatal�"<<endl;
  	sayac--;
  	cout<<"Sisteme giri� yapabilmek i�in "<<sayac<<" hakk�n�z kald�."<<endl;
  	goto start;
  }
  
  end:
    cout<<"Program sonland�";
  
  return 0;
}
