// 2D ARRAY
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[10][10];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}