/*KULLANICI TARAFINBDAN G�R�LEN BA�LANGIC VE B�T�� DEGERLER� ARASINDAK�  SAYILARN TOPLAMINI BULAN VE EKRANA YAZAR*/
#include<iostream>
using  namespace std;
int main()
{
	
	setlocale(LC_ALL,"Turkish");


	unsigned long long toplam=0;
	int baslangicdegeri, bitisdegeri;
	  cout<<"baslang�c degerini gir:";
	  cin>>baslangicdegeri ;
	  cout<<"bitis degeri gir:";
	  cin>>bitisdegeri;
	  
	  for(int i=baslangicdegeri; i<=bitisdegeri; i++)
	  {
	  	
	  	toplam+=i;
	  	
	  	
	  	
	  	
	  	
	  	
	  	
	  }

	
	
	
	
	
	cout<<baslangicdegeri<<"ile"<<bitisdegeri<<"aras�ndaki say�lar�n toplam� ="<<toplam ;
	
	
	
	return 0;
 } 
