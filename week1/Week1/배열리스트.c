//// ���� �� ��
////
//// add ���� �߰�
//// delete ����
//// Stack �ϼ� (peek,isfull,isempty)

//#include <stdio.h> // �⺻ �����
//
//typedef struct { // �ڷᱸ�� : �迭����Ʈ
//	int list[5]; // 5ĭ ����Ʈ ����
//	int size; // ���� ����
//}ArrayList;
//
//// �ʱ�ȭ
//void init(ArrayList* L) {
//	L->size = 0; // ���� ���� 0���� ����
//				 // �츰 ���� �����̴�!
//	// �ּҰ��� �޾Ƽ�, ���� �� �ȿ� ���� �����Ϸ���
//	// *L �̷��� ����ߴµ�
//	// ����� ��. �׳� L�� ���� -> �� ���� ����
//	// c�� �˾Ƽ� �ؼ����ְڴٰ�.
//}
//
//// ������� Ȯ��
//int isEmpty(ArrayList* L) { // ��� �׳� ArrayList �޾Ƶ� �Ǵµ�
//							// ���ϰ� �ַ��� *���
//	if (L->size == 0) {		// �������,
//							// = ���Ұ� 0��
//		return 1;			// True
//	} else {
//		return 0;			// False
//	}
//}
//
//// �� á����
//int isFull(ArrayList* L) {
//	if (L->size == 5) {
//		return 1;
//	} else {
//		return 0;
//	}
//}
//
//// delete
//void delete(ArrayList* L, int position) {
//	// �� ����־�� �ϰ� && position�� ���Ұ� �ִ���
//	if (isEmpty(L) == 0 && position >= 0 && position < L->size) {
//		for (int i = position; i < L->size; i++) {
//			L->list[i] = L->list[i + 1];
//			// ex. ���� 5�� -> �迭 ��ȣ 0 ~ 4
//			// �迭 4�� = �迭 5��
//		}
//		L->size--; // ���� ���� -1
//	}
//
//}
//
//// display : ��ü ���� ���
////		�迭 ��ȣ 0 ~ size -1
//void display(ArrayList* L) {
//	if (isEmpty(L) == 0) {
//		for (int i = 0; i < L->size; i++) {
//			printf("%d", L->list[i]);
//		}
//	}
//}
//
//int main() {
//
//	ArrayList arrlist;
//
//	init(&arrlist);
//	/*�׽�Ʈ�� ������ 3�� ����*/
//	add(&arrlist, 0, 7);
//	add(&arrlist, 1, 8);
//	add(&arrlist, 2, 10);
//
//	delete(&arrlist, 1);
//
//	add(&arrlist, 1, 700);
//
//	display(&arrlist);
//
//	return 0;
//}