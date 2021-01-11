#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
    	long long int n,k,x,y,q;
    	cin>>n>>k>>x>>y;
    	q = k % 4;
    	long long int a[5],b[5];
		if(x==y){
			cout<<n<<" "<<n;
		}
		else{
			if(x>y){
				a[1] = n;
				b[1] = n - x + y;
				a[2] = b[1];
				b[2] = a[1];
				a[3] = 0;
				b[3] = x - y;
				a[0] = b[3];
				b[0] = a[3];
			}
			else{
				a[1] = n - y + x;
				b[1] = n;
				a[2] = b[1];
				b[2] = a[1];
				a[3] = y - x;
				b[3] = 0;
				a[0] = b[3];
				b[0] = a[3];	
			}
			cout<<a[q]<<" "<<b[q];
		}
		cout<<endl;
   	}
    return 0;
}
