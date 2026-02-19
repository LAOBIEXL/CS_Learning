#define _CRT_SECURE_NO_WARNINGS

//创建猜数字游戏

//生成1-100内的随机数：

//并且确定大小；

//使用rand函数的尝试

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand((unsigned int)time(null));
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	//由于rand函数生成伪随机数的种子默认是一；

	//引用time函数，返回time_t类型






	return 0;
}


//进行猜数字游戏的实现：





#include<stdio.h>

#include<stdlib.h>

#include<time.h>


void create_be(void)
{
	printf("#########################\n");
	printf("#########################\n");
	printf("### play:1    quit:0 ####\n");
	printf("#########################\n");
	printf("#########################\n");
}

void game(void)
{
	//创建随机数属于1-100
	int g = 0;
	int q = (1 + rand() % 100);
	while (q != g)
	{
		printf("请输入您猜测的数字？\n");
		scanf("%d", &g);
		printf("%s", g > q ? "猜大了\n" : "猜小了\n");
	}
	printf("congratulations You are right!\n\n");
	
	
}




int main()
{
	//打印开始游玩界面
	srand((unsigned int)time(NULL));
	while (1) 
	{
		create_be();

		//进行选择
		int key = 0;
		scanf("%d", &key);

		//检测
		if (key)
		{
			game();
		}
		else
		{
			printf("thank you for playing !\n");
			return 0;
		}



	}
	



	return 0;
}

//其他版本

#include<stdio.h>

#include<stdlib.h>

#include<time.h>

int main()
{
	//首先，打印菜单可以使用do循环
	int input = 0;
	srand((unsigned int)time(NULL));

	do {
		screen();

		switch ()
		{
		case 1:
			break;
		case2:
			break;
		default:
			break;

		}while (input);








	} while (1);





}

