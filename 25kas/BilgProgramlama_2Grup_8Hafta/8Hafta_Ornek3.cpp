/*
Bu program 3 kenar� girilen bir ��genin �e�idini bulmaktad�r.
*/
#include<iostream>
using namespace std;
int main()
{
  //T�rk�e karakterlerin d�zg�n ��kmas� i�in
  setlocale(LC_ALL,"Turkish");
  
  int a,b,c;
  
  cout<<"Birinci kenar� giriniz:";
  cin>>a;
  cout<<"�kinci kenar� giriniz:";
  cin>>b;
  cout<<"���nc� kenar� giriniz:";
  cin>>c;
     
  //E�kenar m� ?
  if(a == b && a == c && b == c)
     cout<<"Bu ��gen e�kenard�r";
     
   
  //�kizkenar m�?    3 ihtimal  1) a = b ve a != c   2) a = c ve a != b  3)  b = c ve b != a
  if(a == b && a != c)
   	cout<<"�kizkenar ��gen";
  if(a == c && a != b)
   	cout<<"�kizkenar ��gen";
  if(b == c && b != a)
   	cout<<"�kizkenar ��gen"; 	
   	
  //�e�itkenar m�?
  if(a != b && a != c && b != c)
    cout<<"�e�itkenar ��gen";
   
  return 0;
}
