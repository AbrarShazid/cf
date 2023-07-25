#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lk() cout.unsetf(ios::floatfield);cout.precision(3);cout.setf(ios::fixed,ios::floatfield);
int person[61];
int main() {
    optimize();
    lk();


int n;
cin>>n;
int m,k,h;
cin>>m>>k>>h;

for(int i=0;i<n;i++){
    cin>>person[i];
}

int count=0;
int val=0;
for(int i=0,j=0;i<n,j<m;j++){
    int fuck=h;
    if(h==person[i]){
        count=count+1;
        i++;
    }
     if(j==m){
        i++;
    }
    else if (h>person[i]){
        person[i]+=k;
        if(h==person[i]){
        count=count+1;
        i++;
    }
        

    }
    else if (fuck<person[i]){
         fuck+=k;  
        
          if(fuck==person[i]){
        count+=1;
        i++;
    }


    }
    else{
        i++;
    }
   


}

cout<<count<<endl;





return 0;

}
