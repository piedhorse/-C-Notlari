/*   klavyeden girilen say�n�n  faktoriyelini hesplayan prog*/
#include<iostream>
using  namespace std;
int main()
{
	
	setlocale(LC_ALL,"Turkish");


unsigned long long  faktoriyel=1;
int number;
cout <<"bir say� gir:";
cin >>number ;
for(int i=number; i>=1; i--)
{
	faktoriyel *=i;
	
}
cout<<"faktoriyel sonucu:"<<faktoriyel;













	return 0;
 } 
