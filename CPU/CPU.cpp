#include <stdio.h>
#include <time.h>  //����Ҫ�õ�clock����
#include <windows.h>
#include <omp.h>  //��Ҫ�� #pragma omp parallel for �����ж��̲߳��м���
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
	/*��ɫ��Ӧֵ�� 
	0=��ɫ                8=��ɫ����
	1=��ɫ                9=����ɫ                ����                        
	2=��ɫ                10=����ɫ       0xa        ����
	3=����ɫ				  11=��ǳ��ɫ        0xb��
	4=��ɫ                12=����ɫ        0xc����
	5=��ɫ                13=����ɫ        0xd        ����
	6=��ɫ                14=����ɫ        0xe        ����
	7=��ɫ                15=����ɫ        0xf 
	Ҳ���԰���Щֵ���óɳ�����
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
void boot(int bt)//��ʾͼ��
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
	printf("|***************** CPU������������ V3.0 *****************|\n  \n");
	printf("\n");
	printf("                                        @@@@         \n");
	printf("                                        ####         \n");
	printf("              @                         @@@@         \n");
	printf("             @@                         ####         \n");
	printf("            @@@@@@@###@@@###@@@###@@@###@@@@         \n");
	printf("--> ����   @@@@@@@@@###@@@###@@@###@@@###@@@   ��ʼ���ԣ���\n");
	printf("\n");
	getchar();

	color(3,0);
	printf("--> ���ڲ��Զ��̼߳���������\n\n");
	printf("[ ��������һ�仨���һ�������ҽ���ˮ����ģ�����ʱ��ɢ����ζ�� ]\n");
	
	#pragma omp parallel for//��CPU����׼��
	for (long long i = 1; i <= 100000000; i++)
	{
		double sum=0;
		sum += i;
	}

	//���̲߳���
	double begin = clock();//ʱ���ʱ��ʼ
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
			printf("[ ��������û���κζ����ɼӣ�����û���κζ����ɼ��� ]\n\n");
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
	double end = clock();//ʱ���ʱ����

	double Mtime = (end-begin)/1000;
	double Mmarks = 1888/Mtime;
	
	//���̼߳��㷽ʽ�Ͷ��߳�Ӧ��һ��
	printf("--> ���ڲ��Ե��̼߳���������\n\n");
	printf("[ ��˭˵��������һ����һ�����ŵ����ֻ�һ����������������أ� ]\n");
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
			printf("[ ����Ϊ��һ����Ĭ�Ļ�һƬС��Ц�������Ƕ�����������������������ߣ� ]\n");
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
	printf("\n��ϲ������˳����ɲ��ԣ�\n\n");
	color(5,0);
	if (Mmarks < 30)
	{
		boot(1);
		color(3,0);
		printf("��ѽ�����CPU�ǹŶ����İɣ���ô�������Ҳ���ã���϶����ڶ��ң�\n\n");
		color(5,0);
		printf("[  < 30  ] ");
		color(8,1);
		printf("(30 ~ 50 )( 50 ~ 90 )( 90 ~ 130 )( 130 ~ 200 )( > 200 )\n");
		color(5,0);
		printf(" ��ĵ÷� \n\n");
	}
	else if (Mmarks >= 30 && Mmarks < 50)
	{
		boot(2);
		color(3,0);
		printf("��...���CPU��Ͷ���ô���ˣ�Ҳ������Զ�볾�����úõ����������ˣ�\n\n");
		color(8,1);
		printf("( < 30 ) ");
		color(5,0);
		printf("[ 30 ~ 50 ] ");
		color(8,1);
		printf("( 50 ~ 90 )( 90 ~ 130 )( 130 ~ 200 )( > 200 )\n");
		color(5,0);
		printf("           ��ĵ÷� \n\n");
	}
	else if (Mmarks >= 50 && Mmarks < 90)
	{
		boot(3);
		color(3,0);
		printf("���ԣ����CPU�������˳���֮ʱ�������ʱ�������������ȫû���⣡\n\n");
		color(8,1);
		printf("( < 30 )( 30 ~ 50 ) ");
		color(5,0);
		printf("[ 50 ~ 90 ] ");
		color(8,1);
		printf("( 90 ~ 130 )( 130 ~ 200 )( > 200 )\n");
		color(5,0);
		printf("                      ��ĵ÷� \n\n");
	}
	else if (Mmarks >= 90 && Mmarks < 130)
	{
		boot(4);
		color(3,0);
		printf("�ۣ����CPU�������İɣ�������ô�����ò������춼�����������ɣ�\n\n");
		color(8,1);
		printf("( < 30 )( 30 ~ 50 )( 50 ~ 90 ) ");
		color(5,0);
		printf("[ 90 ~ 130 ] ");
		color(8,1);
		printf("( 130 ~ 200 )( > 200 )\n");
		color(5,0);
		printf("                                 ��ĵ÷�  \n\n");
	}
	else if (Mmarks >= 130 && Mmarks < 200)
	{
		boot(5);
		color(3,0);
		printf("��Ӵ����Ŷ�����CPUһ���糾���Ṧ����˵ã���������Ƕ�����ܰɣ�\n\n");
		color(8,1);
		printf("( < 30 )( 30 ~ 50 )( 50 ~ 90 )( 90 ~ 130 ) ");
		color(5,0);
		printf("[ 130 ~ 200 ] ");
		color(8,1);
		printf("( > 200 )\n");
		color(5,0);
		printf("                                              ��ĵ÷�  \n\n");
	}
	else
	{
		boot(6);
		color(3,0);
		printf("һ��������....�Բۣ�������CPU�����������İɣ��޵��Ƕ�ô��ô��į~~\n\n");
		color(8,1);
		printf("( < 30 )( 30 ~ 50 )( 50 ~ 90 )( 90 ~ 130 )( 130 ~ 200 ) ");
		color(5,0);
		printf("[  > 200  ]\n");
		printf("                                                          ��ĵ÷� \n\n");
	}
	color(0,0);
	printf("===========================  ��ϸ��Ϣ  ===========================\n\n");
	printf(" < ����CPU���߳���ʱΪ %3.3f s > ",Stime);//������е�ʱ��������λ�ɺ���ת��Ϊ��
	printf(" < ���̵߳÷�Ϊ %.2f Marks >\n\n",Smarks);
	printf(" < ����CPU���߳���ʱΪ %3.3f s > ",Mtime);//������е�ʱ��������λ�ɺ���ת��Ϊ��
	printf(" < ���̵߳÷�Ϊ %.2f Marks >\n\n",Mmarks);
	printf(" < ����CPU�߳�����Ϊ %d T > ",omp_get_num_procs());
	printf(" < �߳�Ч�ʱ�Ϊ %3.2f X >\n\n",Stime/Mtime);
	

	printf("��ο����ݵĶԱȣ�\n");
	printf("-> %.1f%% ����G4400�����ܣ�( 2C2T�����߳� 25.5 M�����߳� 52 M )\n",Mmarks/52*100);
	printf("-> %.1f%% I7-6500U�����ܣ�( 2C4T�����߳� 23.3 M�����߳� 59.9 M )\n",Mmarks/59.9*100);
	printf("-> %.1f%% I5-6300HQ�����ܣ�( 4C4T�����߳� 24.5 M�����߳� 84.4 M )\n",Mmarks/84.4*100);
	printf("-> %.1f%% I5-6500�����ܣ�( 4C4T�����߳� 27.4 M�����߳� 101.3 M )\n",Mmarks/101.3*100);
	printf("-> %.1f%% I7-6700HQ�����ܣ�( 4C8T�����߳� 26.4 M�����߳� 135.5 M )\n\n",Mmarks/135.5*100);
	printf("�����о�ϲ��\n");
	printf("=================================================================\n");
	color(4,0);
	printf("�ǳ���л����ʹ�ã���\n\n");
	color(0,0);
	system("pause");
	return 0;
}