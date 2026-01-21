public class factorial {
    public static void main(String[] args) {
        int f = factorials(5);
        System.out.println(f);
    }

    public static int factorials(int num) {
        if (num < 1)
            return 1;
        return num * factorials(num - 1);
    }
}
