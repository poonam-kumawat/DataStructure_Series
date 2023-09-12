#include <iostream>
using namespace std;

int sum(int n){
    int ans;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    return ans;
}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    cout<<sum(n)<<endl;

    return 0;
}
