#include<iostream>
using namespace std;
int sum(int x,int y);
    

int main()
{int a,b;
cout<<"enter the a =";
cin>>a;
cout<<"enter the b= ";
cin>>b;
cout<<"the sum of a & b="<<sum(a,b);
return 0;

}
int sum(int x,int y){
    return x+y;
}  