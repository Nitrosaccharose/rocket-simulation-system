int MainMenu() //一级菜单，返回用户选择值 
{
	int k,m; //定义k，m 其中k用来判断输入是否成功 m判断输入的值是否合法 
	while(1)
	{
		printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ＊嫦娥X系统＊                |\n"); 
		printf("        | ——————————————————————|\n"); 
		printf("        |                   主菜单                    |\n");
		printf("        | ——————————————————————|\n"); 
		printf("        |   ★     ★       ☆    ☆         ★   ☆  |\n");
		printf("        |                                             |\n");
		printf("        |       ★    1 - 查询资金声望    ☆    ★    |\n");
		printf("        | ★                                          |\n");
		printf("        |       ☆    2 - 购买火箭商店      ★        |\n");
		printf("        |                                        ☆   |\n");
		printf("        |      ★     3 - 查询仓库火箭状态            |\n");
		printf("        |  ☆                              ☆         |\n");
		printf("        |             4 - 发射火箭           ★       |\n");
		printf("        |   ★                                  ☆    |\n");
		printf("        |         ☆  5 - 退出系统       ★           |\n");
		printf("        |                                             |\n");
		printf("        |     ☆      6 - 开发者工具       ★    ★   |\n");
		printf("        |                                             |\n");
		printf("        |   ★       ★     ☆      ☆       ★     ☆|\n");
		printf("        |_____________________________________________|\n");
		printf("        请选择您需要的功能（1-6）：");
		fflush(stdin);
		k=scanf("%d",&m);
		if(m>=1 && m<=6 && k==1)
		{
			system("cls");
			break;
		}
		else
		{
			system("cls");
			printf("\n输入错误，请在1-6之间选择\n");
		}
	}
	return m; //返回输入的m的值 
}

void CreateSubMenu1(int coin,double Prestige) //二级菜单，查询资金声望界面
{
	int k,m; //定义k，m 其中k用来判断输入是否成功 m判断输入的值是否合法
	while(1)
	{
		printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ＊嫦娥X系统＊                |\n"); 
		printf("        | ——————————————————————|\n"); 
		printf("        |                查询资金声望                 |\n");
		printf("        | ——————————————————————|\n"); 
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |             1 - 查询现有资金                |\n");
		printf("        |                                             |\n");
		printf("        |               资金：********                |\n");
		printf("        |                                             |\n");
		printf("        |             2 - 查询现有声望                |\n");
		printf("        |                                             |\n");
		printf("        |               声望: ********                |\n");
		printf("        |                                             |\n");
		printf("        |             3 - 返回上一级界面              |\n");
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |_____________________________________________|\n");
		printf("        请选择您需要的功能（1-3）：");
		fflush(stdin);
		k=scanf("%d",&m);
		if(m>=1 && m<=3 && k==1)
		{
			if(m==1)
			{
				system("cls");
				while(1)
				{
				printf("\n         _____________________________________________\n");
				printf("        |                                             |\n");
				printf("        |                ＊嫦娥X系统＊                |\n"); 
				printf("        | ——————————————————————|\n"); 
				printf("        |                查询资金声望                 |\n");
				printf("        | ——————————————————————|\n"); 
				printf("        |                                             |\n");
				printf("        |                                             |\n");
				printf("        |             1 - 查询现有资金                |\n");
				printf("        |                                             |\n");
				printf("        |               资金：%-10d              |\n",coin);
				printf("        |                                             |\n");
				printf("        |             2 - 查询现有声望                |\n");
				printf("        |                                             |\n");
				printf("        |               声望: ********                |\n");
				printf("        |                                             |\n");
				printf("        |             3 - 返回上一级界面              |\n");
				printf("        |                                             |\n");
				printf("        |                                             |\n");
				printf("        |_____________________________________________|\n");
				printf("        如果需要继续查询声望请输入2，或输入3退出系统：");
				fflush(stdin);
				k=scanf("%d",&m);
				if(m==2 && k==1)
				{
					system("cls");
					printf("\n         _____________________________________________\n");
					printf("        |                                             |\n");
					printf("        |                ＊嫦娥X系统＊                |\n"); 
					printf("        | ——————————————————————|\n"); 
					printf("        |                查询资金声望                 |\n");
					printf("        | ——————————————————————|\n"); 
					printf("        |                                             |\n");
					printf("        |                                             |\n");
					printf("        |             1 - 查询现有资金                |\n");
					printf("        |                                             |\n");
					printf("        |               资金：%-10d              |\n",coin);
					printf("        |                                             |\n");
					printf("        |             2 - 查询现有声望                |\n");
					printf("        |                                             |\n");
					printf("        |               声望: %-12.2lf            |\n",Prestige);
					printf("        |                                             |\n");
					printf("        |             3 - 返回上一级界面              |\n");
					printf("        |                                             |\n");
					printf("        |                                             |\n");
					printf("        |_____________________________________________|\n");
					printf("        按回车键或输入任意键返回上一界面：");
					getchar();
					getchar();
					system("cls");
					return;
				}
				else if(m==3 && k==1)
				{
					system("cls");
					return;
				}
				else
				{
					system("cls");
					printf("\n输入错误，请重新输入!\n");
				}
				}
				
			}
			
			if(m==2)
			{
				system("cls");
				while(1)
				{
				printf("\n         _____________________________________________\n");
				printf("        |                                             |\n");
				printf("        |                ＊嫦娥X系统＊                |\n"); 
				printf("        | ——————————————————————|\n"); 
				printf("        |                查询资金声望                 |\n");
				printf("        | ——————————————————————|\n"); 
				printf("        |                                             |\n");
				printf("        |                                             |\n");
				printf("        |             1 - 查询现有资金                |\n");
				printf("        |                                             |\n");
				printf("        |               资金：********                |\n");
				printf("        |                                             |\n");
				printf("        |             2 - 查询现有声望                |\n");
				printf("        |                                             |\n");
				printf("        |               声望: %-12.2lf            |\n",Prestige);
				printf("        |                                             |\n");
				printf("        |             3 - 返回上一级界面              |\n");
				printf("        |                                             |\n");
				printf("        |                                             |\n");
				printf("        |_____________________________________________|\n");
				printf("        如果需要继续查询资金请输入1，或输入3退出系统：");
				fflush(stdin);
				k=scanf("%d",&m);
				if(m==1 && k==1)
				{
					system("cls");
					printf("\n         _____________________________________________\n");
					printf("        |                                             |\n");
					printf("        |                ＊嫦娥X系统＊                |\n"); 
					printf("        | ——————————————————————|\n"); 
					printf("        |                查询资金声望                 |\n");
					printf("        | ——————————————————————|\n"); 
					printf("        |                                             |\n");
					printf("        |                                             |\n");
					printf("        |             1 - 查询现有资金                |\n");
					printf("        |                                             |\n");
					printf("        |               资金：%-10d              |\n",coin);
					printf("        |                                             |\n");
					printf("        |             2 - 查询现有声望                |\n");
					printf("        |                                             |\n");
					printf("        |               声望: %-12.2lf            |\n",Prestige);
					printf("        |                                             |\n");
					printf("        |             3 - 返回上一级界面              |\n");
					printf("        |                                             |\n");
					printf("        |                                             |\n");
					printf("        |_____________________________________________|\n");
					printf("        按回车键或输入任意键返回上一界面：");
					getchar();
					getchar();
					system("cls");
					return;
				}
				else if(m==3 && k==1)
				{
					system("cls");
					return;
				}
				else
				{
					system("cls");
					printf("\n输入错误，请重新输入!\n");
				}
			}
			if(m==3 && k==1)
			{
				break;
			}
		}
		}
		if(m==3 && k==1)
		{
			break;
		}
		else
		{
			system("cls");
			printf("\n输入错误，请在1-3之间选择\n");
		}
	}
	system("cls");
}

int CreateSubMenu2(int coin,int Prestige) //二级菜单，购买火箭商店，返回用户选择值
{
	int k,m; //定义k，m 其中k用来判断输入是否成功 m判断输入的值是否合法 
	int Price[6]={4000,7500,800,1200,14000,2700};
	int Prestigeflag[6]={1,10,20,50,75,100};
	while(1)
	{
		printf("\n         _____________________________________________________\n");
		printf("        |                                                     |\n");
		printf("        |                    ＊嫦娥X系统＊                    |\n"); 
		printf("        | ——————————————————————————|\n"); 
		printf("        |                       火箭商店                      |\n");
		printf("        | ——————————————————————————|\n"); 
		printf("        | 商品编号 火箭类型  商品名  价格  飞行距离  声望限定 |\n");
		printf("        |                                                     |\n");
		printf("        |    1       单级    嫦娥7号 4000w   1光年      1     |\n");
		printf("        |                                                     |\n");
		printf("        |    2       单级    嫦娥8号 7500w   2光年	10    |\n");
		printf("        |                                                     |\n");
		printf("        |    3       星链    C级星   800w    0.3光年    20    |\n");
		printf("        |                                                     |\n");
		printf("        |    4       星链    B级星   1200w   0.5光年    50    |\n");
		printf("        |                                                     |\n");
		printf("        |    5       单级    嫦娥S号 14000w  3光年	75    |\n");
		printf("        |                                                     |\n");
		printf("        |    6       星链    A级星   2700w   0.75光年	100   |\n");
		printf("        |_____________________________________________________|\n");
		printf("        请选择您想购买火箭的商品编号,如果不想购买输入0:（0-6）：");
		fflush(stdin);
		k=scanf("%d",&m);
		if(m>=0 && m<=6 && k==1)
		{
			if(m==0)
			{
				system("cls");
				return 0;
			}
			else if(coin-Price[m-1]<0 && !(Prestigeflag[m-1]>Prestige)) 
			{
				printf("        您的资金不足，购买失败，按回车键或输入任意键返回上一界面。");
				getchar();
				getchar();
				m=0; 
				system("cls");
			}
			else if(!(coin-Price[m-1]<0) && Prestigeflag[m-1]>Prestige)
			{
				printf("        您的声望不足，购买失败，按回车键或输入任意键退返回上一界面。");
				getchar();
				getchar();
				m=0; 
				system("cls");
			}
			else if(coin-Price[m-1]<0 && Prestigeflag[m-1]>Prestige)
			{
				printf("        您的声望及资金均不足，购买失败，按回车键或输入任意键返回上一界面。");
				getchar();
				getchar();
				m=0; 
				system("cls");
			}
			break;
		}
		else
		{
			system("cls");
			printf("\n输入错误，请在0-6之间选择\n");
		}
	}
	return m; //返回输入的m的值 
}
int CountRocketSingle() //返回仓库文件中已有单支火箭数量
{
	struct Singlestagerocket RocketTemp;
	FILE *fp;
	int count=0;
	char type[10]="单级";
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)                                                              
	{
		return 0;
	}
	else
	{
		while(fread(&RocketTemp,ROCKETLEN,1,fp))
		{
			if(RocketTemp.IsAvailable==1 && strcmp(type,RocketTemp.Rockettype)==0)
			{
				count++;	
			}
		}
		fclose(fp);
		return count;
	}
} 

int CountRocketStar() //返回仓库文件中已有星链火箭数量
{
	struct Singlestagerocket RocketTemp;
	FILE *fp;
	int count=0;
	char type[10]="星链";
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		return 0;
	}
	else
	{
		while(fread(&RocketTemp,ROCKETLEN,1,fp))
		{
			if(RocketTemp.IsAvailable==1 && strcmp(type,RocketTemp.Rockettype)==0)
			{
				count++;	
			}
		}
		fclose(fp);
		return count;
	}
} 

int CountRocket() //返回仓库文件中已有所有类型火箭数量
{
	struct Singlestagerocket RocketTemp;
	FILE *fp;
	int count=0;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		return 0;
	}
	else
	{
		while(fread(&RocketTemp,ROCKETLEN,1,fp))
		{
			if(RocketTemp.IsAvailable==1)
			{
				count++;	
			}
		}
		fclose(fp);
		return count;
	}
} 
void ShowRocketofwarehouse() //展示仓库文件中已有所有类型火箭 
{
	struct Singlestagerocket Myrocket;
	int Rocketnum=CountRocket();
	if(Rocketnum==0)
	{
		printf("仓库内没有火箭，请前往商店购买！");
		return;
	}
	FILE *fp;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		printf("文件打开失败,请前往后台查看数据文件Warehouse.bat是否存在！");
		exit(0);
	}
	printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ＊嫦娥X系统＊                |\n"); 
		printf("        | ——————————————————————|\n"); 
		printf("        |                    仓库                     |\n");
		printf("        | ——————————————————————|\n"); 
		printf("        |  火箭类型  商品名  价格  飞行距离  商品编号 |\n");
		printf("        |                                             |\n");
		while(fread(&Myrocket,ROCKETLEN,1,fp))
		{
			if(Myrocket.IsAvailable==1)
			{
				printf("        |    %s    %-8s%-5d  %2.1f光年     %-2d    |\n",Myrocket.Rockettype,Myrocket.Tradename,Myrocket.Price,Myrocket.Distance,Myrocket.number);
				printf("        |                                             |\n");
			}
		}
		fclose(fp);
		printf("        |                                             |\n");
		printf("        |_____________________________________________|\n");
		printf("        按回车键或输入任意键返回上一界面：");
		getchar();
		getchar();
		system("cls");
}


void Rocketstorage(int i) //写入对应编号的火箭数据至仓库文件
{
	FILE *fp;
	if((fp=fopen("Warehouse.bat","ab+"))==NULL)
	{
		printf("文件打开失败,请前往后台查看数据文件Warehouse.bat是否存在！");
		exit(0);
	}
	fwrite(&Rocket[i],ROCKETLEN,1,fp);
	fclose(fp);
} 

void Launchsettlement(double *Prestige,int *Capital,double s,int Price) //结算界面

{
	double Prestige0=*Prestige;
	int sum=Incomeconversion(s,Prestige,Price,Capital);
printf("\n         _____________________________________________\n");
printf("        |                                             |\n");
printf("        |                ＊嫦娥X系统＊                |\n"); 
printf("        | ——————————————————————|\n"); 
printf("        |                 结算收益中……              |\n");
printf("        | ——————————————————————|\n"); 
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行距离：__________            |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行投入：__________            |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行收益：__________            |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |_____________________________________________|\n");
sleep(1);
system("cls");

printf("\n         _____________________________________________\n");
printf("        |                                             |\n");
printf("        |                ＊嫦娥X系统＊                |\n"); 
printf("        | ——————————————————————|\n"); 
printf("        |                 结算收益中……              |\n");
printf("        | ——————————————————————|\n"); 
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行距离：%-10.2lf            |\n",s);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行投入：__________            |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行收益：__________            |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |_____________________________________________|\n");
sleep(1);
system("cls");

printf("\n         _____________________________________________\n");
printf("        |                                             |\n");
printf("        |                ＊嫦娥X系统＊                |\n"); 
printf("        | ——————————————————————|\n"); 
printf("        |                 结算收益中……              |\n");
printf("        | ——————————————————————|\n"); 
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行距离：%-10.2lf            |\n",s);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行投入：%-10d            |\n",Price);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行收益：__________            |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |_____________________________________________|\n");
sleep(1);
system("cls");

printf("\n         _____________________________________________\n");
printf("        |                                             |\n");
printf("        |                ＊嫦娥X系统＊                |\n"); 
printf("        | ——————————————————————|\n"); 
printf("        |                 结算收益中……              |\n");
printf("        | ——————————————————————|\n"); 
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行距离：%-10.2lf            |\n",s);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行投入：%-10d            |\n",Price);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行收益：%-10d            |\n",sum);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |_____________________________________________|\n");
sleep(1);
system("cls");
printf("\n         _____________________________________________\n");
printf("        |                                             |\n");
printf("        |                ＊嫦娥X系统＊                |\n"); 
printf("        | ——————————————————————|\n"); 
printf("        |                 结算收益中……              |\n");
printf("        | ——————————————————————|\n"); 
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行距离：%-10.2lf            |\n",s);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行投入：%-10d            |\n",Price);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |         本次飞行收益：%-10d            |\n",sum);
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                             |\n");
printf("        |                                声望:+%.2lf   |\n",*Prestige-Prestige0);
printf("        |_____________________________________________|\n");
sleep(1);
printf("        按回车键或输入任意键返回上一界面\n");
getchar();
getchar();
system("cls");
}

double Percentagerandomnumber(int down,int up) //百分随机数生成函数，down和up为百分数形式的上下限，返回随机生成的百分数
{
	double x;
	struct timeb timeSeed;
	ftime(&timeSeed);
	srand(timeSeed.time*1000+timeSeed.millitm); 
	unsigned int crand = rand();
	x=down*0.01+
	(rand()%(up-down))*0.01;
	return x;
}

int Sixdigitrandomnumber() //六位随机数生成函数，返回随机生成的六位随机数
{
	int x;
	struct timeb timeSeed;
	ftime(&timeSeed);
	srand(timeSeed.time*1000+timeSeed.millitm); 
	unsigned int crand = rand();
	x=100000+rand()%899999;
	return x;
}

int Incomeconversion(double s,double *Prestige,int Price,int *Capital) //飞行距离转换收益函数，返回收益值
{
	
	if(s<=1 )
	{
		Price=Price*Percentagerandomnumber(95,105);
		*Prestige+=1;
	}
	else if(s>1  && s<=1.5 )
	{
		Price=Price*Percentagerandomnumber(95,110);
		*Prestige+=2;
	}
	else if(s>1.5  && s<=2 )
	{
		Price=Price*Percentagerandomnumber(90,115);
		*Prestige+=3;
	}
	else if(s>2  && s<=3 )
	{
		Price=Price*Percentagerandomnumber(80,120);
		*Prestige+=4;
	}
	else if(s>3  && s<=3.5 )
	{
		Price=Price*Percentagerandomnumber(70,135);
		*Prestige+=6;
	}
	else if(s>3.5  && s<=4 )
	{
		Price=Price*Percentagerandomnumber(50,155);
		*Prestige+=8;
	}
	else if(s>4)
	{
		Price=Price*Percentagerandomnumber(35,200);
		*Prestige+=10;
	}
	*Capital+=Price;
	return Price;
}

int WarehouseselectionSingle() //二级菜单，发射单支火箭展示仓库状态，并返回用户选择值
{
	struct Singlestagerocket Myrocket;
	int number;
	int Rocketnum=CountRocket();
	char type[10]={"单级"};
	if(Rocketnum==0)
	{
		return;
	}
	FILE *fp;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		printf("文件打开失败,请前往后台查看数据文件Warehouse.bat是否存在！");
		exit(0);
	}
	printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ＊嫦娥X系统＊                |\n"); 
		printf("        | ——————————————————————|\n"); 
		printf("        |                    仓库                     |\n");
		printf("        | ——————————————————————|\n"); 
		printf("        |  火箭类型  商品名  价格  飞行距离  商品编号 |\n");
		printf("        |                                             |\n");
		while(fread(&Myrocket,ROCKETLEN,1,fp))
		{
		if(Myrocket.IsAvailable==1 && strcmp(Myrocket.Rockettype,type)==0)
			{
				printf("        |    %s    %-8s%-5d  %2.1f光年     %-2d    |\n",Myrocket.Rockettype,Myrocket.Tradename,Myrocket.Price,Myrocket.Distance,Myrocket.number);
				printf("        |                                             |\n");
			}
		else
		{
			continue;
		}
		}
		fclose(fp);
		printf("        |                                             |\n");
		printf("        |_____________________________________________|\n");
		printf("        请选择您要发射的火箭编号,或者输入0返回上一级：");
		getchar();
		fflush(stdin);
		scanf("%d",&number);
		return number;
		system("cls");
}

int WarehouseselectioStar(int n[]) //二级菜单，发射星链火箭展示仓库状态，并返回用户选择值 
{
	struct Singlestagerocket Myrocket;
	int number;
	int Rocketnum=CountRocket();
	char type[10]={"星链"};
	int N[7]={-12345,-12345,-12345,-12345,-12345,-12345,-12345};
	if(Rocketnum==0)
	{
		return;
	}
	FILE *fp;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		printf("文件打开失败,请前往后台查看数据文件Warehouse.bat是否存在！");
		exit(0);
	}
	printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ＊嫦娥X系统＊                |\n"); 
		printf("        | ——————————————————————|\n"); 
		printf("        |                    仓库                     |\n");
		printf("        | ——————————————————————|\n"); 
		printf("        |  火箭类型  商品名  价格  飞行距离  商品编号 |\n");
		printf("        |                                             |\n");
		while(fread(&Myrocket,ROCKETLEN,1,fp))
		{
		if(Myrocket.IsAvailable==1 && strcmp(Myrocket.Rockettype,type)==0)
			{
				printf("        |    %s    %-8s%-5d  %2.1f光年     %-2d    |\n",Myrocket.Rockettype,Myrocket.Tradename,Myrocket.Price,Myrocket.Distance,Myrocket.number);
				printf("        |                                             |\n");
			}
		else
		{
			continue;
		}
		}
		fclose(fp);
		printf("        |                                             |\n");
		printf("        |_____________________________________________|\n");
		printf("        请选择一组火箭编号(2<n<6)以-1结束,或者输入0返回上一级：");
		getchar();
		int i;
		int flag;
		while(1)
		{
			flag=0;
			for(i=0;N[i-1]!=-1;i++)
			{
				scanf("%d",&N[i]);
				if(IsRocketExistStar(N[i])!=1 && N[i]!=-1)
				{
					flag++;
				}
				
				if(N[i]==0)
				{
					return;
				}
			}
			if( (i-1<2 || i-1>6) || flag!=0 )
			{
				printf("        输入的个数不合法或数据不存在，请重新输入:");
				fflush(stdin);
				int ii;
				for(ii=0;ii<7;ii++)
				{
					N[i]=-12345;
				}
			}
			else
			{
				break;
			}
		}
		int j;
		int h=0;
		for(j=0;j<i-1;j++)
		{
		
			n[h]=N[j];
			h++;
		}
		system("cls");
		return h;
		
}

int IsRocketExistSingle (int Rocketnumer) //查询指定编号的单支火箭在文件是否存在，若存在返回1，否则返回0 
{
	int IsExist=0;
	char type[10]={"单级"};
	FILE* fp;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		printf("文件打开失败,请前往后台查看数据文件Warehouse.bat是否存在！");
		exit(0);
	}
	struct Singlestagerocket Myrocket;
	while(fread(&Myrocket,ROCKETLEN,1,fp))
	{
		if(Myrocket.number==Rocketnumer && strcmp(Myrocket.Rockettype,type)==0)
		{
			IsExist=1;		
			break;
		}
 	}
 	fclose(fp);
 	return IsExist;
}

int IsRocketExistStar (int Rocketnumer) //查询指定编号的星链火箭在文件是否存在，若存在返回1，否则返回0 

{
	int IsExist=0;
	char type[10]={"星链"};
	FILE* fp;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		printf("文件打开失败,请前往后台查看数据文件Warehouse.bat是否存在！");
		exit(0);
	}
	struct Singlestagerocket Myrocket;
	while(fread(&Myrocket,ROCKETLEN,1,fp))
	{
		if(Myrocket.number==Rocketnumer && strcmp(Myrocket.Rockettype,type)==0)
		{
			IsExist=1;		
			break;
		}
 	}
 	fclose(fp);
 	return IsExist;
}

int GetRocketstoragelocation(int number) //查询指定编号的火箭,返回其存放的位置
{
	int count=0;
	FILE *fp;
	struct Singlestagerocket Myrocket;
	if((fp=fopen("Warehouse.bat","rb"))==NULL)
	{
		printf("文件打开失败,请前往后台查看数据文件Warehouse.bat是否存在！");
		exit(0);
	}
	rewind(fp);
	while(fread(&Myrocket,ROCKETLEN,1,fp))
	{
		if(Myrocket.IsAvailable==0)
		{
			count++;
			
			continue;
		}
		if(Myrocket.number==number)
		{
			break;
		}
		
		count++;
 	}
 	fclose(fp);
 	return count;
}

void DelRocket(int n) //删除指定位置的火箭 
{
	FILE *fp;
	if((fp=fopen("Warehouse.bat","rb+"))==NULL)
	{
		printf("文件打开失败,请前往后台查看数据文件Warehouse.bat是否存在！");
		exit(0);
	}
	struct Singlestagerocket Myrocket;
	int RocketPosition=n;
	Myrocket.IsAvailable=0;
	fseek(fp,(long)ROCKETLEN*RocketPosition,SEEK_SET);
	fwrite(&Myrocket,ROCKETLEN,1,fp);
	fclose(fp);
}

int Initializationdetection() //初始化检测 ，若已初始化返回1，否则返回0
{
	struct Companydata Mydata;
	FILE *fp;
	int count=0;
	if((fp=fopen("Basicdata.bat","rb"))==NULL)
	{
		fclose(fp);
		return 0;
	}
	else
	{
		fclose(fp);
		return 1;
	}
} 

void Initializationdata() //初始化基础数据文件
{
	//struct Companydata Mydata;
	FILE *fp;
	fp=fopen("Basicdata.bat","wb+");
	fwrite(&Inidata,DATALEN,1,fp);
	fclose(fp);
}

void Emptywarehouse() //初始化仓库文件
{
	//struct Companydata Mydata;
	FILE *fp;
	fp=fopen("Warehouse.bat","wb+");
	fclose(fp);
}

void Savebasicdata(int Capital,double Prestige,int Animation) //保存当前基础数据至基础数据文件
{
	struct Companydata Mydata;
	FILE *fp;
	//Mydata.flag=1;
	Mydata.Capital=Capital;
	Mydata.Prestige=Prestige;
	Mydata.Animation=Animation;
	fp=fopen("Basicdata.bat","wb+");
	fwrite(&Mydata,DATALEN,1,fp);
	fclose(fp);
}

int FindCapital() //返回基础数据文件的资金值 
{
	struct Companydata Mydata;
	FILE *fp;
	fp=fopen("Basicdata.bat","rb+");
	fread(&Mydata,ROCKETLEN,1,fp);
	return Mydata.Capital;
}

int FindPrestige() //返回基础数据文件的声望值 
{
	struct Companydata Mydata;
	FILE *fp;
	fp=fopen("Basicdata.bat","rb+");
	fread(&Mydata,ROCKETLEN,1,fp);
	return Mydata.Prestige;
}

int FindAnimation() //返回基础数据文件的动画开关值，若开返回1，否则返回0
{
	struct Companydata Mydata;
	FILE *fp;
	fp=fopen("Basicdata.bat","rb+");
	fread(&Mydata,DATALEN,1,fp);
	return Mydata.Animation;
}

int InsMenu() //二级菜单，设置菜单，返回用户选择值 
{
	int k,m; //定义k，m 其中k用来判断输入是否成功 m判断输入的值是否合法 
	while(1)
	{
		printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ＊嫦娥X系统＊                |\n"); 
		printf("        | ——————————————————————|\n"); 
		printf("        |                 开发者工具                  |\n");
		printf("        | ——————————————————————|\n"); 
		printf("        |   ★     ★       ☆    ☆         ★   ☆  |\n");
		printf("        |                                             |\n");
		printf("        |       ★    1 - 修改基础数据    ☆    ★    |\n");
		printf("        | ★                                          |\n");
		printf("        |       ☆    2 - 清空仓库数据      ★        |\n");
		printf("        |                                             |\n");
		printf("        |      ★     3 - 全部初始化                  |\n");
		printf("        |                                             |\n");
		printf("        |             4 - 动画设置           ★       |\n");
		printf("        |                                             |\n");
		printf("        |         ☆  5 - 敬请期待       ★           |\n");
		printf("        |                                             |\n");
		printf("        |     ☆      0 - 返回上一级界面     ★       |\n");
		printf("        |                                             |\n");
		printf("        |   ★       ★     ☆      ☆       ★     ☆|\n");
		printf("        |_____________________________________________|\n");
		printf("        请选择您需要的功能（0-4）：");
		fflush(stdin);
		k=scanf("%d",&m);
		if(m>=0 && m<=4 && k==1)
		{
			system("cls");
			break;
		}
		else
		{
			system("cls");
			printf("\n输入错误，请在1-4之间选择\n");
		}
	}
	return m; //返回输入的m的值 
}

int LaunchCSnMenu() //二级菜单，发射类别选择菜单，返回用户选择值
{
	int k,m; //定义k，m 其中k用来判断输入是否成功 m判断输入的值是否合法 
	while(1)
	{
		printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ＊嫦娥X系统＊                |\n"); 
		printf("        | ——————————————————————|\n"); 
		printf("        |                   设  置                    |\n");
		printf("        | ——————————————————————|\n"); 
		printf("        |   ★     ★       ☆    ☆         ★   ☆  |\n");
		printf("        |                                             |\n");
		printf("        |       ★    1 - 发射单支火箭    ☆    ★    |\n");
		printf("        | ★                                          |\n");
		printf("        |       ☆                          ★        |\n");
		printf("        |                                             |\n");
		printf("        |      ★     2 - 发射星链火箭                |\n");
		printf("        |                                             |\n");
		printf("        |                                    ★       |\n");
		printf("        |                                             |\n");
		printf("        |         ☆  0 - 返回上一级界面        ★    |\n");
		printf("        |                                             |\n");
		printf("        |     ☆                             ★       |\n");
		printf("        |                                             |\n");
		printf("        |   ★       ★     ☆      ☆       ★     ☆|\n");
		printf("        |_____________________________________________|\n");
		printf("        请选择您需要的功能（0-2）：");
		fflush(stdin);
		k=scanf("%d",&m);
		if(m>=0 && m<=2 && k==1)
		{
			system("cls");
			break;
		}
		else
		{
			system("cls");
			printf("\n输入错误，请在0-2之间选择\n");
		}
	}
	return m; //返回输入的m的值 
}

void ReviseCandP(int *Capital,double *Prestige) //自定义修改基础数据文件的资金或声望
{
	int k,m; //定义k，m 其中k用来判断输入是否成功 m判断输入的值是否合法 
	while(1)
	{
		printf("\n         _____________________________________________\n");
		printf("        |                                             |\n");
		printf("        |                ＊嫦娥X系统＊                |\n"); 
		printf("        | ——————————————————————|\n"); 
		printf("        |                修改资金声望                 |\n");
		printf("        | ——————————————————————|\n"); 
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |             1 - 修改资金                    |\n");
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |             2 - 修改声望                    |\n");
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |             3 - 返回上一级界面              |\n");
		printf("        |                                             |\n");
		printf("        |                                             |\n");
		printf("        |_____________________________________________|\n");
		printf("        请选择您需要的功能（1-3）：");
		fflush(stdin);
		k=scanf("%d",&m);
		if(m>=1 && m<=3 && k==1)
		{
			system("cls");
			break;
		}
		else
		{
			system("cls");
			printf("\n输入错误，请在1-3之间选择\n");
		}
	}	
	
	if(m==1)
	{
		int C;
		while(1)
		{
			printf("        输入你想更改的资金数(0<资金数<999999999)：");
			fflush(stdin);
			int k=scanf("%d",&C);
			if(C<=0 || k!=1 || C>=999999999)
			{
				system("cls");
				printf("        你的输入有误，再输入一次：\n");
			}
			else
			{
				printf("        修改成功！金额由原来的%dw变成了%dw\n",*Capital,C);
				printf("        按回车键或输入任意键返回菜单");
				getchar();
				getchar();
				system("cls");
				break;
			}
		}
		*Capital=C;
	}
	else if(m==2)
	{
		double P;
		while(1)
		{
			printf("        输入你想更改的声望(1<=声望数<999999999)：");
			fflush(stdin);
			int k=scanf("%lf",&P);
			if(P<1 || k!=1 || P>=999999999)
			{
				system("cls");
				printf("        你的输入有误，再输入一次：\n");
			}
			else
			{
				printf("        修改成功！声望由原来的%.2lf变成了%.2lf\n",*Prestige,P);
				printf("        按回车键或输入任意键返回菜单");
				getchar();
				getchar();
				system("cls");
				break;
			}
		}
		*Prestige=P;
	}
}
