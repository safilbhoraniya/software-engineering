#include<iostream>
using namespace std;

class cricketer
{
    private:
    string name;
    int age;

    public:
    void getdata()
    {
        cout<<"enter a name ";
        cin>>name;
        cout<<"enter age ";
        cin>>age;
    }
    void showdata1()
    {
        cout<<"name is "<<name<<endl;
        cout<<"age is "<<age<<endl;
    }

};
class betsman
{
    private:
    int runs;
    int performs;

    public:
    void get(){
    cout<<"enter total run0 ";
    cin>>runs;
    cout<<"enter performs";
    cin>>performs;
    }

    void showdata2()
    {
        cout<<"totl run is "<<runs<<endl;
        cout<<"performs is"<<performs;
    }
};
int main(){
    cricketer crik;
    betsman bet;
    crik.getdata();
    bet.get();
    crik.showdata1();
    bet.showdata2();
}