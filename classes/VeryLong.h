#include<iostream>
#include<string>
using namespace std;
class VeryLong
{
	private:
		string num;
	public:
		VeryLong();
		VeryLong &getnum();
	//	friend void &operator<<(ostream &output, VeryLong &n);
		//friend void &operator>>(istream &input, VeryLong &n);
		
		VeryLong &operator+(VeryLong &n);
	//	VeryLong &operator-(VeryLong &n);
	//	VeryLong &operator*(VeryLong &n);
	//	VeryLong &operator/(VeryLong &n);
};
VeryLong::VeryLong &getnum()
{
	return num;
}
VeryLong::VeryLong()
{
	num="";
}
VeryLong& VeryLong::operator+(VeryLong &n)
{
	if(num!="" && n.getnum()!="")
	{
		for(long long int i=)
	}		
}

