#include <bits/stdc++.h>
using namespace std;

const int maxsize=10;
int siz=3;

class BankAccount 
{
public:
    string depName;
    string accntNum;
    string accntType;
    double balance;

public:
    void initialize(string name, string accNumber, string accType, double initBalance);
    void deposit(double amount);
    void withdraw(double amount);
    void display();
};

void BankAccount::initialize(string name, string accNumber, string accType, double initBalance){
    depName = name;
    accntNum = accNumber;
    accntType = accType;
    balance = initBalance;
}

void BankAccount::deposit(double amount){
    balance += amount;
}

void BankAccount::withdraw(double amount){
    if(amount<=balance){
        balance -= amount;
        if(balance<200){
            balance += amount;
            cout<<"Invalid balance for withdraw."<<endl;
        }else{
            cout<<"Withdraw balance "<<amount<<"Tk"<<endl;
            cout<<"Amount withdraw successfully."<<endl;
        }
        
    } else{
        cout<<"Invalid balance for withdraw."<<endl;
    }
}

void BankAccount::display(){
    cout<<"Depositor Name: "<<depName<<endl;
    cout<<"Account Number: "<<accntNum<<endl;
    cout<<"Account Type: "<<accntType<<endl;
    cout<<"Balance: Tk "<<balance<<endl;
    cout<<"------------------------"<<endl;
}

int main(){
    BankAccount accounts[maxsize];
    
    
    accounts[0].initialize("Customer 1","ACC1","Savings",1000.0);
    accounts[1].initialize("Customer 2","ACC2","Savings",2000.0);
    accounts[2].initialize("Customer 3","ACC3","Savings",3000.0);
        
    while(true){
        cout<<"Account Menu:"<<endl;
        cout<<"1. Insert account information"<<endl;
        cout<<"2. Deposit money"<<endl;
        cout<<"3. Withdraw money"<<endl;
        cout<<"4. Display all accounts"<<endl;
        cout<<"5. Exit"<<endl; 
        int choice;
        cout<<"Enter the choice: ";
        cin>>choice;
        
        switch(choice){
            case 1:{
                if(siz<maxsize){
                    string name, accNumber, accType;
                    double initBalance;
                    cout<<"Enter Depositor Name: ";
                    cin>>name;
                    cout<<"Enter Account Number: ";
                    cin>>accNumber;
                    cout<<"Enter Account Type: ";
                    cin>>accType;
                    cout<<"Enter Initial Balance: ";
                    cin>>initBalance;
                    siz++;
                    accounts[siz-1].initialize(name,accNumber,accType,initBalance);
                    cout<<"Account information inserted."<<endl;
                }else{
                    cout<<"Account limit reached."<<endl;
                }
                break;
            }
            
            case 2:{
                string accNumber;
                double amount;
                cout<<"Enter the account number: ";
                cin>>accNumber;
                bool found = false;
                for(int i=0;i<siz;i++){
                    if(accounts[i].accntNum == accNumber){
                        found= true;
                        cout<<"Enter the amount to deposit: ";
                        cin>>amount;
                        accounts[i].deposit(amount);
                        cout<<"Amount deposited successfully."<<endl;
                        break;
                    }
                }
                if(!found){
                    cout << "Account is not found."<<endl;
                }
                break;
            }
            case 3:{
                string accNumber;
                double amount;
                cout<<"Enter the account number: ";
                cin>>accNumber;
                bool found = false;
                for(int i=0;i<siz;i++){
                    if(accounts[i].accntNum == accNumber){
                        found= true;
                        cout<<"Enter the amount to withdraw: ";
                        cin>>amount;
                        accounts[i].withdraw(amount);
                        
                        break;  
                    }
                }
                if(!found){
                    cout<<"Account is not found."<<endl;
                }
                break;
            }
            case 4:{
                cout<<"Displaying all accounts:"<<endl<<endl;
                for(int i=0;i<siz;i++){
                    accounts[i].display();
                    cout<<endl;
                }
                break;
            }
            case 5:
                return 0;
            default:{
                cout<<"Invalid choice."<<endl;
                break;
            }
        }
    }

    return 0;
}
    