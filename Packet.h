#include <iostream>
#include<string>
#include <bitset>  
#include<list>
using namespace std;

//question 1: euclidean Algorithm
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
	int exec(int x, int y){
	if(x%y==0)
		return y;
	else
		return exec(y,x%y);
	}
private:
	int b;
	int s;
	

};
 // END of EuclideanAlgorithm

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
		for(int k=0;k<=count;k++){
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
		for(int k=0;k<=count;k++){
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
		for(*size;*size>=0;*size--)
		{
			bits[i] = bitset<8>((k-i)%128);
		}
		return bits;
	}
};

//FACTORIZATION
//including two type of factorization - rho method and fermat
class Factorization{
public:
	int *rhoMethod(int (*f)(int x), int fValue, int x0){
	int factors[2];
	int x1,xRecord=x0,i=0, indxR=0;
	unsigned int found=1, tr;
	EuclideanAlgorithm eu(fValue,x0);
	while(found== 1)
	{
		x1= f(x0)%fValue;
		if(i==(2*indxR+1))
		{
			xRecord=x0;
			indxR=i;
		}
		tr =(x1-xRecord)%fValue;
		found = eu.exec(fValue,tr);
		i++;
		x0=x1;
	}
	factors[0] = found;
	factors[1] = fValue/found;
	return factors;
	}
	int* fermat(int n, int baseFactors[]){
		int factors[2];
		//baseslar bulunmalý, 
		return factors;
	}
	list<int> factorBase(int bf)
	{
		//bf yi bölen sayýlarý array olarak döndürecek
		list<int> dividers;
		int b=2;int i=0;
		for(b;b<=bf/2;b++)
		{
			if(bf%b==0) {
				dividers.push_front( bf/b);
			}
				
		}
		return (dividers);
	}
	list<int> basesForPsuodoprime(int b)
	{
		RepeatedSquare rs;
		list<int> bases;
		int snc;
		for(int i=1;i<b;i++){
			int us = b-1;
			snc = rs.exec(i,us,b);
			if(snc==1){
				bases.push_front(i);
			}
		}
		return bases;
	}
private:

};