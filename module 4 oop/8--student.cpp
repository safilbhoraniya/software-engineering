#include<iostream>
using namespace std;

class student{
    private:
    int rollno;

    public:
    void get(){
        cout<<"enter roll no ";
        cin>>rollno;

    }
    void show(){
        cout<<"roll no "<<rollno<<endl;
    }
    
};
class marks
{
    private:
    int sub1,sub2,total;


    public:
    void get1(){
    cout<<"enter a sub1 mark ";
    cin>>sub1;
    cout<<"enter sub2 mark";
    cin>>sub2;
    }
    void show1(){
        cout<<"sub1 mark is "<<sub1<<endl;
        cout<<"sub 2 mark is "<<sub2<<endl;
        total = sub1 + sub2;
        cout<<"total mark is "<<total<<endl;
    }

};
int main(){
    student st;
    marks m1;
    st.get();
    m1.get1();
    st.show();
    m1.show1();

    return 0;
}
