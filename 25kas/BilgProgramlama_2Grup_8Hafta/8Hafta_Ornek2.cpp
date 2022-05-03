#include<iostream>
using namespace std;
int main()
{
  //Türkçe karakterlerin düzgün çýkmasý için
  setlocale(LC_ALL,"Turkish");
  
  short yas;
  
  cout<<"Yaþýnýzý giriniz:";
  cin>>yas;
  
  if(yas>=18)
  {
   	cout<<"Kanunen reþitsiniz.\n";
   	cout<<"Kanunen imza yetkiniz var.";
  }
  else
  {
  	cout<<"Kanunen reþit deðilsiniz.\n";
  	cout<<"Tek baþýnýza imza yetkiniz yoktur.";
  }
   
   
   
  return 0;
}
