#include<iostream>
using namespace std;

float square(float side){
    return side*side;
}
float circle(float side){
    return 3.14 * side*side;
}
float rectangle(float a,float b){
    return a*b;
}
int main(){
    cout<<"square area is:"<<square(10)<<endl;
    cout<<"circle area is"<<circle(5)<<endl;
    cout<<"rectangle is"<<rectangle(8,4);

    return 0;
}