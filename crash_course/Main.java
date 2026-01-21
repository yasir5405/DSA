import java.util.*;

public class Main {
    public static void main(String[] agrs) {
        Stack<String> stack = new Stack<String>();
        System.out.println(stack.empty());

        stack.push("First");
        stack.push("Second");
        stack.push("Third");

        System.out.println(stack);
        System.out.println(stack.search("s"));

    }
}

// Stack.empty() returns boolean if the stack is empty;