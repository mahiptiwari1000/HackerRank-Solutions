#include<iostream>

using namespace std;

int main(){

long long int n,i;
cin>>n;
long long int a[n];
long long int max=a[0];
long long int count = 0;

for(i=0;i<n;i++){
    cin>>a[i];
    if(max<a[i]){
        max=a[i];
    }
}

for(i=0;i<n;i++){
if(a[i]==max){
    count++;
}
}

cout<<count;

return 0;
}
