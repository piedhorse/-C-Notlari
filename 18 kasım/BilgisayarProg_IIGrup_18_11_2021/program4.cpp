//Operat�rler
#include<iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish");
   
   //Mod alma operat�r�
   int s1=11;
   int s2=3;
   int sonuc;
   sonuc = s1 % s2;
   cout<<sonuc<<endl;
   
   //Aritmetik operat�rlerde �ncelik
   int a;
   a = (8+2)*2+1-5%3/2;
   cout<<a<<endl;
   
   //Art�rma ve Azaltma operat�rleri;
   int b = 10;
   
   ++b;  //b 1 art�r�l�r
   b++;  //b 1 art�r�l�r
   
   --b;  //b 1 azalt�l�r
   b--;  //b 1 azalt�l�r
         
   int c;
   b = 10;
   c = b++;  // c=10 olur, b=11 olur. ��nk� ++ d���k �nceliklidir.
   
   b = 10;
   c = ++b;  // c=11 olur, b=11 olur. ��nk� ++ y�ksek �nceliklidir.		 
		 
   //Atama operat�rleri;  Toplam ve Ata, ��kar ve Ata, �arp ve Ata, B�l ve Ata
   
   c = c + 10;  //c'yi 10 art�r
   c += 10;	    //c'yi 10 art�r
   
   c = c - 10;  //c'yi 10 azaltt�
   c -= 10;     //c'yi 10 azaltt�
   
   c = c * 10;  
   c *= 10;
   
   c = c / 10;
   c /= 10;
   	 	
   return 0;	
} 
