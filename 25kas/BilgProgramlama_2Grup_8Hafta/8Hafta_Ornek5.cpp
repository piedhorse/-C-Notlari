/*
Bu program kullanýcý adý ve þifre ile sisteme giriþ yapýlmasýný saðlamaktadýr.
Sisteme giriþ için kullanýcýn 5 tane hakký bulunmaktadýr.
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
  short sayac = 5;
  
  start:
  	if(sayac>=1)
  	{
	   cout<<"Kullanýcý Adý:";
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
   	cout<<"Sisteme giriþ yaptýnýz"<<endl;
  }
  else if(kullAd == user && sifre != password)
  {
  	cout<<"Þifreyi yanlýþ girdiniz"<<endl;
  	sayac--;
  	cout<<"Sisteme giriþ yapabilmek için "<<sayac<<" hakkýnýz kaldý."<<endl;
  	goto start;
  }
  else if(kullAd != user && sifre == password)
  {
  	cout<<"Kullanýcý adý yanlýþ girildi"<<endl;
  	sayac--;
  	cout<<"Sisteme giriþ yapabilmek için "<<sayac<<" hakkýnýz kaldý."<<endl;
  	goto start;
  }
  else if(kullAd != user && sifre != password)
  {
  	cout<<"Kullanýcý adý ve þifre hatalý"<<endl;
  	sayac--;
  	cout<<"Sisteme giriþ yapabilmek için "<<sayac<<" hakkýnýz kaldý."<<endl;
  	goto start;
  }
  
  end:
    cout<<"Program sonlandý";
  
  return 0;
}
