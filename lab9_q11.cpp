//First include library
#include<iostream>
using namespace std;
int main()
{
int i,*i1;char c,*c1;float f,*f1;double d,*d1;bool b,*b1;
i=1;c='c';f=3.1415;d=3.141592;b=0;
i1=&i;
c1=&c;
f1=&f;
d1=&d;
b1=&b;
	
cout<<" Sizes character variable and pointer "<<sizeof(c)<<" "<<sizeof(c1);
cout<<" Sizes integer variable and pointer "<<sizeof(i)<<" "<<sizeof(i1);
cout<<" Sizes floating point variable and pointer "<<sizeof(f)<<" "<<sizeof(f1);
cout<<" Sizes double variable and pointer "<<sizeof(d)<<" "<<sizeof(d1);
cout<<" Sizes bool variable and pointer "<<sizeof(b)<<" "<<sizeof(b1);
cout<<"\n";
return 0;
}
	
