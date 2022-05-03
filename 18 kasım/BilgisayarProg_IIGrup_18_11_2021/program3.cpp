//Bu programda giriþ / çýkýþ iþlemleri yapýlmaktadýr.
#include<iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish");
   //Veri Çýkýþý	
   printf("Merhaba Dünya\n");   
   cout<<"Merhaba Dünya"<<endl;   
   cout<<"Benim adým Ahmet\t"<<"Bugün hava çok güzel"<<endl;   
   string mesaj = "Bugün hava bulutlu";
   cout<<mesaj<<endl;
   
   //Veri Giriþi
   string ad,soyad;
   short yas;
   cout<<"Adýnýný giriniz:";
   getline(cin,ad);     //Enter tuþuna týklanana dek tüm satýrý alýr
   cout<<"Soyadýný giriniz:";
   cin>>soyad;
   cout<<"Yaþýnýzý giriniz:";
   cin>>yas;
   //Veri Çýkýþý
   cout<<"----------------------"<<endl;
   cout<<"Ad="<<ad<<endl;
   cout<<"Soyad="<<soyad<<endl;
   cout<<"Yaþ="<<yas<<endl;
   // cin.get   kullanýmý
   char karakter;
   cout<<"Devam edecekmisiniz<e/h>:";
   cin.get(karakter);
   
         	
   return 0;	
} 
