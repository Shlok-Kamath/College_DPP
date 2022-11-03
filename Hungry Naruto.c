#include <stdio.h>

int main(){
    
    int X,Y,N,R;
    scanf("%d",&X);
    scanf("%d",&Y);
    scanf("%d",&N);
    scanf("%d",&R);
    
    if(R<N*X){
        printf("-1");
    }
    
    else if(R>Y*N){
        printf("0 %d",N);
    }
    
    else{
        int e=(R-N*X)/(Y-X);
        printf("%d %d",N-e,e);
    }
    
    return 0;
}
