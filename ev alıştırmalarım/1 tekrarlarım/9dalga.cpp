#include  <iostream>
using namespace std;
 
 inline double  pi()
 {
 	
 	return 3.1415;
 	
 }
  int main ()
  {
  	double  r=1, alan=0;
  	alan=pi()*r*r;
  	cout<<"alan="<<alan;
  	

  	return 0;
  }
  // OUTPUT                      alan=3.1415
  
  /*
  inlinre t�r�nde  bir fonksiyonun   tan�mlanmas�n�  ve kullan�lmas�n� g�rebili�rsiniz
  bu programda pi() adl� bir  inline fonksiyon tan�mlanm��t�r.
   bu fonksiyon ana program taraf�ndan 
  �a��r�ld���nda , fonksiyon kodlar� �a��r�lan yere koyulur ve  orada  �al���r .
  
  */
