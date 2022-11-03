#include <iostream>
using namespace std;

int main(){
    
    int X,Y,N,R;
    cin>>X;
    cin>>Y;
    cin>>N;
    cin>>R;
    
    if(R<N*X){
        cout<<"-1";
    }
    
    else if(R>Y*N){
        cout<<"0 "<<N;
    }
    
    else{
        int e=(R-N*X)/(Y-X);
        cout<<N-e<<" "<<e;
    }
    
    return 0;
}
