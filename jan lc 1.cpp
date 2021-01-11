#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t;
	cin>>t;
	while(t--){
		long long int n,k,d;
		cin>>n>>k>>d;
		long long int a[n],i,s=0,q;
		for(i=0;i<n;i++){
			cin>>a[i];
			s = s + a[i];
		}
		if(s<k){
			cout<<"0"<<endl;
		}
		else{
			q = s / k;
			if(q<d){
				cout<<q;
			}
			else{
				cout<<d;
			}
			cout<<endl;
		}
	}
	return 0;
}



