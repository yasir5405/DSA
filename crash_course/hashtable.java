import java.util.*;

public class hashtable {
    public static void main(String[] args) {
        HashMap<String, Integer> map = new HashMap<>();

        map.put("India", 120);
        map.put("China", 140);
        map.put("US", 50);

        // System.out.println(map);

        for (Map.Entry<String, Integer> e : map.entrySet()) {
            System.out.println(e);
        }

    }
}
