public class mergesort {
    public static void main(String[] args) {
        int[] arr = { 4, 1, 9, 2, 7, 5, 8, 3, 6 };

        mergeSort(arr);

        for (int i : arr) {
            System.out.print(i + " ");
        }
    }

    private static void mergeSort(int[] arr) {
        int length = arr.length;

        if (length <= 1)
            return;

        int middle = length / 2;
        int[] left = new int[middle];
        int[] right = new int[length - middle];

        int i = 0;
        int j = 0;

        for (; i < length; i++) {
            if (i < middle) {
                left[i] = arr[i];
            } else {
                right[j] = arr[i];
                j++;
            }
        }

        mergeSort(left);
        mergeSort(right);
        merge(left, right, arr);
    }

    private static void merge(int[] left, int[] right, int[] arr) {
        int leftSize = arr.length / 2;
        int rightSize = arr.length - leftSize;

        int i = 0, l = 0, r = 0;

        while (l < leftSize && r < rightSize) {
            if (left[l] < right[r]) {
                arr[i] = left[l];
                i++;
                l++;
            } else {
                arr[i] = right[r];
                i++;
                r++;
            }
        }

        while (l < leftSize) {
            arr[i] = left[l];
            i++;
            l++;
        }

        while (r < rightSize) {
            arr[i] = right[r];
            i++;
            r++;
        }
    }
}
