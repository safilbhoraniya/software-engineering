#include<iostream>
using namespace std;
class bank
{
    private:
        int a,b;
        string name;
        int accountnum;
        string accounttype;
        int balance ;

    public: 
    void get(){
        name = "kumarshhu";
        accountnum = 31312307867;
        accounttype = "savings";
        balance = 5000;

    }
    
    void bankacc(){
        cout<<"name is "<<name<<endl;
        cout<<"account number"<<accountnum<<endl;
        cout<<"account type :"<<accounttype<<endl;
        cout<<"balance is"<<balance<<endl;
    }
    void withdraw(){
        
        cout<<"enter a withdraw amount";
        cin>>a;
        if(balance >= a){
            cout<<"withdraw successfully"<<endl;

        }
        else{
            cout<<"insufficient balance";
        }
        b = balance - a;
        cout<<"balance is "<<b<<endl;
        
    }
    
    


};
int main(){
    bank std;
    std.get();
    std.bankacc();
    std.withdraw();
}