#include <stdio.h>

int main(){
    
    int a , d=0;
    scanf("%d",&a);
    
    int b[a];
    int c[a];
    
    for(int i=0; i<a; i++){
        scanf("%d",&b[i]);
    }
    
    for(int i=0; i<a; i++){
        scanf("%d",&c[i]);
    }
    
    for(int i=0; i<a; i++){
        if(b[i]<c[i])d++;
    }
    
    
    if(d>=3) printf("YES");
    else printf("NO");
    
    return 0;
}
