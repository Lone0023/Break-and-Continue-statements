#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter your number: ";
    cin>>n;
    cout<<endl;
    bool flag = 0;
        for(i=2; i<=sqrt(n); i++){
            if(n%i==0){
                cout<<"The number is not a prime number."<<endl;
                flag = 1;
                break;
                }
            }
    cout<<"The value of flag is "<<flag<<"."<<endl;
        if(flag==0){
            cout<<"The number is a prime number."<<endl;
        }
return 0;
}
