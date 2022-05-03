#include <stdio.h>

float a; // GLOBAL FAALÝYET ALANI
int b(int a); // a: Fonksiyon prototipi  faaliyet alaný 
 
int main ()
{
	int  a=5; // a: blok  faaliyet alaný (DIÞTA)
	
	printf ("%d\n", a); // çýktý 5
	
	{
		int a=3; // a: blok faaliyet alaný (içte)
		printf ("%d\n", a); // çýktý 3	
		
	 } 
	
		printf ("%d\n", b(2)); // çýktý 2
		
	return 0;
}

int b(int a) //a: blok faaliyet alaný
{
return a;
}
// çýktý 5 3 2

