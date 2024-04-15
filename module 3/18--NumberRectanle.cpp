#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number of rows amnd columns:";
    cin>>n;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
}