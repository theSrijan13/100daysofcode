#include<iostream>
using namespace std;

void dec(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cout<<"enter any number"<<endl;
    cin>>n;
    cout<<"the numbers in ascending order are"<<endl;
    inc(n);
    cout<<"the numbers in descendig order are"<<endl;
    dec(n);
    return 0;
}