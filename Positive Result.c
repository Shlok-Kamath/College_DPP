#include <stdio.h>
int main(){
    
    int n;
    int b=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]*arr[j]>0){
                b++;
            }
        }
    }
    
    printf("%d",b);
    
    return 0;
}
