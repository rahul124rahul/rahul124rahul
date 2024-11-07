#include<iostream>
using namespace std;

int fib(int n,int& steps){          // This is recursive way
    steps++;
    if(n<=0)return 0;
    if(n==1)return 1;

    return fib(n-1,steps)+fib(n-2,steps);
}

int main(){
    int n;
    cout<<"Enter at which position's element is fibonacci series have to find :  ";
    cin>>n;

    int steps=0;

    int ans = fib(n,steps);

    cout<<"The number at "<<n<<" position is "<<ans<<" & got in "<<steps<<" steps.\n";


    // // Following is iterative way of accessing the eleemnts;

    // if(n==1||n==2){
    //     cout<<"The number at "<<n<<" position is "<<1<<" & got in 1 steps.\n";
    // }
    // int ans=0;
    // int a1=1,a2=1;
    // for(int i=2;i<n;i++){
    //     ans=a1+a2;
    //     a1=a2;
    //     a2=ans;
    // }
    // cout<<"The number at "<<n<<" position is "<<ans<<" & got in "<<n-2<<" steps.\n";



    return 0;
}