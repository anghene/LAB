#include <cstdlib>
#include <iostream>

using namespace std;

void schimba(int m, int n)//void pentru ca nu returneaza nici o valoare
{
int temp;
temp=m;
m=n;
n=temp;
cout<<"schimbarea din functie a=" << m<<" b= "<<n<<endl;
}

int main(int argc, char *argv[])
{
int a,b;
cout<<"Introduceti a= ";
cin>>a;
cout<<"Introduceti b= ";
cin>>b;
cout<<"Valorle inainte de apelul functiei a=" << a<<" b= "<<b<<endl;
schimba(a,b);
cout<<"Valorile dupa apelul functiei a="<< a<<" b= "<<b<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
