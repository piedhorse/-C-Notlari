/*0 girilene kadar, kulan�c�nn girdi�i t�m say�lar�n karelerini ekrana yazd�ran program */
#include<iostream>
using  namespace std;
int main()
{
	
	setlocale(LC_ALL,"Turkish");


/*-----------------------------------------------------------*/

	int number;
	
	
	
	do
	{
		
cout<<"bir say� giriniz :";
cin>>number;
cout<<number*number<<endl;		
		
		
	}
	while(number !=0);
	
	
	
	/*-----------------------------------------------------------*/
	
	return 0;
 } 
