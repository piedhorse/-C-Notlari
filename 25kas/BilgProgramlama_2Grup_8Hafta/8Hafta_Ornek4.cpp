/*
Bu program kullan�c� ad� ve �ifre ile sisteme giri� yap�lmas�n� sa�lamaktad�r.
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
  
  cout<<"Kullan�c� Ad�:";
  cin>>kullAd;
  cout<<"Sifre:";
  cin>>sifre;
  
  if(kullAd == user && sifre == password)
  {
   	cout<<"Sisteme giri� yapt�n�z"<<endl;
  }
  else if(kullAd == user && sifre != password)
  {
  	cout<<"�ifreyi yanl�� girdiniz"<<endl;
  }
  else if(kullAd != user && sifre == password)
  {
  	cout<<"Kullan�c� ad� yanl�� girildi"<<endl;
  }
  else if(kullAd != user && sifre != password)
  {
  	cout<<"Kullan�c� ad� ve �ifre hatal�"<<endl;
  }
  
  
  
  return 0;
}
