import java.util.LinkedList;

public class LinkedLists {
    public static void main(String[] args) {
        LinkedList<String> linkedlist = new LinkedList<String>();

        // linkedlist.push("A");
        // linkedlist.push("B");
        // linkedlist.push("C");
        // linkedlist.push("D");
        // linkedlist.push("F");

        linkedlist.offer("A");
        linkedlist.offer("B");
        linkedlist.offer("C");
        linkedlist.offer("D");
        linkedlist.offer("F");

        linkedlist.add(4, "E");
        linkedlist.remove("E");

        System.out.println(linkedlist.size());

        System.out.println(linkedlist);
        System.out.println(linkedlist.peekFirst());
        System.out.println(linkedlist.peekLast());
    }
}
