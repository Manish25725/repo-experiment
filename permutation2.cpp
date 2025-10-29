#include<bits/stdc++.h>
using namespace std;


void permutation(string& str,int idx){
    if(idx==str.size()){
        cout<<str<<endl;
        return;
    }

    for(int i=idx;i<str.size();i++){
        swap(str[idx],str[i]);
        permutation(str,idx+1);
        swap(str[idx],str[i]);
    }
}

int main(){
    string str="abc";
    permutation(str,0);
    return 0;
}


