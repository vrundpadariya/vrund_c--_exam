//Array Of Object (Bank Management System) 
//Requirements(A/C Number , A/C Name , A/C Type , A/C Branch , A/C Balance ) 
//Search Record By A/C Numbe

#include<iostream>
using namespace std;

class bank{
	private:
		int accountno;
		string name;
		string accountname;
		string branch;
		long amt;
		int search; 
		int a,i;
		
		public:
			opeanaccount(){
				cout << "How many account you want to add";
				cin >> a;
				for(i=0;i<a;i++){
			cout << "Enter the Account number:- ";
			cin >> accountno;
			cout << "Enter the name:- ";
			cin >> name;
			cout << "Enter the Account type:- ";
			cin >> accountname;
			cout << "Enter the branch name :- ";
			cin >> branch;
			cout << "Enter the Amount :- ";
			cin >> amt;		
			}
		}
		
			
			asearch(){
			
		
				 
			
				 	
				 	cout <<  "Enter the account number you want to search:- ";
				 cin >> search;
				 
				if(search == accountno){
					cout << "Account number:- " << accountno << endl;
					cout << "name:- " << name << endl;
					cout << "Account type:- " << accountname << endl;
					cout << "branch name:- " << branch << endl;
					cout << "Amount:- " << amt << endl;
					}else{
						cout << "NO record found";
					}
				
			}
};

int main(){
	
	bank b1;
	
	b1.opeanaccount();
	b1.asearch();
	
	
}
