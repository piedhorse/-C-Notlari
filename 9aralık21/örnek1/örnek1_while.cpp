/*kullan�c� taraf�ndan girilen 10 adet say�n�n toplanmas� */
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
	
	
	cout<<"bir say� giriniz:";
	cin>>number;
	sum+=number; //+= ekleme yapar sum=sum+number
	count++;
	
	}
	
	cout<<"girilen say�lar�n toplam� :"<<sum;
	
	
	
	
	
	
	
	
	
	return 0;
 } 
