#include<iostream>
#include<string>
using namespace std;
int main(){
    char letter;  
    cin>>letter;
     
     string st = "codeforces";
     bool found = false;
     for(int i=0 ; i<st.length() ; i++){
         if(st[i] ==letter){
         found = true ;
         break;
         }
     }
     if(found){
         cout<<"YES "<<endl;
     }
     else
     cout<<"NO "<<endl;

  return 0;
}