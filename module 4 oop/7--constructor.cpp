#include<iostream>
using namespace std;

class Construct
{
    private:
        int a;
        int b;

    public:
        void get(){
            cout<<"enter fisrt number:";
            cin>>a;
            cout<<"enter second number:";
            cin>>b;
        }
        void show(){
            cout<<"addition "<<a+b<<endl;
            cout<<"substracution "<<a-b<<endl;
            cout<<"divison "<<a/b<<endl;
            cout<<"multiplication "<<a*b;
        }
};
int main()
{
    Construct con;
    con.get();
    con.show();

    return 0;
}