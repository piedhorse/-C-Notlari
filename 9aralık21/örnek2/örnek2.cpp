/*0 girilene kadar, kulan�c�nn girdi�i t�m say�lar�n toplam�*/
#include<iostream>
using  namespace std;
int main()
{
	
	setlocale(LC_ALL,"Turkish");
	int number;
	int sum;
	 cout<<"bir say� giriniz :";
	 cin>>number;
	 
	 while(number !=0)
	 {
	 sum+=number;
	 cout<<"birsay� gir:";
	 cin>>number;
	 }
	
	
	
	cout<<"girilen say�lar�n toplam� :"<<sum;
	
	
	return 0;
 } 
