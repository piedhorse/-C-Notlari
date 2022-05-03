/*
 lambda ifadesi
*/

#include <iostream> 
using namespace std ;
int main ()
{
auto sum= [](int a, int b){ return a + b;
};

cout<< sum(1,2)<< endl; // result:3


cout<< [](double x, double y){return x * y; } (3,4)<<endl; // result 12
return 0;










	
}

