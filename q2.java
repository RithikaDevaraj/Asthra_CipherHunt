public class Fibonacci {
    public static int[] fibonacci(int n) {
        int[] fib = new int[n];
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i < n; i++) {
            fib[i] = fib[i - 2] + fib[i - 1];
        }
        return fib;
    }

    public static void main(String[] args) {
        int n = 8;
        int[] fib = fibonacci(n);
        System.out.print("Fibonacci sequence: ");
        for (int num : fib) {
            System.out.print(num + " ");
        }
    }
}
