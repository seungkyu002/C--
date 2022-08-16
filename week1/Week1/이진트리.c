//#include <stdio.h>
//
//typedef struct {
//	char tree[8]; // Tree 1~7번 (0번은 못 씀)
//	int cur; // add, delete
//} Tree;
//
//void init(Tree* T) {
//	T->cur = 1;
//}
//
//void addNode(Tree* T, char data) {
//	if (T->cur == 8) {			// 꽉 찼으면,
//		printf("Tree is full.");
//	}
//	else {
//		T->tree[T->cur] = data; // 1
//		T->cur++;				// 2
//	}
//}
//
//void deleteNode(Tree* T) {
//	if (T->cur == 1) {
//		printf("Tree is Empty.");
//	}
//	else {
//		T->cur = T->cur - 1;
//	}
//}
//
//void show_left_child(Tree* T, int position) {
//	int left_child_position = position * 2;
//
//	// 조건! 
//	// 비어있는지?
//	// position <-- 이 조건은 확인하고 싶으면 하셔도 되죠 당연히!
//	// 왼쪽 자식이 있는지 == 2 <= 왼쪽 자식 번호 < cur
//	if (T->cur == 1) {
//		printf("Tree is Empty");
//	} else if (left_child_position < 2 || T->cur <= left_child_position) {
//		printf("왼쪽 노드가 존재하지 않습니다.");
//	} else {
//		printf("left child node의 자리 : %d, 값 : %d\n",
//			position * 2, T->tree[left_child_position]);
//	}
//}
//
//int main() {
//	Tree T;
//	init(&T);
//	addNode(&T, 'A');
//	addNode(&T, 'B');
//	addNode(&T, 'C');
//	addNode(&T, 'D');
//	addNode(&T, 'E');
//	addNode(&T, 'F');
//	addNode(&T, 'G');
//
//	display(&T); // A B C D E F G
//
//	show_parent(&T, 3); // A
//	show_left_child(&T, 2); // D
//	show_right_child(&T, 2); // E
//
//	deleteNode(&T);
//	display(&T); // A B C D E F
//
//	return 0;
//}