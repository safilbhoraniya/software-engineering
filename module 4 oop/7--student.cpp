#include<iostream>
#include<string>
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
    int sub1,sub2;

    public:
    void get2(){
    cout<<"enter a sub1 mark ";
    cin>>sub1;
    cout<<"enter sub2 mark";
    cin>>sub2;
    }

}

class totalmarks
{
    private:
    int totalmarks;

    public:
    int total(int sub1,int sub2){
         totalmarks = sub1 + sub2;
    }
    void showtotal(){
        cout<<"total marks is "<<totalmarks<<endl;
    }

};
int main(){
    student st;
    test te;
    totalmarks tm;
    st.get();
    te.get1();
    tm.total(sub1,sub2);
    tm.showtotal();
    
}