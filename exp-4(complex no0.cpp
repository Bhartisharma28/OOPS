#include<iostream>
#include<math.h>
using namespace std;
class complex
{
	int real,imag;
	public:
		void read()
		{
			cout<<"enter real no = ";
			cin>>real;
			cout<<"enter img no = ";
			cin>>imag;
		}
		void show()
		{
			cout<<real;
			if(imag<0)
			cout<<"-i";
			else
			cout<<"+i";
			cout<<abs(imag);
		}
		
};
int main()
{
	complex c1;
	c1.read();
	c1.show();
	getch();
}
