#include <stdio.h>

int main(){
        int n;
        scanf("%d",&n);
        
        int k[n];
        
        for(int i=0; i<n; i++){
            k[i] = 0;
        }
        
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                int a;
                scanf("%d",&a);
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
            printf("YES");
        }
        
        else{
            printf("NO");
        }
        
    return 0;
}
