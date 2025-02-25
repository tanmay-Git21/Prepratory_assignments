import java.util.Scanner;




public class Question7 {

    public static void main(String[] args) {
        int number;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your number: ");
        number = sc.nextInt();
        System.out.println("Here's your table for number "+ number);
        for(int i = 1; i <= 10 ; i++){
            System.out.println(number * i);
        }
        sc.close();
    }
}