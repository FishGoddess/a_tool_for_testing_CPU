#include <stdio.h>
#include <time.h>  //后面要用到clock函数
#include <windows.h>
#include <omp.h>  //需要用 #pragma omp parallel for 来进行多线程并行计算
#define stdo GetStdHandle(STD_OUTPUT_HANDLE)
//#define blue FOREGROUND_BLUE
//#define green FOREGROUND_GREEN
//#define red FOREGROUND_RED
#define inte FOREGROUND_INTENSITY
//#define topl COMMON_LVB_GRID_HORIZONTAL
//#define leftl COMMON_LVB_GRID_LVERTICAL
#define NN 40000000

void color(int cl,int jia)
{
	/*颜色对应值： 
	0=黑色                8=灰色　　
	1=蓝色                9=淡蓝色                　　                        
	2=绿色                10=淡绿色       0xa        　　
	3=湖蓝色				  11=淡浅绿色        0xb　
	4=红色                12=淡红色        0xc　　
	5=紫色                13=淡紫色        0xd        　　
	6=黄色                14=淡黄色        0xe        　　
	7=白色                15=亮白色        0xf 
	也可以吧这些值设置成常量。
	*/
	if (jia == 1)
	{
		SetConsoleTextAttribute(stdo,cl|inte|BACKGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
	}
	else
	{
		SetConsoleTextAttribute(stdo,cl|BACKGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
	}
}
void boot(int bt)//显示图案
{
	if (bt == 1)
	{
		printf("\n");
		printf("\n");
		printf("                   *                   *         \n");
		printf("                     *               *           \n");
		printf("                       *           *             \n");
		printf("                     *               *           \n");
		printf("                   *                   *         \n");
		printf("                             o                   \n");
		printf("\n");
		printf("                         *       *               \n");
		printf("                           *   *              \n");
		printf("                             *                  \n");
		printf("                           *   *                  \n");
		printf("                         *       *              \n");
		printf("                                             \n");
			
	}
	if (bt == 2)
	{
		printf("\n");
		printf("\n");
		printf("\n");
		printf("              __________           __________     \n");
		printf("                  $$$                  $$$           \n");
		printf("                  $$$                  $$$          \n");
		printf("\n");
		printf("\n");
		printf("                             o                  \n");
		printf("\n");
		printf("\n");
		printf("                     *****************         \n");
		printf("                     *****************          \n");
		printf("\n");
		}
		
	if (bt == 3)
	{
		printf("\n");
		printf("\n");
		printf("\n");
		printf("              __________           __________      \n");
		printf("                     $$$                  $$$         \n");
		printf("                     $$$                  $$$      \n");
		printf("\n");
		printf("\n");
		printf("                             @                   \n");
		printf("\n");
		printf("                   #                   #     \n");
		printf("                    #                 #     \n");
		printf("                      #             #        \n");
		printf("                        ###########       \n");
		printf("\n");
		}
	if (bt == 4)
	{
		printf("\n");
		printf("\n");
		printf("\n");
		printf("                     @       ###       @          \n");
		printf("                   @@    .   ###   .    @@       \n");
		printf("                  @@    ###   0   ###    @@           \n");
		printf("                  @@@@@@@@@@@@@@@@@@@@@@@@@        \n");
		printf("                           #######                     \n");
		printf("                            #####                     \n");
		printf("                             #.#                       \n");
		printf("                            #####                       \n");
		printf("                           #######                   \n");
		printf("                          #### ####            \n");
		printf("                         ####   ####                  \n");
		printf("                         ###     ###               \n");
		printf("                         ###     ###                    \n");
		printf("                       $$$$!     !$$$$               \n");
		printf("\n");
	}
	if (bt == 5)
	{
		printf("\n");
		printf("                ! ! ! !             ! ! ! !               \n");
		printf("                *******             *******                   \n");
		printf("             *           *       *           *                \n");
		printf("            *     $$$     *     *     $$$     *                 \n");
		printf("                  $$$                 $$$                 \n");
		printf("\n");
		printf("\n");
		printf("                             &                            \n");
		printf("                  *                                  \n");
		printf("                    *    *********                     \n");
		printf("                  *      *   $$$ *                         \n");
		printf("                    *    * $$$   *                           \n");
		printf("                  *      $$$******                        \n");
		printf("                   $$$ $$$                             \n");
		printf("                     $$$    \n");
		printf("\n");
	}
	if (bt == 6)
	{
		printf(" \n");
		printf("   \n");
		printf("         ###      ###            ##############            \n");
		printf("         ###     ###             ##############            \n");
		printf("         ###    ###              ###        ###            \n");
		printf("         ###   ###               ###        ###           \n");
		printf("         ###  ###                ###        ###        \n");
		printf("         ### ###                 ###        ###           \n");
		printf("         ######                  ###        ###          \n");
		printf("         ### ###                 ###        ###              \n");
		printf("         ###  ###                ###        ###           \n");
		printf("         ###   ###               ###        ###            \n");
		printf("         ###    ###              ###        ###           \n");
		printf("         ###     ###   @@@       ##############  @@@       \n");
		printf("         ###      ###  @@@       ##############  @@@       \n");
		printf("\n");
	}
		
}
void body()
{
	int num01=2,num02=1;
	if (num02<num01)
	{
		int t = num01;
		num01 = num02;
		num02 = t;
		t = num02;
		num02 = num01;
		num01 = t;
		double sum = 0;
		for (int j=0;j<10;j++)
		{
			sum += j;
			sum *= (sum-j);
			sum /= j;
			sum -= j;
		}
	}
}
int test(int num)
{
	body();
	for (int i = 0; i < 1; i++)
	{
		if (num == 1)
		{
			return 1;
		}
		else
		{
			return test(num-1)*1;
		}
	}
}

int main()
{
	//printf("%d,%d\n",omp_get_num_procs(),omp_get_thread_num());
	system("color f0");
	color(4,0);
	printf("|***************** CPU计算能力测试 V3.0 *****************|\n  \n");
	printf("\n");
	printf("                                        @@@@         \n");
	printf("                                        ####         \n");
	printf("              @                         @@@@         \n");
	printf("             @@                         ####         \n");
	printf("            @@@@@@@###@@@###@@@###@@@###@@@@         \n");
	printf("--> 按下   @@@@@@@@@###@@@###@@@###@@@###@@@   开始测试！！\n");
	printf("\n");
	getchar();

	color(3,0);
	printf("--> 正在测试多线程计算能力！\n\n");
	printf("[ 假如我是一朵花，我会让雨把我浇的水灵灵的，让我时刻散发香味。 ]\n");
	
	#pragma omp parallel for//让CPU做好准备
	for (long long i = 1; i <= 100000000; i++)
	{
		double sum=0;
		sum += i;
	}

	//多线程测试
	double begin = clock();//时间计时开始
	#pragma omp parallel for
	for (int tmp = 0; tmp < NN; tmp++)
	{
		for (int c=0;c<1;c++)
		{
			body();
			test(5);
		}
		if (tmp == NN/2)
		{
			printf("[ 完美不是没有任何东西可加，而是没有任何东西可减。 ]\n\n");
		}
		for (int c=0;c<1;c++)
		{
			body();
			test(5);
		}
		for (int c=0;c<1;c++)
		{
			body();
			test(5);
		}
	}
	double end = clock();//时间计时结束

	double Mtime = (end-begin)/1000;
	double Mmarks = 1888/Mtime;
	
	//单线程计算方式和多线程应该一致
	printf("--> 正在测试单线程计算能力！\n\n");
	printf("[ 是谁说过，艺术一定是一场高雅的音乐会一幅昂贵的世界名画呢？ ]\n");
	Sleep(1000);
	
	begin = clock();
	for (int tmp = 0; tmp < NN; tmp++)
	{
		for (int c=0;c<1;c++)
		{
			body();
			test(5);
		}
		if (tmp == NN/2)
		{
			printf("[ 我认为，一句幽默的话一片小的笑话，它们都是艺术，艺术就在我们身边！ ]\n");
		}
		for (int c=0;c<1;c++)
		{
			body();
			test(5);
		}
		for (int c=0;c<1;c++)
		{
			body();
			test(5);
		}
	}
	end = clock();

	double Stime = (end-begin)/1000;
	double Smarks = 1888/Stime;

	color(4,1);
	printf("\n恭喜您！已顺利完成测试！\n\n");
	color(5,0);
	if (Mmarks < 30)
	{
		boot(1);
		color(3,0);
		printf("哎呀，你的CPU是古董级的吧！这么差的性能也能用？你肯定是在逗我！\n\n");
		color(5,0);
		printf("[  < 30  ] ");
		color(8,1);
		printf("(30 ~ 50 )( 50 ~ 90 )( 90 ~ 130 )( 130 ~ 200 )( > 200 )\n");
		color(5,0);
		printf(" 你的得分 \n\n");
	}
	else if (Mmarks >= 30 && Mmarks < 50)
	{
		boot(2);
		color(3,0);
		printf("嗯...你的CPU年纪都这么大了！也该让他远离尘嚣，好好地享受晚年了！\n\n");
		color(8,1);
		printf("( < 30 ) ");
		color(5,0);
		printf("[ 30 ~ 50 ] ");
		color(8,1);
		printf("( 50 ~ 90 )( 90 ~ 130 )( 130 ~ 200 )( > 200 )\n");
		color(5,0);
		printf("           你的得分 \n\n");
	}
	else if (Mmarks >= 50 && Mmarks < 90)
	{
		boot(3);
		color(3,0);
		printf("可以！你的CPU正属男人成熟之时！在这段时光里，娱乐生活完全没问题！\n\n");
		color(8,1);
		printf("( < 30 )( 30 ~ 50 ) ");
		color(5,0);
		printf("[ 50 ~ 90 ] ");
		color(8,1);
		printf("( 90 ~ 130 )( 130 ~ 200 )( > 200 )\n");
		color(5,0);
		printf("                      你的得分 \n\n");
	}
	else if (Mmarks >= 90 && Mmarks < 130)
	{
		boot(4);
		color(3,0);
		printf("哇！你的CPU是练过的吧，肌肉这么发达？你该不会天天都让他当苦力吧？\n\n");
		color(8,1);
		printf("( < 30 )( 30 ~ 50 )( 50 ~ 90 ) ");
		color(5,0);
		printf("[ 90 ~ 130 ] ");
		color(8,1);
		printf("( 130 ~ 200 )( > 200 )\n");
		color(5,0);
		printf("                                 你的得分  \n\n");
	}
	else if (Mmarks >= 130 && Mmarks < 200)
	{
		boot(5);
		color(3,0);
		printf("哎哟不错哦！你的CPU一骑卷风尘，轻功如此了得，想必在下是独孤求败吧！\n\n");
		color(8,1);
		printf("( < 30 )( 30 ~ 50 )( 50 ~ 90 )( 90 ~ 130 ) ");
		color(5,0);
		printf("[ 130 ~ 200 ] ");
		color(8,1);
		printf("( > 200 )\n");
		color(5,0);
		printf("                                              你的得分  \n\n");
	}
	else
	{
		boot(6);
		color(3,0);
		printf("一个、两个....卧槽！！你这CPU是用来数框框的吧！无敌是多么多么寂寞~~\n\n");
		color(8,1);
		printf("( < 30 )( 30 ~ 50 )( 50 ~ 90 )( 90 ~ 130 )( 130 ~ 200 ) ");
		color(5,0);
		printf("[  > 200  ]\n");
		printf("                                                          你的得分 \n\n");
	}
	color(0,0);
	printf("===========================  详细信息  ===========================\n\n");
	printf(" < 您的CPU单线程用时为 %3.3f s > ",Stime);//输出运行的时长，将单位由毫秒转换为秒
	printf(" < 单线程得分为 %.2f Marks >\n\n",Smarks);
	printf(" < 您的CPU多线程用时为 %3.3f s > ",Mtime);//输出运行的时长，将单位由毫秒转换为秒
	printf(" < 多线程得分为 %.2f Marks >\n\n",Mmarks);
	printf(" < 您的CPU线程总数为 %d T > ",omp_get_num_procs());
	printf(" < 线程效率比为 %3.2f X >\n\n",Stime/Mtime);
	

	printf("与参考数据的对比：\n");
	printf("-> %.1f%% 奔腾G4400的性能！( 2C2T，单线程 25.5 M，多线程 52 M )\n",Mmarks/52*100);
	printf("-> %.1f%% I7-6500U的性能！( 2C4T，单线程 23.3 M，多线程 59.9 M )\n",Mmarks/59.9*100);
	printf("-> %.1f%% I5-6300HQ的性能！( 4C4T，单线程 24.5 M，多线程 84.4 M )\n",Mmarks/84.4*100);
	printf("-> %.1f%% I5-6500的性能！( 4C4T，单线程 27.4 M，多线程 101.3 M )\n",Mmarks/101.3*100);
	printf("-> %.1f%% I7-6700HQ的性能！( 4C8T，单线程 26.4 M，多线程 135.5 M )\n\n",Mmarks/135.5*100);
	printf("上面有惊喜！\n");
	printf("=================================================================\n");
	color(4,0);
	printf("非常感谢您的使用！！\n\n");
	color(0,0);
	system("pause");
	return 0;
}