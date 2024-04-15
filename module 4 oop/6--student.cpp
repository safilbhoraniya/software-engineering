#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    int age;
    float percentage;

    public:
    void getdata()
    {
        cout<<"enter student name ";
        cin>>name;
        cout<<"enter age";
        cin>>age;
        cout<<"enter percentage";
        cin>>percentage;

    }
    void showdata()
    {
        cout<<"students name "<<name<<endl;
        cout<<"student age "<<age<<endl;
        cout<<"percentage "<<percentage<<endl;

    }

};
class teacher
{
    private:
    string name;
    int age;
    int salary;

    public:
    void getdata1(){
        cout<<"enter teacher name:";
        cin>>name;
        cout<<"enter age ";
        cin>>age;
        cout<<"enter a salary";
        cin>>salary;

    }
    void showdata1(){
        cout<<"name "<<name<<endl;
        cout<<"age is "<<age<<endl;
        cout<<"salary is "<<salary;
    }
};

int main(){
    student st;
    teacher teach;
    st.getdata();
    teach.getdata1();
    st.showdata();
    teach.showdata1();

    return 0;
}