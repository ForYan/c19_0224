#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//

//쳲����������Ż�(�����ظ�����)
//int FiB(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	int result = 0;
//	int num1 = 1;
//	int num2 = 1;
//	for (int i = 0; i < n; ++i){
//		result = num1 + num2;
//		num1 = num2;
//		num2 = result;
//	}
//	return result;
//}
//int main(){
//	printf("%d\n", FiB(40));
//	system("pause");
//	return 0;
//}
//���n��쳲���������(�õݹ���)
//int count = 0;
//int FiBo(int n){
//	if (n ==1||n==2){
//		return 1;
//	}
//	if (n == 4){
//		++count;
//	}
//		return FiBo(n - 1)+FiBo(n - 2);
//}
//int main(){
//	printf("%d\n", FiBo(40));
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}

//�õݹ���n�Ľ׳�
//int PrintMul(int n){
//	//���n��1����ֱ�ӷ���1
//	if (n == 1){
//		return 1;
//	}
//	//���n����1���򷵻�n*PrintMul(n-1)
//	else{
//		return n*PrintMul(n - 1);
//	}
//}
//int main(){
//	int n = 0;
//	printf("������n=");
//	scanf("%d", &n);
//	int sum = PrintMul(n);
//	printf("sum=%d", sum);
//	system("pause");
//	return 0;
//}

//��д��������������ʱ���������ַ����ĳ���
//int Strlen(char* str){
//	if (*str == '\0'){
//		//strָ�����һ�����ַ���
//		return 0;
//	}
//	//strָ��Ĳ���һ�����ַ���
//	return 1 + Strlen(1 + str);
//}
//int main(){
//	char str[] = "hehehehe" ;
//	printf("%d\n", Strlen(str));
//	system("pause");
//	return 0;
//}
//����1234�����1 2 3 4
//void PrintNum(int num){
//	if (num > 9){
//		PrintNum(num/10);
//	}
//	printf("%d ", num % 10);
//}
//int main(){
//	int num = 1234;
//	PrintNum(1234);
//	system("pause");
//	return 0;
//}
//��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
//int main(){
//	char zifu;
//	while (1){		
//		printf("��Ӽ�����������һ���ַ���");
//		scanf("%c", &zifu);
//		if ((zifu >= 'a')&&(zifu <= 'z')){
//			printf("%c \n", zifu - 32);
//		}
//		else if ((zifu>='A')&&(zifu <='Z')){
//			printf("%c \n", zifu + 32);
//		}
//		else  {
//			printf("%c \n", zifu);
//		}		
//	}
//	system("pause");
//	return 0;
//}

//��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
//int main(){
//	char password[] = "123456";
//	int i = 1;
//	for (i = 1; i <= 3; ++i){
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0){
//			printf("����������ȷ����¼�ɹ�\n");
//			break;
//		}
//		else{
//			printf("�����������!����������!\n");
//		}
//	}
//	if (i == 4){
//		printf("���ֻ�������������룡���Ѳ����ٴ����룡\n");
//	}
//	system("pause");
//	return 0;
//}

//д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ�������-1.���۰���ң�
//int FindNum(){
//	int str[] = { 1, 2, 3, 4, 5, 6 };
//	int left = 0;
//	int right = sizeof(str) / sizeof(str[0])-1;
//	int mid;
//	int xiabiao = 0;
//	int num = 0;
//	printf("����������Ҫ���ҵ�����\n");
//	scanf("%d", &num);
//	while(left<=right){
//		mid = (left + right) / 2;
//		if (num > str[mid]){
//			left = mid+1;
//		}
//		else if (num < str[mid]){
//			right = mid-1;
//		}
//		else{
//			xiabiao = mid;
//			break;
//		}
//	}
//	if (left <= right){
//		return xiabiao;
//	}
//	else{
//		return -1;
//	}
//}
//int main(){
//	int i = FindNum();
//	printf("�±꣺%d", i);
//	system("pause");
//	return 0;
//}


//��ɲ�������Ϸ
//�����1�ͽ�����Ϸ�������0���˳���Ϸ
//int PrintChoose(){
//	int choice = 0;
//	printf("###########################\n");
//	printf("########1.������Ϸ#########\n");
//	printf("########0.�˳���Ϸ#########\n");
//	printf("###########################\n");
//	printf("����������ѡ��\n");
//	scanf("%d", &choice);
//	return choice;
//}
////���Բ���һ������������������������бȽϣ�ֱ��������ȷ
//void Game(){
//	int result = rand() % 100 + 1;
//	while (1){
//		printf("���������²�����֣�");
//		int num = 0;
//		scanf("%d", &num);
//		if (result > num){
//			printf("����\n");
//		}
//		else if (result < num){
//			printf("����\n");
//		}
//		else{
//			printf("��ϲ������ˣ�\n");
//			break;
//		}
//	}
//}
//int main(){
//	int choice =PrintChoose();
//	if (choice == 1){
//		Game();
//	}
//	else if (choice == 0){
//		printf("�˳���Ϸ��");
//	}
//	else{
//		printf("������������");
//	}
//	system("pause");
//	return 0;
//}