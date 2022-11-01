import java.util.Scanner;

class Main{
    
    public static void main(String args[]){
        
        int a , d = 0;
        
        Scanner sc = new Scanner(System.in);
        
        a = sc.nextInt();
        
        int b[] = new int[a];
        int c[] = new int[a];
        
        for(int i=0; i<a; i++){
            b[i] = sc.nextInt();
        }
        
        for(int i=0; i<a; i++){
            c[i] = sc.nextInt();
        }
        
        for(int i=0; i<a; i++){
            if(b[i]<c[i])d++;
        }
        
        
        if(d>=3) System.out.println("YES");
        else System.out.println("NO");
    }
}
