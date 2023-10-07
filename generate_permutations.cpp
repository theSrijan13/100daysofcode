#include <iostream>

#include <bits/stdc++.h>
using namespace std;
// function to display
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
// function to generate all permutations
void findPermutations(int a[],int n){
    // sorting the array
    sort(a,a+n);
    do{
        display(a,n);
    }
    while(next_permutations(a,a+n));
}
int main()
{
    int a[]={10,20,30,40};
    int n = sizeof(a)/sizeof(a[0]);
    findPermutations(a,n);
    return 0;
}