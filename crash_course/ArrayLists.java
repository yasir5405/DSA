
public class ArrayLists {
    int size;
    int capacity = 10;
    Object[] array;

    public ArrayLists() {
        this.array = new Object[capacity];
    }

    public ArrayLists(int capacity) {
        this.capacity = capacity;
        this.array = new Object[capacity];
    }
}

