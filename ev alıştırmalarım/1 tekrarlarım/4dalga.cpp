/*kullan�c� taraf�ndan girilen say�n�n faktoriyelini veren program 
*/

#include <iostream>
using namespace std;
 int faktoriyel(int number);/*fonksiyon buraya yaz�l�r */
                                                                                                                                                  
 int main()
 {
 	int sayi;
 	cout<<"bir say� giriniz :";
 	cin>>sayi;
 	cout<<faktoriyel(sayi);
 	return 0;
 	
 }

int faktoriyel(int number)
{
	int i, sonuc=1;
	for(i=1;i<=number;i++)
	{
		sonuc*=i;
	}
	return sonuc;
	
}
