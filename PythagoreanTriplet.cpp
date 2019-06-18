#include<bits/stdc++.h>
using namespace std;

void istrue(int *a,int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]*a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s.find((a[i]*a[i])+(a[j]*a[j]))!=s.end()){
                cout<<"Yes"<<endl;
                return;
            }
        }    
    }
    cout<<"No"<<endl;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    istrue(a,n);     
	}
	return 0;
}
