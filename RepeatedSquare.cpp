#include <iostream>
#include <bitset>      
using namespace std;
//b^n(mod m)
class RepeatedSquare
{
public:
	RepeatedSquare() {  }
	RepeatedSquare(int b1,int n1,int m1) {b=b1;n=n1;m=m1;  }
	int exec(){
		int count;
		bitset<8>* ns =toBit(n, &count);
		int a=1,bi=b;
		for(int k=0;k<count;k++){
			int j=0;
			for(j;j<8;j++){
				if(ns[k].at(j))
						a=(a*bi)%m;
				bi = (bi*bi)%m;
			}
		}
		return a;
	}
	int exec(int b1,int n1,int m1){
		b=b1;n=n1;m=m1;
		int count;
		bitset<8>* ns =toBit(n, &count);
		int a=1,bi=b;
		for(int k=0;k<count;k++){
			int j=0;
			for(j;j<8;j++){
				if(ns[k].at(j))
						a=(a*bi)%m;
				bi = (bi*bi)%m;
			}
		}
		return a;
	}
private:
	int b;
	int n;
	int m;
	 bitset<8>* toBit(int k, int *size) // to point variable at place calling this function by using its address with "size"
	{
		*size = (k/128);
		bitset<8>* bits = new bitset<8>[(*size)+1]; // if k has more bit than 8, we use an array of byte to store all bits - 2^7 = 128
		int i = 0;
		for(size;size>=0;size--)
		{
			bits[i] = bitset<8>((k-i)%128);
		}
		return bits;
	}
};