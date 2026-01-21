import java.util.*;

public class Queuee {
    public static void main(String[] args) {
        Queue<String> queue = new LinkedList<String>();
        queue.offer("Karen");
        queue.offer("chad");
        queue.offer("steve");

        System.out.println(queue);
        System.out.println(queue.peek());
        System.out.println(queue.isEmpty());

        System.out.println(queue.size());
    }
}

// Queue.offer() will add an element to the tail of the queue
// Queue.poll() will remove an element to the head of the queue
// Queue.peek() will return an element from the head of the queue