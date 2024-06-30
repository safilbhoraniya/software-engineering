#include<iostream>
using namespace std;

class construct 
{
    private:
        int a = 10;
        int b = 5;

    public:
    
    int addition(){
        return a+b;
    }
    int substraction(){
        return a-b; 
    }
    int division(){
        return a/b;

    }
    int multiplication(){
        return a*b;
    }
};
int main(){


    construct con;
    cout<<con.addition()<<endl;;
    cout<<con.substraction()<<endl;
    cout<<"division"<<con.division()<<endl;
    cout<<"multiplication"<<con.multiplication();
}