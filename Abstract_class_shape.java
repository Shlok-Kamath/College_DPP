import java.util.Scanner;

abstract class Shape{
    public abstract void RectangleArea(int a, int b);
    public abstract void SquareArea(int a);
    public abstract void CircleArea(int a);
}

class Area extends Shape{
    @Override
    public void RectangleArea(int a, int b){
        System.out.println(a*b);
    }

    @Override
    public void SquareArea(int a) {
        System.out.println(a*a);
    }

    public void CircleArea(int a) {
        System.out.println(3.14*a*a);
    }
}


public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Area[] a = new Area[9];
        int j=0;
        for (int i = 0; i < 9; i++) {
            a[i] = new Area();
        }
        for (int i = 0; i < 4; i++) {
            int b = sc.nextInt();
            int c = sc.nextInt();
            a[j].RectangleArea(b,c);
            j++;
        }

        for (int i = 0; i < 2; i++) {
            int b = sc.nextInt();
            a[j].SquareArea(b);
            j++;
        }

        for (int i = 0; i < 3; i++) {
            int b = sc.nextInt();
            a[j].CircleArea(b);
            j++;
        }
    }
}

