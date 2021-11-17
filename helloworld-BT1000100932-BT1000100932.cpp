#include<bits/stdc++.h>
using namespace std;
int main()
{
	float root1,root2,a,b,c,d,imag,real;
	cout<<"\n ENTER THE THREE NUMBERS:";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>0)
	{
		root1=(-b+sqrt(d))/2*a;
		root2=(-b-sqrt(d))/2*a;	 
		cout<<"ROOT 1="<<root1<<endl;
		cout<<"ROOT 2="<<root2<<endl;
	}
	else if(d==0)
	{
		root1=root2=-b/(2*a);
		cout<<"ROOT 1=ROOT 2="<<root1<<root2;
	}
	else
	{
		real=-b/(2*a);
		imag=sqrt(-d)/(2*a);
        cout << "Roots are complex and different."<<endl;
        cout << "root1 = " << real << "+" << imag << "i" << endl;
        cout << "root2 = " << real << "-" << imag << "i" << endl;
	}
	return 0;
}