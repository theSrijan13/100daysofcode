#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n){
    stack<int> s;
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top() > curr){
            s.pop();
        }
        ans[i] = curr;
        s.push(curr);
    }
    return ans;
}