void func(int b)
 {
 int a= 5;
 	b=4;
 	{ int b = 9;
 	printf("%d/n", b); //output 9
	 
	 { 
	 int b= 10;
	 int c= 50;
	 printf ("%d/n",a); //output 5
	 printf ("%d/n",b); //output 10
	 }
	 printf ("%d/n",b); //output 9
	 a=3;
	 printf ("%d/n", c); //error!!
	 
	 
	 }
 	
 	printf ("%d/n",a); //output 3
 }

// FARKLI  FAAL�YET ALANLARINDA  AYNI DE���KEN �SM� TEKRAR KULLLANILAB�L�R
/*�� BLOKLARDA , DI� BLOKTA TANIMLI OLAN V EAYNI �SME SAH�P OLAN DE���KENLER, 
DI� BLOKLARDAK�  DE���KEN�  �� BLOKTA ETK�S�Z HALE GET�R�R.*/







