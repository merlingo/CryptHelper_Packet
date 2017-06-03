#include <iostream>
#include<string>
#include "Packet.h"
#include<list>
using namespace std;
int fuc(int x){return x*x-1;} //function to use in rho method at question 4
int fuc2(int x){return x*x +1;}

int main()
{
	int eaa,eab,n,m,b;
	cout<<"QUESTION 1 - EUCLİDEAN ALGORITHM"<<endl;
	cout<<"enter two value to apply euclidean algorithm:   ";
	cin>>eaa;
	cin>>eab;
	EuclideanAlgorithm eucAlg(eaa,eab);
	 cout<<"result is(great common divisor of given value is: "<<eucAlg.gcd()<<endl;
	 cout<<"*********************************************************************"<<endl<<endl;
	 cout<<"QUESTION 2 - REPETEAD ALGORITHM"<<endl;
	 cout<<"Enter value of b^n(mod m); b - n- m respectively :  ";
	 cin>>b;
	 cin>>n;
	 cin>>m;
	 RepeatedSquare rs(b,n,m);
	 cout<<"Repeated Square: "<<rs.exec()<<endl;
	 cout<<"*********************************************************************"<<endl<<endl;
	 cout<<"QUESTION 3 - Find all bases for which 15 and 35 is a psuodoprime"<<endl;
	 cout<<"15's : ";
	 Factorization fac;
	 list<int> bases = fac.basesForPsuodoprime(15);
	 while(!bases.empty())
	 {
		 cout<<bases.front()<<" - ";
		 bases.pop_front();
	 }
	 cout<<endl;
	  cout<<"35's : ";
	
	 list<int> bases2 = fac.basesForPsuodoprime(35);
	 while(!bases2.empty())
	 {
		 cout<<bases2.front()<<" - ";
		 bases2.pop_front();
	 }
	 cout<<endl;
	 cout<<"**********************************************************************"<<endl<<endl;
	 cout<<"QUESTION 4 - FACTORIZATION Rho Method"<<endl;
	 cout<<"Factor 91 using f(x)=x^2 -1 and x0 = 2"<<endl;
	 cout<<"answer is"<<fuc(2)<<"   ";
	 int *fs=fac.rhoMethod(fuc,91,2); 
	 cout<<fs[0]<<" - "<<fs[1] <<endl;
	 cout<<endl;
	 cout<<"Factor 8051 using f(x) = x^2+1 and x0=1"<<endl;
	 fs =fac.rhoMethod(fuc2,8051,1);
	 cout<<"answer is:  "<< fs[0]<<" - "<<fs[1]<<endl;
	 cout<<"***********************************************************************"<<endl<<endl;
	 cout<<"QUESTION 5 - FACTORIZATION  Fermat"<<endl;
	 system("pause");
	 delete []fs;
	return 0;
}
