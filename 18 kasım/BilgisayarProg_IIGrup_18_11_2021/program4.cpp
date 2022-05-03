//Operatörler
#include<iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish");
   
   //Mod alma operatörü
   int s1=11;
   int s2=3;
   int sonuc;
   sonuc = s1 % s2;
   cout<<sonuc<<endl;
   
   //Aritmetik operatörlerde öncelik
   int a;
   a = (8+2)*2+1-5%3/2;
   cout<<a<<endl;
   
   //Artýrma ve Azaltma operatörleri;
   int b = 10;
   
   ++b;  //b 1 artýrýlýr
   b++;  //b 1 artýrýlýr
   
   --b;  //b 1 azaltýlýr
   b--;  //b 1 azaltýlýr
         
   int c;
   b = 10;
   c = b++;  // c=10 olur, b=11 olur. Çünkü ++ düþük önceliklidir.
   
   b = 10;
   c = ++b;  // c=11 olur, b=11 olur. Çünkü ++ yüksek önceliklidir.		 
		 
   //Atama operatörleri;  Toplam ve Ata, Çýkar ve Ata, Çarp ve Ata, Böl ve Ata
   
   c = c + 10;  //c'yi 10 artýr
   c += 10;	    //c'yi 10 artýr
   
   c = c - 10;  //c'yi 10 azalttý
   c -= 10;     //c'yi 10 azalttý
   
   c = c * 10;  
   c *= 10;
   
   c = c / 10;
   c /= 10;
   	 	
   return 0;	
} 
