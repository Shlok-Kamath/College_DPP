#include <stdio.h>

int main(){
    
    int a, b, s = 0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    
    for(int i=0; i<a; i++){
        int temp;
        scanf("%d",&temp);
        s+=temp;
    }
    
    if(s<b*2){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}
