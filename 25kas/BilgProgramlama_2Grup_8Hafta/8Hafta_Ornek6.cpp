/*
100 üzerinden girilen puaný harf notuna dönüþtüren program
*/
#include<iostream>
using namespace std;
int main()
{
  //Türkçe karakterlerin düzgün çýkmasý için
  setlocale(LC_ALL,"Turkish");
  
  short puan;
  
  cout<<"Puaný giriniz:";
  cin>>puan;
  
  if(puan>100)
    cout<<"100'den büyük geçersiz bir puan girdiniz.";
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
    cout<<"0'dan küçük geçersiz bir puan girdiniz.";
  return 0;
}
