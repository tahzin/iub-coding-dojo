#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int sum,sub,mul,rem;
    float div;

    cout<<" enter your 1st number:"<<endl;
    cin>>a;

    cout<<"enter your 2nd number:"<<endl;
    cin>>b;

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=(float)a/b;
    rem=a%b;

    cout<<endl;
    cout<<"sum:"<<sum;

    cout<<endl;
    cout<<"sub:"<<sub;

    cout<<endl;
    cout<<"mul:"<<mul;

    cout<<endl;
    cout<<"div:"<<div;

    cout<<endl;
    cout<<"rem:"<<rem;

    return 0;
}
