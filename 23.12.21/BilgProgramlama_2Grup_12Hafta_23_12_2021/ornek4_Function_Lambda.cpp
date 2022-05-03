/* Lambda Expressions*/
#include<iostream>
using namespace std;


int main()
{
	//Ýsimli Lambda	
	auto Topla = [](int a, int b){ return a+b;};
	
	cout<<Topla(10,15)<<endl;
	
	//Ýsimsiz Lambda
	cout<<[](int x, int y){ return x+y;}(12,14);	

	return 0;
}
