#include<iostream>
using namespace std;
int mul(int a,int b);

int main()
{int x,y;
cout<<"enter x=";
cin>>x;
cout<<"enter y=";
cin>>y;
cout<<"the mult of x & y "<<mul(x,y);
return 0;

}
int mul(int a,int b)
{
    return a*b;
}