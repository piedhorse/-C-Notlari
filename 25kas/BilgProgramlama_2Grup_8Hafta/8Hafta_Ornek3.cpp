/*
Bu program 3 kenarý girilen bir üçgenin çeþidini bulmaktadýr.
*/
#include<iostream>
using namespace std;
int main()
{
  //Türkçe karakterlerin düzgün çýkmasý için
  setlocale(LC_ALL,"Turkish");
  
  int a,b,c;
  
  cout<<"Birinci kenarý giriniz:";
  cin>>a;
  cout<<"Ýkinci kenarý giriniz:";
  cin>>b;
  cout<<"Üçüncü kenarý giriniz:";
  cin>>c;
     
  //Eþkenar mý ?
  if(a == b && a == c && b == c)
     cout<<"Bu üçgen eþkenardýr";
     
   
  //Ýkizkenar mý?    3 ihtimal  1) a = b ve a != c   2) a = c ve a != b  3)  b = c ve b != a
  if(a == b && a != c)
   	cout<<"Ýkizkenar üçgen";
  if(a == c && a != b)
   	cout<<"Ýkizkenar üçgen";
  if(b == c && b != a)
   	cout<<"Ýkizkenar üçgen"; 	
   	
  //Çeþitkenar mý?
  if(a != b && a != c && b != c)
    cout<<"Çeþitkenar üþgen";
   
  return 0;
}
