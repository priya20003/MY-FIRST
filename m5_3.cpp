#include<iostream>
using namespace std;
float area(int a);
float per(int b);
int main()
{int r;
    cout<<"enter the radius:";
cin>>r;
cout<<"per. of circle"<<per(r)<<endl;
cout<<"area of circle"<<area(r);
return 0;
}
float area(int a)
{
return 3.14*a*a;

}
float per(int b)
{
    return 2*3.14*b;
}