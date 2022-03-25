//show menu    check balance, deposit, with draw
#include <iostream>
using namespace std;

void menu(){
//function to show the main menu	
	cout<<"**********MENU**********"<<endl;
	cout<<"1- Check Balance."<<endl;
	cout<<"2- Deposit."<<endl;
	cout<<"3- With Draw."<<endl;
	cout<<"************************"<<endl;
}

int main(){
	int loop;
	int userInput; 
	double deposit, withdraw;
	double balance = 800;
	
 for (loop=1; loop<=3; loop++){
 
	
//calling the menu function
    menu();	
	cout<<"Please select among the options: "<<endl;
	cin>>userInput;
	
	if(userInput==1)
	cout<<"Your Balance is: "<<balance<<"$"<<endl;
	
	else if(userInput==2){
	cout<<"Enter the amount You want to Deposit: "<<endl;
	cin>>deposit;
	balance+=deposit;
	cout<<"Now your balance is: "<<balance<<"$"<<endl; 
	}
	
	
	else if(userInput==3){
	cout<<"Enter the amount You want to Withdraw: "<<endl;
	cin>>withdraw;
	balance-=withdraw;
	cout<<"Now your balance is: "<<balance<<"$"<<endl; 
	}
}
return 0;
}


