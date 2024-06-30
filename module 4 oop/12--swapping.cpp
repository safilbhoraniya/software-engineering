#include<iostream>
using namespace std;
class swapping
{
    private:
    int a,b;

    public:
    int get(){
        cout<<"enter a first numbr:";
        cin>>a;
        cout<<"enter second number:";
        cin>>b;

        return 0;
    }
    int show(){
        cout<<"after swapping"<<b<<","<<a;    }
};
int main(){
    swapping swap;
    swap.get();
    swap.show();
    return 0;
}