#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<endl;
    cout<<"The odd numbers till "<<n<<" is:"<<endl;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            continue;
        }
       cout<<i<<endl;
    }


    cout<<endl;
    cout<<"The even numbers till "<<n<<" is:"<<endl;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            continue;
        }
       cout<<i<<endl;
    }
    return 0;
}
