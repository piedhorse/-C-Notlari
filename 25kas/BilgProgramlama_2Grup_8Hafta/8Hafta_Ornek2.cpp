#include<iostream>
using namespace std;
int main()
{
  //T�rk�e karakterlerin d�zg�n ��kmas� i�in
  setlocale(LC_ALL,"Turkish");
  
  short yas;
  
  cout<<"Ya��n�z� giriniz:";
  cin>>yas;
  
  if(yas>=18)
  {
   	cout<<"Kanunen re�itsiniz.\n";
   	cout<<"Kanunen imza yetkiniz var.";
  }
  else
  {
  	cout<<"Kanunen re�it de�ilsiniz.\n";
  	cout<<"Tek ba��n�za imza yetkiniz yoktur.";
  }
   
   
   
  return 0;
}
