
#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;
int main ()
{
string length;
double a,b;
char option;

getline( cin, length);
istringstream stream(length);

stream>>a;
	while ( stream>>option)
 {
    if( option=='+')
    {
        stream>>b;
        a += b;
    }
    if( option=='-')
    {
        stream>>b;
        a -= b;
    }
    if (option=='*')
    {
        stream>>b;
        a *= b;
    }
    if(option=='/')
    {
        if (a==0 && b==0) {cout<<"nan";}
        else if (a!=0 && b==0) {cout<<"inf";}
        else 
        stream>>b;
        a /= b;
    }
    
 }
 cout<<a;
}
