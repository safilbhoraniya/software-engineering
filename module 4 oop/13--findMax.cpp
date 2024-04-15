#include<iostream>
using namespace std;
class maxnumber
{
    private:
    int a,b;
    public:
    int get(){
        cout<<"enter a frst number";
        cin>>a;
        cout<<"enter second number";
        cin>>b;

    }
    int show(){
        if(a > b){
            cout<<"a is max"<<a<<endl;;
        }
        else{
            cout<<"b is ,ax"<<b;
        }
        
    }
};
int main(){
    maxnumber max;
    max.get();
    max.show();
    return 0;
}