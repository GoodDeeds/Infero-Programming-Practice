#include<iostream>
#include<string>
using namespace std;
class VeryLong
{
	private:
		string num;
	public:
		VeryLong();
		
	//	friend void &operator<<(ostream &output, VeryLong &n);
		//friend void &operator>>(istream &input, VeryLong &n);
		
		VeryLong &operator+(VeryLong &n);
	//	VeryLong &operator-(VeryLong &n);
	//	VeryLong &operator*(VeryLong &n);
	//	VeryLong &operator/(VeryLong &n);
};
VeryLong::VeryLong()
{
	num="";
}
VeryLong& VeryLong::operator+(VeryLong &n)
{
			
}

