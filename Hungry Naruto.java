import java.util.Scanner;

class Main{
    public static void main(String args[]){
        int X,Y,N,R;
        
        Scanner sc = new Scanner(System.in);
        
        X = sc.nextInt();
        Y = sc.nextInt();
        N = sc.nextInt();
        R = sc.nextInt();
        
        if(R<N*X){
            System.out.println("-1");
        }
        
        else if(R>Y*N){
            System.out.println("0 "+N);
        }
        
        else{
            int e=(R-N*X)/(Y-X);
            System.out.println(N-e+" "+e);
        }
    }
}
