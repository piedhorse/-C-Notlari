/*kullanýcý tarafýndan girilen sayýnýn faktoriyelini veren program 
*/

#include <iostream>
using namespace std;
 int faktoriyel(int number);/*fonksiyon buraya yazýlýr */
                                                                                                                                                  
 int main()
 {
 	int sayi;
 	cout<<"bir sayý giriniz :";
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
