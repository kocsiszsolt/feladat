#include <iostream>

using namespace std;

int main()
{
    int a,b,c,S=1;
    cout<<"elso szam=";
    cin>>a;
    cout<<"masodik szam=";
    cin>>b;
    cout<<"harmadik szam=";
    cin>>c;
    if(a%2==0)
    {
        S=S*a;
    }
    if(b%2==0)
    {
        S=S*b;
    }
    if(c%2==0)
    {
        S=S*c;
    }
    cout<<S;
    return 0;
}
