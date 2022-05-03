/*KULLANICI TARAFINBDAN GÝRÝLEN BAÞLANGIC VE BÝTÝÞ DEGERLERÝ ARASINDAKÝ  SAYILARN TOPLAMINI BULAN VE EKRANA YAZAR*/
#include<iostream>
using  namespace std;
int main()
{
	
	setlocale(LC_ALL,"Turkish");


	unsigned long long toplam=0;
	int baslangicdegeri, bitisdegeri;
	  cout<<"baslangýc degerini gir:";
	  cin>>baslangicdegeri ;
	  cout<<"bitis degeri gir:";
	  cin>>bitisdegeri;
	  
	  for(int i=baslangicdegeri; i<=bitisdegeri; i++)
	  {
	  	
	  	toplam+=i;
	  	
	  	
	  	
	  	
	  	
	  	
	  	
	  }

	
	
	
	
	
	cout<<baslangicdegeri<<"ile"<<bitisdegeri<<"arasýndaki sayýlarýn toplamý ="<<toplam ;
	
	
	
	return 0;
 } 
