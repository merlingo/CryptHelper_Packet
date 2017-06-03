#include <iostream>
#include<string>
#include <bitset>  
using namespace std;
//to find great common divisor of two value x and y
 class EuclideanAlgorithm{
public:
	EuclideanAlgorithm(int x, int y){
		if(x>y)
		{	b=x;
			s=y;
		}
		else
		{
			b=y;
			s=x;
		}
	}
	int gcd(){
		return exec(b,s);
	}
	int* extend(int x,int y)
	{
		return NULL;
	}
private:
	int b;
	int s;
	int exec(int x, int y){
	if(x%y==0)
		return y;
	else
		return exec(y,x%y);
	}

};