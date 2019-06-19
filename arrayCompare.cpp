#include<bits/stdc++.h>
using namespace std;


//sorting approach
int isEqual(long long *a1,long long *a2,long long n){
    sort(a1,a1+n);
    sort(a2,a2+n);
    
    for(long long i=0;i<n;i++){
        if(a1[i]!=a2[i])
            return 0;
    }
    return 1;
}


//hashing approach
int isEqual(long long *a1,long long *a2,long long n){
    unordered_set<int>s;
    for(long long i=0;i<n;i++){
        s.insert(a1[i]);
    }
    for(long long i=0;i<n;i++){
        if(s.find(a2[i])==s.end())
            return 0;
    }
    s.clear();
    for(long long i=0;i<n;i++){
        s.insert(a2[i]);
    }
    for(long long i=0;i<n;i++){
        if(s.find(a1[i])==s.end())
            return 0;
    }
    return 1;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long a1[n];
	    long long a2[n];
	    for(long long i=0;i<n;i++)
	        cin>>a1[i];
	    for(long long i=0;i<n;i++)
	        cin>>a2[i];
	    cout<<isEqual(a1,a2,n)<<endl;     
	}
	return 0;
}
