#include<iostream>

using namespace std;

int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
    if(a[i]>=38 && a[i]%5>=3){
        while(a[i]%5!=0){
            a[i]++;
        }
    }
    
    cout<<a[i]<<endl;
    }
return 0;
}
