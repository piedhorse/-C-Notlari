#include <stdio.h>

float a; // GLOBAL FAAL�YET ALANI
int b(int a); // a: Fonksiyon prototipi  faaliyet alan� 
 
int main ()
{
	int  a=5; // a: blok  faaliyet alan� (DI�TA)
	
	printf ("%d\n", a); // ��kt� 5
	
	{
		int a=3; // a: blok faaliyet alan� (i�te)
		printf ("%d\n", a); // ��kt� 3	
		
	 } 
	
		printf ("%d\n", b(2)); // ��kt� 2
		
	return 0;
}

int b(int a) //a: blok faaliyet alan�
{
return a;
}
// ��kt� 5 3 2

