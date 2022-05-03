#include<iostream>
using namespace std;
int main()
{
  //Türkçe karakterlerin düzgün çýkmasý için
  setlocale(LC_ALL,"Turkish");
  
  //Deðiþken tanýmlamalarý
  int a,b;
  int Toplam, Fark, Carpim, Bolum;	
  
  //Veri Giriþ
  cout<<"Birinci sayýyý giriniz:";
  cin>>a;
  cout<<"Ýkinci sayýyý giriniz:";
  cin>>b;

  //Ýþlemler
  Toplam = a+ b;
  Fark = a-b;
  Carpim = a*b;
  Bolum = a/b;
  
  //Çýktý
  cout<<"Toplam="<<Toplam<<endl;
  cout<<"Fark="<<Fark<<endl;
  cout<<"Çarpým="<<Carpim<<endl;
  cout<<"Bölüm="<<Bolum<<endl;
  	
  return 0;
}
