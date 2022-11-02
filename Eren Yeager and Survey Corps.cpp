#include <iostream>
using namespace std;

int main(){
        int n;
        cin>>n;
        
        int k[n];
        
        for(int i=0; i<n; i++){
            k[i] = 0;
        }
        
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                int a;
                cin>>a;
                k[j]+=a;
            }
        }
        
        int e = k[0];
        
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(k[j]>k[j+1]){
                    int temp = k[j];
                    k[j] = k[j+1];
                    k[j+1] = temp;
                }
            }
        }
        
        
        if(k[n-1] == e || k[n-2] == e || k[n-3] == e){
            cout<<"YES";
        }
        
        else{
            cout<<"NO";
        }
        
    return 0;
}
