/*0 girilene kadar, kulanýcýnn girdiði tüm sayýlarýn karelerini ekrana yazdýran program */
#include<iostream>
using  namespace std;
int main()
{
	
	setlocale(LC_ALL,"Turkish");


/*-----------------------------------------------------------*/

	int number;
	
	
	
	do
	{
		
cout<<"bir sayý giriniz :";
cin>>number;
cout<<number*number<<endl;		
		
		
	}
	while(number !=0);
	
	
	
	/*-----------------------------------------------------------*/
	
	return 0;
 } 
