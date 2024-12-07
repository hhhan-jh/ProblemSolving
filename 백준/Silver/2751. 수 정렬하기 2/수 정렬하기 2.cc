#include <iostream>
#include <cmath>
class fastHeap {
private:
	int e[1000001] = { 0 };
	int size = 0;

	int getLeft(int idx) { return 2 * idx; }
	int getRight(int idx) { return 2 * idx + 1; }
	int getPar(int idx) { return floor(idx / 2); }
	int getHeight(int idx) { return floor(log2(idx)); }
	int getDegree(int idx) {
		int leftChd = getLeft(idx);
		if (leftChd > size)return 0;
		else if (leftChd == size)return 1;
		else return 2;
	}
	bool isLeaf(int idx) { return getDegree(idx) == 0; }
	void bubbleUpHeap(int root, int k, int vacant);
	int promote(int hStop, int vacant, int h);
	void fixHeap(int k, int vacant, int h);

public:
	int getSize() { return size; }
	bool isEmpty() { return size == 0; }
	int getMax() { return e[1]; }
	void insert(int elem) { e[++size] = elem; }
	void constructHeap(int idx);
	void print();
	void deleteMax();
};

int main() {
	fastHeap heap;		
	int N;
	scanf("%d", &N);
	for (int j = 0; j < N; j++){
		int elem;
		scanf("%d", &elem);
		heap.insert(elem);
	}
	heap.constructHeap(1);

	while (!heap.isEmpty()){
		printf("%d ", heap.getMax());
		heap.deleteMax();
	}
	printf("\n");
}

//private
void fastHeap::bubbleUpHeap(int root, int k, int vacant) {
	if (vacant == root) {
		e[vacant] = k;
		return;
	}
	int par = getPar(vacant);
	if (k > e[par]) e[vacant] = k;
	else {
		e[vacant] = e[par];
		bubbleUpHeap(root, k, par);
	}
		
}
int fastHeap::promote(int hStop, int vacant, int h) {
	//hStop까지 내려온 경우 종료
	if (h <= hStop) return vacant;
	//자식 노드의 수가 1인 경우
	else if (getDegree(vacant) == 1) {
		//더 큰 자식 노드는 무조건 leftChd이므로 그 값을 바로 vacant에 넣고 재귀
		int minChd = getLeft(vacant);
		e[vacant] = e[minChd];
		return promote(hStop, minChd, h - 1);
	}
	//자식 노드의 수가 2인 경우
	else {
		int leftChd = getLeft(vacant);
		int rightChd = getRight(vacant);
		int minChd = e[leftChd] < e[rightChd] ? leftChd : rightChd;
		
		//더 큰 자식 노드의 값을 vacant에 넣고 재귀
		e[vacant] = e[minChd];
		return promote(hStop, minChd, h - 1);
	}
}
void fastHeap::fixHeap(int k, int vacant, int h) {
	//리프 노드인 경우
	if (h == 0) {
		e[vacant] = k;
		return;
	}
	//높이가 1이지만 리프 노드인 경우
	else if (h == 1 && getDegree(vacant) == 0) {
		e[vacant] = k;
		return;
	}
	//h>1인 경우
	int hStop = h / 2;
	int vacStop = promote(hStop, vacant, h);
	int vacPar = vacStop/2;
	//높이의 절반까지 내려왔을 때 해당 vacant의 부모보다 key값이 크다면 버블업힙 수행
	if (e[vacStop] > k) {
		e[vacStop] = e[vacPar];
		return bubbleUpHeap(vacant, k, vacPar);
	}
	//그렇지 않다면 fixHeap 재귀
	else {
		return fixHeap(k, vacStop, hStop);
	}
	
}

//public
void fastHeap::constructHeap(int idx) {
	if (isLeaf(idx)) return;
	constructHeap(getLeft(idx));
	constructHeap(getRight(idx));
	fixHeap(e[idx], idx, getHeight(size) - getHeight(idx));
}
void fastHeap::print() {
	for (int i = 1; i < size+1; i++){
		printf("%d ", e[i]);
	}
	printf("\n");
}
void fastHeap::deleteMax() {
	int k = e[size];
	e[size--] = 0;
	if (size == 0) return;
	fixHeap(k, 1, getHeight(size));
}