// Give an example which shows Exception handling of division by zero exception.  

#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	
	
	cout << "Enter the value of A:- ";
	cin >> a;
	
	cout << "Enter the value of b:- ";
	cin >> b;
	
	
	
	try{
		if(b == 0)
		{
			throw 0;
		}else{
			c = a/b;
			cout << "The answer is " << c;
		}
	}
	catch(int val){
		
		cout << "Can't be divide by zero";
		}
}
