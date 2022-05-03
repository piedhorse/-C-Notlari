/*kullanıcı tarafından girilen 10 adet sayının toplanması */
#include<iostream>
using  namespace std;
int main()
{
	
	setlocale(LC_ALL,"Turkish");
	int count=1;
	int sum=0;
	int number ;
	while (count<=10)
	{
	
	
	cout<<"bir sayı giriniz:";
	cin>>number;
	sum+=number; //+= ekleme yapar sum=sum+number
	count++;
	
	}
	
	cout<<"girilen sayıların toplamı :"<<sum;
	
	
	
	
	
	
	
	
	
	return 0;
 } 
