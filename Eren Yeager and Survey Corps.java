import java.util.Scanner;
import java.util.Arrays;

public class Main{
    public static void main(String args[]){
      
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []k = new int[n];
      
        for(int i=0; i<n; i++){
            k[i] = 0;
        }
      
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                k[j]+=sc.nextInt();
            }
        }
        
        int e = k[0];
        Arrays.sort(k);
        
        if(k[n-1] == e || k[n-2] == e || k[n-3] == e){
            System.out.println("YES");
        }
      
        else{
            System.out.println("NO");
        }
    }
}
