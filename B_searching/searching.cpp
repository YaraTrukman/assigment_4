#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    cin>>x;
    bool found = false;
    for(int j =0; j<n ; j++){
        if (a[j] == x){
        cout<<j; 
        found = true;
        }
    }
    if(!found){
        cout<<"-1"<<endl;
    }

    return 0;
}