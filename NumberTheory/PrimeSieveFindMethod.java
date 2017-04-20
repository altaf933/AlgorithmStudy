package spoj;

public class PrimeSieveFindMethod {

	public static void main(String[] args) {

		int n = 10;
		System.out.println(Math.sqrt(n));
		boolean A[] = new boolean[n];
		for (int i = 0; i < A.length; i++) {
			A[i] = true;
		}
		for (int i = 2; i < Math.sqrt(n); i++) {
			if (A[i]) {
				for (int j = 0; j < n; j++) {
					int value = (i * i) + (j * i);
					if (value < n)
						A[value] = false;
				}
			}
		}

		for (int i = 2; i < A.length; i++) {
			if (A[i] == true) {
				System.out.println(i);
			}
		}
	}
}
