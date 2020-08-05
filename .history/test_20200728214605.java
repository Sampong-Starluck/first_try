/**
 * test
 */
// public class test {

//     public static int factorial(int a) {
//         if (a > 1) {
//             return factorial(a -1)*a;
//         } else {
//             return 1;
//         }
//     }
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         int num;
//         System.out.print("Enter the number: ");
//         num = in.nextInt();
//         System.out.print(num + " factorial is: "+ factorial(num));
//     }
// }

import java.util.*;

/**
 * test
 */
public class test {

    // public static void main(String[] args) {
    //     Scanner in = new Scanner(System.in);
    //     int num;
    //     System.out.print("\nEnter the number: ");
    //     num = in.nextInt();
    //     System.out.print("\n");
    //     if (num >  0) {
    //         System.out.print("This is a positive number.");
    //     } else if (num < 0) {
    //         System.out.print("This is a negative number.");
    //     }else {
    //         System.out.print("This number is zero.");
    //     }
    //     System.out.print("\n\n");
    // }

    // public static void main(String[] args) {
    //     Scanner in = new Scanner(System.in);
    //     int n;
    //     System.out.print("Enter the size of array: ");
    //     n = in.nextInt();
    //     int[] num = new int[n];
    //     for (int i = 0; i < n; i++) {
    //         System.out.print("Enter the number: ");
    //         num[i] = in.nextInt();
    //     }
    //     System.out.print("The original array: "+ Arrays.toString(num));
    //     Arrays.sort(num);
    //     System.out.print("\nArray after sort: "+Arrays.toString(num));
    // }

    // public static void main(String[] args) {
    //     Scanner in = new Scanner(System.in);
    //     int n,sum = 0;
    //     System.out.print("Enter the size for array: ");
    //     n = in.nextInt();
    //     int[] num = new int[n];
    //     for (int i = 0; i < n; i++) {
    //         System.out.print("Enter the number: ");
    //         num[i] = in.nextInt();
    //     }
    //     for (int i : num) {
    //         sum += i;
    //     }
    //     System.out.print("The summation of array is "+sum);
    // }


    // public static void main(String[] args) {
    //     Scanner in = new Scanner(System.in);
    //     int n,sum = 0;
    //     System.out.print("Enter the size of array: ");
    //     n = in.nextInt();
    //     int[] num = new int[n];
    //     for (int i = 0; i < n; i++) {
    //         System.out.print("Enter the number: ");
    //         num[i] = in.nextInt();
    //     }
    //     for (int i = 0; i < n; i++) {
    //         sum += num[i];
    //     }
    //     System.out.print("The result is "+ sum);
    // }

//     public static boolean check(int[] arr,int n) {
//         for (int i : arr) {
//             if (n == i) {
//                 return true;
//             } 
//         }
//         return false;
//     }
//     public static void main(String[] args) {
//         Scanner in = new Scanner(System.in);
//         int[] arr = new int[] {12,87,23,90,34};
//         System.out.print("Enter the number that you want to search: ");
//         int n = in.nextInt();
//         if (check(arr,n) == true) {
//             System.out.print(n + " is exist in array");
//         } else {
//             System.out.print(n + " is not exist in array");
//         }
//     }

public static int countDigit(int n) {
    int ctr = 0;
    if (n != 0) {
        ctr ++;
        countDigit(n/10);
    } else {
        return 0;
    }
    retur
}
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        System.out.print("Enter the number: ");
        n = in.nextInt();
        System.out.print(n + " have " + countDigit(n) + " digits");
    }
}

