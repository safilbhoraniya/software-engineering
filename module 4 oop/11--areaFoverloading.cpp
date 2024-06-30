#include<iostream>
using namespace std;

float rectangle(float area,float breadth){
    return area*breadth;
}
float triangle(float area,float breadth){
    return 1/2 * area * breadth;
}
float circle(float area){
    return 3.14*area*area;
}
int main(){
    cout<<"rectangle area "<<rectangle(10,5)<<endl;
    cout<<"triangle area"<<triangle(10,5)<<endl;
    cout<<"circle of area"<<circle(10);

    return 0;
}