#include <cstring>
#include <cstdio>
using namespace std;
 
 int main()
 {
 	char metin []="umutalacatl�";
 	char anahtar[12];
 	
 	cout<<"anahtar kelime : "; gets(anahtar) ;
 	
 	bool sonuc=false;
 	sonuc=strstr (metin ,anahtar);
 	   
 	   
 	   if(sonuc==false )
cout<<"anahtar kelime bulunamad�:" ;

else 
cout<<"anahtar kelime bulundu!!!!";

return 0;	
 	
 	
 	
 	
 	
 	
 	
 }
