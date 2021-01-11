#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t,i;
	cin>>t;
	while(t--){
		long long int n,m,sa=0,sb=0;
		cin>>n>>m;
		long long int a[n],b[m];
		for(i=0;i<n;i++){
			cin>>a[i];
			sa = sa + a[i];
		}
		for(i=0;i<m;i++){
			cin>>b[i];
			sb = sb + b[i];
		}
		sort(a,a+n);
		sort(b,b+m,greater<int>());
		long long int q=0;
		if(n>m){
			n = m;
		}
		if(sa > sb){
			cout<<q;
		}
		else{
			long long int y=0;
			for(i=0;i<n;i++){
				q++;
				sa = sa + (b[i] - a[i]);
				sb = sb - (b[i] - a[i]);
				if(sa > sb){
					y=1;
					break;
				}
			}
			if(y==1){
				cout<<q;
			}
			else{
				cout<<"-1";
			}
		}
		cout<<endl;	
	}
	return 0;
}
