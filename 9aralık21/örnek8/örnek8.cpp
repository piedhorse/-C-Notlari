/* continue ile d�ng�n�n bir �evrimini  sonland�rma */
#include<iostream>
using  namespace std;
int main()
{
	
	setlocale(LC_ALL,"Turkish");


for(int i=1; i<=10; i++)

{

if (i==8)
{


cout<<"pas ge�ti\n";
continue;


}
cout<<i<<endl;



}

	return 0;
 } 
