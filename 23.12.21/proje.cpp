
/* RECURS�VE FUNCT�ON  */
#include<iostream >
using namespace  std;

unsigned long long faktoriyel (int number )
{
	
	if (number==1) /* kendi kendine �a��racak*/
	return 1;
	else
	return number*faktoriyel(number-1);
	
}





int main ()
{


int sayi;
cout<<"bir say� giriniz:";
cin>>sayi;
cout<<"girilen say�n�n faktoriyeli= "<<faktoriyel(sayi);










return 0;

}
