/* Function Overload*/
#include<iostream>
using namespace std;

int Topla(int a, int b)
{
	return a+b;	
}
//--------------------
double Topla(double a, double b)
{
	return a+b;
}
//---------------------
string Topla(string a, string b)
{
	return a+b;
}


int main()
{
	int a=10, b=20;
	double c=15.5, d=7.25;
	string str1="Arel", str2="Üniversitesi";
	
	cout<<Topla(a,b)<<endl;
	cout<<Topla(c,d)<<endl;
	cout<<Topla(str1,str2)<<endl;
	
	
	return 0;
}
