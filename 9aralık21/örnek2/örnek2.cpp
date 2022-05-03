/*0 girilene kadar, kulanýcýnn girdiði tüm sayýlarýn toplamý*/
#include<iostream>
using  namespace std;
int main()
{
	
	setlocale(LC_ALL,"Turkish");
	int number;
	int sum;
	 cout<<"bir sayý giriniz :";
	 cin>>number;
	 
	 while(number !=0)
	 {
	 sum+=number;
	 cout<<"birsayý gir:";
	 cin>>number;
	 }
	
	
	
	cout<<"girilen sayýlarýn toplamý :"<<sum;
	
	
	return 0;
 } 
