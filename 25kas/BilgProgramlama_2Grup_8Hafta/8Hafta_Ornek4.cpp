/*
Bu program kullanýcý adý ve þifre ile sisteme giriþ yapýlmasýný saðlamaktadýr.
*/
#include<iostream>

#define user "Arel"
#define password "1234"

using namespace std;
int main()
{
  //Türkçe karakterlerin düzgün çýkmasý için
  setlocale(LC_ALL,"Turkish");
  
  string kullAd, sifre;
  
  cout<<"Kullanýcý Adý:";
  cin>>kullAd;
  cout<<"Sifre:";
  cin>>sifre;
  
  if(kullAd == user && sifre == password)
  {
   	cout<<"Sisteme giriþ yaptýnýz"<<endl;
  }
  else if(kullAd == user && sifre != password)
  {
  	cout<<"Þifreyi yanlýþ girdiniz"<<endl;
  }
  else if(kullAd != user && sifre == password)
  {
  	cout<<"Kullanýcý adý yanlýþ girildi"<<endl;
  }
  else if(kullAd != user && sifre != password)
  {
  	cout<<"Kullanýcý adý ve þifre hatalý"<<endl;
  }
  
  
  
  return 0;
}
