import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        int a, b, s = 0;
        
        Scanner sc = new Scanner(System.in);
        
        a = sc.nextInt();
        b = sc.nextInt();
        
        for(int i=0; i<a; i++){
            s+=sc.nextInt();
        }
        
        if(s<b*2){
            System.out.println("YES");
        }
        
        else{
            System.out.println("NO");
        }
    }
}

