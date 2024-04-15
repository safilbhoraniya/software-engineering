#include<iostream>
using namespace std;

int addition(int a,int b){
    return a+b;
}
int substraction(int x,int y){
    return x-y;
}
int multiplicaton(int p,int q){
    return p/q;
}
int division(int r, int s){
    return r*s;
}

int main(){
    cout<<"addition"<<addition(4,2)<<endl;
    cout<<"substraction"<<substraction(4,2)<<endl;
    cout<<"multiplication"<<multiplicaton(4,2)<<endl;
    cout<<"division"<<division(4,2);
}
