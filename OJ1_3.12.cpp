#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class complex0
{
	private:
		double real;double imag;
	public:
	complex0(double n, double m);
	complex0();
	~complex0();
	void show_();
	complex0 &operator = (const complex0& m);
	friend complex0 operator+(const complex0& n, const complex0& m);
	friend complex0 operator-(const complex0& n, const complex0& m);
	friend complex0 operator*(const complex0& n, const complex0& m);
	friend complex0 operator/(const complex0& n, const complex0& m);
};
complex0::complex0(double n, double m)
{
	real = n; imag = m;
}
complex0::complex0()
{
	real = imag = 0;
}
complex0::~complex0()
{
}
complex0 operator+(const complex0& n, const complex0& m)
{
	return complex0(n.real + m.real, n.imag + m.imag);
}
complex0 operator-(const complex0& n, const complex0& m)
{
	return complex0(n.real - m.real, n.imag - m.imag);
}
complex0 operator*(const complex0& n, const complex0& m)
{
	return complex0(n.real * m.real - n.imag * m.imag, n.real * m.imag + n.imag * m.real);
}
complex0 operator/(const complex0& n, const complex0& m)
{
	double den = m.real*m.real + m.imag*m.imag;
	complex0 comp (m.real, -m.imag);
	complex0 num_1 = n * comp;
	complex0 coms (num_1.real/den,num_1.imag/den);
	return coms;
}
complex0 & complex0::operator=(const complex0&m)
{
	if (real==m.real&&imag==m.imag)
	{
		return *this;
	}
	real = m.real;
	imag = m.imag;
	return * this;
}
void complex0::show_()
{
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<real;
		if (imag>=0)
		cout<<"+"<<imag<<"i";
		else cout<<imag<<"i";
}


int main()
{
	double a, b, c, d;
	while (cin>>a>>b>>c>>d)
	{
		complex0 com1(a,b); complex0 com2(c,d);
		complex0 com3;
		com3 = com1 + com2;
		com3.show_(); cout<<" ";
		com3 = com1 - com2;
		com3.show_(); cout<<" ";
		com3 = com1 * com2 ;
		com3.show_(); cout<<" ";
		com3 = com1 / com2 ;
		com3.show_(); cout <<endl;
	}
	return 0;
} 

