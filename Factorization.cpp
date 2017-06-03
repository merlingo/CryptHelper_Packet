#include <iostream>
#include <bitset>
#include "Packet.h"
#include<list>
using namespace std;
//including two type of factorization - rho method and fermat
//class Factorization{
//public:
//	int *rhoMethod(int (*f)(int x), int fValue, int x0){
//	int factors[2];
//	int found=1,x1,xRecord=x0,i=0, indxR=0;
//	EuclideanAlgorithm eu(fValue,x0);
//	while(found== 1)
//	{
//		x1= f(x0)%fValue;
//		if(i==(2*indxR+1))
//		{
//			xRecord=x0;
//			indxR=i;
//		}
//		found = eu.exec(fValue,x1-xRecord);
//		i++;
//	}
//	factors[0] = found;
//	factors[1] = fValue/found;
//	return factors;
//	}
//	int* fermat(int n, int baseFactors[]){
//		int factors[2];
//		//baseslar bulunmalý, 
//		return factors;
//	}
//	list<int> factorBase(int bf)
//	{
//		//bf yi bölen sayýlarý array olarak döndürecek
//		list<int> dividers;
//		int b=2;int i=0;
//		for(b;b<=bf/2;b++)
//		{
//			if(bf%b==0) {
//				dividers.push_front( bf/b);
//			}
//				
//		}
//		return (dividers);
//
//	}
//	list<int> basesForPsuodoprime(int b)
//	{
//		RepeatedSquare rs;
//		list<int> bases;
//		for(int i=1;i<b;i++){
//			if(rs.exec(i,b-1,b)==1)
//				bases.push_front(i);
//		}
//		return bases;
//	}
//
//};