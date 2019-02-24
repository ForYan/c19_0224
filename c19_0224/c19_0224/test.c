#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//

//斐波那契数列优化(减少重复次数)
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
//求第n个斐波那契数列(用递归求)
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

//用递归求n的阶乘
//int PrintMul(int n){
//	//如果n是1，则直接返回1
//	if (n == 1){
//		return 1;
//	}
//	//如果n不是1，则返回n*PrintMul(n-1)
//	else{
//		return n*PrintMul(n - 1);
//	}
//}
//int main(){
//	int n = 0;
//	printf("请输入n=");
//	scanf("%d", &n);
//	int sum = PrintMul(n);
//	printf("sum=%d", sum);
//	system("pause");
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度
//int Strlen(char* str){
//	if (*str == '\0'){
//		//str指向的是一个空字符串
//		return 0;
//	}
//	//str指向的不是一个空字符串
//	return 1 + Strlen(1 + str);
//}
//int main(){
//	char str[] = "hehehehe" ;
//	printf("%d\n", Strlen(str));
//	system("pause");
//	return 0;
//}
//输入1234，输出1 2 3 4
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
//编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
//int main(){
//	char zifu;
//	while (1){		
//		printf("请从键盘上面输入一个字符：");
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

//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int main(){
//	char password[] = "123456";
//	int i = 1;
//	for (i = 1; i <= 3; ++i){
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0){
//			printf("密码输入正确！登录成功\n");
//			break;
//		}
//		else{
//			printf("密码输入错误!请重新输入!\n");
//		}
//	}
//	if (i == 4){
//		printf("最多只能输入三次密码！您已不能再次输入！\n");
//	}
//	system("pause");
//	return 0;
//}

//写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回-1.（折半查找）
//int FindNum(){
//	int str[] = { 1, 2, 3, 4, 5, 6 };
//	int left = 0;
//	int right = sizeof(str) / sizeof(str[0])-1;
//	int mid;
//	int xiabiao = 0;
//	int num = 0;
//	printf("请输入您想要查找的数字\n");
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
//	printf("下标：%d", i);
//	system("pause");
//	return 0;
//}


//完成猜数字游戏
//如果是1就进入游戏，如果是0就退出游戏
//int PrintChoose(){
//	int choice = 0;
//	printf("###########################\n");
//	printf("########1.进入游戏#########\n");
//	printf("########0.退出游戏#########\n");
//	printf("###########################\n");
//	printf("请输入您的选择：\n");
//	scanf("%d", &choice);
//	return choice;
//}
////电脑产生一个随机数，和输入的随机数进行比较，直至输入正确
//void Game(){
//	int result = rand() % 100 + 1;
//	while (1){
//		printf("请输入您猜测的数字：");
//		int num = 0;
//		scanf("%d", &num);
//		if (result > num){
//			printf("低了\n");
//		}
//		else if (result < num){
//			printf("高了\n");
//		}
//		else{
//			printf("恭喜您答对了！\n");
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
//		printf("退出游戏！");
//	}
//	else{
//		printf("您的输入有误！");
//	}
//	system("pause");
//	return 0;
//}