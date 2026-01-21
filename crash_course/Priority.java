import java.util.*;

public class Priority {
    public static void main(String[] args) {
        Queue<String> queue = new PriorityQueue<>();

        queue.offer("F");
        queue.offer("C");
        queue.offer("A");
        queue.offer("B");

        System.out.println(queue);
        while (!queue.isEmpty()) {
            System.out.println(queue.poll());
        }
    }
}

// Priority Queue automatically basically rearranges its items