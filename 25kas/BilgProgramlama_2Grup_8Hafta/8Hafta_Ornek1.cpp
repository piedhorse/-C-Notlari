#include<iostream>
using namespace std;
int main()
{
  //T�rk�e karakterlerin d�zg�n ��kmas� i�in
  setlocale(LC_ALL,"Turkish");
  
  //De�i�ken tan�mlamalar�
  int a,b;
  int Toplam, Fark, Carpim, Bolum;	
  
  //Veri Giri�
  cout<<"Birinci say�y� giriniz:";
  cin>>a;
  cout<<"�kinci say�y� giriniz:";
  cin>>b;

  //��lemler
  Toplam = a+ b;
  Fark = a-b;
  Carpim = a*b;
  Bolum = a/b;
  
  //��kt�
  cout<<"Toplam="<<Toplam<<endl;
  cout<<"Fark="<<Fark<<endl;
  cout<<"�arp�m="<<Carpim<<endl;
  cout<<"B�l�m="<<Bolum<<endl;
  	
  return 0;
}
