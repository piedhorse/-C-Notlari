/*
 Function  Overload  */
#include<iostream >
using namespace  std;

int topla (int a, int b)
{ return  a+b;
}



//------------------------                  //Parametreler farkl� olduktan sonra tan�mlar ayn� olabilir
double Topla(double a, double b) 
{return a+b;

}
//------------------------

string Topla (string a, string b)
{return a+b;
}






int main ()
{
int a=10,b=20;
double c=15.5, d=7.25;
string str="arel", str2="�niversitesi";
cout<<Topla (a,b)<<endl;
cout<<Topla(c,d)<<endl;
cout<<Topla(str,str2)<<endl;
return 0;

}
