#include <iostream>
using namespace std;

int main(){
    
    int a , d=0;
    cin>>a;
    
    int b[a];
    int c[a];
    
    for(int i=0; i<a; i++){
        cin>>b[i];
    }
    
    for(int i=0; i<a; i++){
        cin>>c[i];
    }
    
    for(int i=0; i<a; i++){
        if(b[i]<c[i])d++;
    }
    
    
    if(d>=3) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}
