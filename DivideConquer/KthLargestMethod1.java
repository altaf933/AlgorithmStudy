package leetcode;

import java.util.Arrays;

public class KthLargestMethod1 {

	public static void main(String[] args) {
		int[] arr = { 7, 4, 6, 3, 9, 1 };
		int k = 2;
		findKthLargestElementMethod1(arr, k);

	}

	private static void findKthLargestElementMethod1(int[] arr, int k) {
		if (k > 0) {
			int newIndexValue = arr[k];
			Arrays.sort(arr);
			for (int i = 0; i < arr.length; i++) {

				if (newIndexValue == arr[i]) {
					newIndexValue = i;
				}
			}

			System.out.println(arr[newIndexValue + 1]);
		} else {
			System.out.println("No found any value");
		}
	}

}
