#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<sum<<endl;
return 0;
}
    
