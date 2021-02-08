// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x/0#
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;
	    int a[n];
	    bool ch = false;
	    vector<int> ans;
	    for(int i=0;i<n;i++)cin>>a[i];
	    for(int i=0;i<n;i++){
	        if(a[i]==k){
	            ans.push_back(i);
	            ch = true;
	        }
	    }
	    
	    if(ch==false){
	        cout<<-1<<endl;
	    }else{
	        cout<<ans[0]<<" "<<ans[ans.size()-1]<<endl;
	    }
	}
	return 0;
}