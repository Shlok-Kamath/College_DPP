#include <iostream>
using namespace std;


int main(){
    
    int n;
    int b=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]*arr[j]>0){
                b++;
            }
        }
    }
    
    cout<<b;
    
    return 0;
}
