/*
100 �zerinden girilen puan� harf notuna d�n��t�ren program
*/
#include<iostream>
using namespace std;
int main()
{
  //T�rk�e karakterlerin d�zg�n ��kmas� i�in
  setlocale(LC_ALL,"Turkish");
  
  short puan;
  
  cout<<"Puan� giriniz:";
  cin>>puan;
  
  if(puan>100)
    cout<<"100'den b�y�k ge�ersiz bir puan girdiniz.";
  else if(puan>=85)
    cout<<"Notunuz A";
  else if(puan>=75)
    cout<<"Notunuz B";
  else if(puan>=60)
    cout<<"Notunuz C";
  else if(puan>=45)
    cout<<"Notunuz D";
  else if(puan>=30)
    cout<<"Notunuz E";
  else if(puan>=0)
    cout<<"Notunuz F";
  else
    cout<<"0'dan k���k ge�ersiz bir puan girdiniz.";
  return 0;
}
