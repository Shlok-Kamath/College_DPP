#include <iostream>
using namespace std;

int main(){
    
    int a, b, s = 0;
    
    cin>>a;
    cin>>b;
    
    
    for(int i=0; i<a; i++){
        int temp;
        cin>>temp;
        s+=temp;
    }
    
    if(s<b*2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}
