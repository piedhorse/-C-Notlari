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

// FARKLI  FAALÝYET ALANLARINDA  AYNI DEÐÝÞKEN ÝSMÝ TEKRAR KULLLANILABÝLÝR
/*ÝÇ BLOKLARDA , DIÞ BLOKTA TANIMLI OLAN V EAYNI ÝSME SAHÝP OLAN DEÐÝÞKENLER, 
DIÞ BLOKLARDAKÝ  DEÐÝÞKENÝ  ÝÇ BLOKTA ETKÝSÝZ HALE GETÝRÝR.*/







