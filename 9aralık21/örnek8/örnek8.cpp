/* continue ile döngünün bir çevrimini  sonlandýrma */
#include<iostream>
using  namespace std;
int main()
{
	
	setlocale(LC_ALL,"Turkish");


for(int i=1; i<=10; i++)

{

if (i==8)
{


cout<<"pas geçti\n";
continue;


}
cout<<i<<endl;



}

	return 0;
 } 
