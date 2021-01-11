#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		string s;
		cin>>s;
		long long int w=n/4,i,q=0;
		for(i=0;i<w;i++){
			long long int d = 8,j,z=0;
			for(j=0;j<4;j++){
				if(s[q]=='1'){
					z = z + d;
				}
				q++;
				d = d / 2;
			}
			printf("%c",97+z);
		}
		printf("\n");
	}
	return 0;
}



