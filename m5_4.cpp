#include<iostream>
using namespace std;
void max(int a,int b,int c);
void min(int a,int b ,int c);
int main()
{int a,b,c;
cout<<"enter a,b,c";
cin>>a>>b>>c;
max(a,b,c);
min(a,b,c);

return 0;
}
void max(int a,int b, int c)
{int max;
    if(a>b&&a>c)
  max=a;
  else if(b>a&&b>c)
max=b;
else max=c;
cout<<"max is"<<max<<endl;
}
void min(int a,int b,int c)
{int min;
 if(a<b&&a<c)
  min=a;
  else if(b<a&&b<c)
min=b;
else min=c;
cout<<"min is"<<min;
}



