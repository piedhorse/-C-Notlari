//Bu programda giri� / ��k�� i�lemleri yap�lmaktad�r.
#include<iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish");
   //Veri ��k���	
   printf("Merhaba D�nya\n");   
   cout<<"Merhaba D�nya"<<endl;   
   cout<<"Benim ad�m Ahmet\t"<<"Bug�n hava �ok g�zel"<<endl;   
   string mesaj = "Bug�n hava bulutlu";
   cout<<mesaj<<endl;
   
   //Veri Giri�i
   string ad,soyad;
   short yas;
   cout<<"Ad�n�n� giriniz:";
   getline(cin,ad);     //Enter tu�una t�klanana dek t�m sat�r� al�r
   cout<<"Soyad�n� giriniz:";
   cin>>soyad;
   cout<<"Ya��n�z� giriniz:";
   cin>>yas;
   //Veri ��k���
   cout<<"----------------------"<<endl;
   cout<<"Ad="<<ad<<endl;
   cout<<"Soyad="<<soyad<<endl;
   cout<<"Ya�="<<yas<<endl;
   // cin.get   kullan�m�
   char karakter;
   cout<<"Devam edecekmisiniz<e/h>:";
   cin.get(karakter);
   
         	
   return 0;	
} 
