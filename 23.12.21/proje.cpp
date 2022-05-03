
/* RECURSÝVE FUNCTÝON  */
#include<iostream >
using namespace  std;

unsigned long long faktoriyel (int number )
{
	
	if (number==1) /* kendi kendine çaðýracak*/
	return 1;
	else
	return number*faktoriyel(number-1);
	
}





int main ()
{


int sayi;
cout<<"bir sayý giriniz:";
cin>>sayi;
cout<<"girilen sayýnýn faktoriyeli= "<<faktoriyel(sayi);










return 0;

}
