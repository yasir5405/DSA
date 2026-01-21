public class BubbleSort {
    public static void main(String[] args) {
        int[] arr = { 4, 1, 9, 2, 7, 5, 8, 3, 6 };

        bubbleSort(arr);

        for (int i : arr) {
            System.out.print(i);
        }

    }

    public static void bubbleSort(int[] array) {
        for (int i = 0; i < array.length - 1; i++) {
            for (int j = 0; j < array.length - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }
}
