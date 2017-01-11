package com.self.quickfind;

public class Quickfind {
	int N = 10;
	int[] id;

	public Quickfind() {
		id = new int[N];
	}

	void union(int p, int q) {

		int pId = id[p];
		int qId = id[q];

		for (int i = 0; i < id.length; i++) {
			if (pId == id[i]) {
				id[i] = qId;
			}
		}
	}

	public boolean isConnected(int p, int q) {
		return id[p] == id[q];
	}

	int find(int p) {
		return 0;
	}

	int count() {
		return N;
	}

}
