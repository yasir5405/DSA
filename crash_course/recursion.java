public class recursion {
    public static void main(String[] args) {
        walk(5);
    }

    public static void walk(int steps) {
        if (steps < 1)
            return;

        System.out.println("You walked a step");

        walk(steps - 1);
    }
}
