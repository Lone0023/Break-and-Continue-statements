#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j;
    cout<<"Enter your range from: "<<endl;
    cin>>a;
    cout<<" to "<<endl;
    cin>>b;
    cout<<endl;
    cout<<"Prime numbers from "<<a<<" to "<<b<<" is "<<endl;

    for(i=a; i<=b; i++){
        for(j =2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
        cout<<j<<endl;
        }
    }
    return 0;
}
