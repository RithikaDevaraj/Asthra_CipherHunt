public class GCD {
    public static int gcd(int a, int b) {
        while (b != 0) {
            a = a % b;
        }
        return a;
    }

    public static void main(String[] args) {
        System.out.println("GCD is: " + gcd(56, 98));
    }
}
