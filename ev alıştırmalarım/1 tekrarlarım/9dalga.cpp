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
  inlinre türünde  bir fonksiyonun   tanýmlanmasýný  ve kullanýlmasýný görebiliþrsiniz
  bu programda pi() adlý bir  inline fonksiyon tanýmlanmýþtýr.
   bu fonksiyon ana program tarafýndan 
  çaðýrýldýðýnda , fonksiyon kodlarý çaðýrýlan yere koyulur ve  orada  çalýþýr .
  
  */
