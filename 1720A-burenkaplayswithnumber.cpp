#include<bits/stdc++.h>
using namespace std;
typedef long long int lli; 

int main(){
int t;
lli a,b,c,d,p,q;
cin>>t;
    for(int i=0;i<t;i++){
    cin>>a>>b>>c>>d;
        p=a*d;
        q=c*b;
            if(p==q)
                cout<<0<<endl;
            else if(p==0||q==0|| max(p,q)%min(p,q)==0)
                cout<<1<<endl;
            else
                cout<<2<<endl;

}


}