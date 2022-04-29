#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#include "head.h"
#include "func.h"
#include "Animation.h"
int main (void)
{
	int r;
	struct Companydata Cydata;
	if(Initializationdetection()==0)
	{
		Initializeanimation();
		Initializationdata();
		Emptywarehouse();
	}
	Cydata.Capital=FindCapital();
	Cydata.Prestige=FindPrestige();
	Cydata.Animation=FindAnimation();
	while(1)
	{
		int k=MainMenu();
		if(k==1)
		{
			CreateSubMenu1(Cydata.Capital,Cydata.Prestige);
		}
		else if(k==2) 
		{
			r=CreateSubMenu2(Cydata.Capital,Cydata.Prestige);
			if(r>=1 && r<=6)
			{
				printf("        购买成功！按回车键或输入任意键返回上一界面。");
				getchar();
				getchar();
				system("cls");				
				Rocketstorage(r-1);
				Cydata.Capital-=Rocket[r-1].Price;	
				Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
			}
		}
		else if(k==3) 
		{
			ShowRocketofwarehouse();
		}
		else if(k==4)
		{
			int v=LaunchCSnMenu();
			int f=0;
			
			if(v==1)
			{
				while(1)
				{
					if(CountRocketSingle()==0)
					{

						system("cls");
						printf("仓库内没有单支火箭，请前往商店购买！按任意键退出");
						getchar();
						getchar();
						system("cls");
						break;
					}	
					f=WarehouseselectionSingle();
				
					if(IsRocketExistSingle(f)==1 || f==0 )
					{
						break;
					}
					else
					{
						system("cls");
						printf("输入的商品编号不存在,请重新输入:");
					}
				}
				if(f==0)
				{
					system("cls");
					continue;
				}
				int t=GetRocketstoragelocation(f);
				Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
				DelRocket(t);
				system("cls");
				Rocketanimation(Cydata.Animation);
				Launchsettlement(&Cydata.Prestige,&Cydata.Capital,Rocket[f-1].Distance,Rocket[f-1].Price);	
				Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
			}
			else if(v==2)
			{
				int NN[6]={0};
				while(1)
				{
					if(CountRocketStar()==0)
					{

						system("cls");
						printf("仓库内没有星链火箭，请前往商店购买！按任意键退出");
						getchar();
						getchar();
						system("cls");
						break;
					}	
					double RocketDistance=0;
					int RocketPrice=0;
					int k=WarehouseselectioStar(NN);
					int j;
					if(NN[0]==0)
					{
						system("cls");
						break;
					}
					for(j=0;j<k;j++)
					{
						RocketDistance+=Rocket[NN[j]-1].Distance;
						RocketPrice+=Rocket[NN[j]-1].Price;
						DelRocket(GetRocketstoragelocation(NN[j]));
					}
					system("cls");
					Rocketanimation(Cydata.Animation);
					Launchsettlement(&Cydata.Prestige,&Cydata.Capital,RocketDistance,RocketPrice);	
					Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
					system("cls");
					break;
				}
			}
			else if(v==0)
			{
				system("cls");
				continue;
			}
			
		
		}
		else if(k==5)
		{
			Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
			system("cls");
			break;
		}
		else if(k==6)
		{
			while(1)
			{
				int w=InsMenu();
				if(w==0)
				{
					break;
				}
				else if(w==1)
				{
					ReviseCandP(&Cydata.Capital,&Cydata.Prestige);	
				}
				else if(w==2)
				{
					int a;
					system("cls");
					printf("        您确定要清空仓库吗？输入1来确认这个操作，否则输入任意键返回上一级:");
					scanf("%d",&a);
					if(a==1)
					{
						Emptywarehouse();
						printf("        清空仓库成功！\n");
						printf("        按回车键或输入任意键返回菜单");
						getchar();
						getchar();
						system("cls");
					}
					else
					{
						printf("        取消成功！");
						printf("        按回车键或输入任意键返回菜单");
						getchar();
						getchar();
						system("cls");
					}
					
				}
				else if(w==3)
				{
					int a;
					int VerificationCode=Sixdigitrandomnumber();
					system("cls");
					printf("                             验证码:%-6d\n",VerificationCode);
					printf("        您确定要初始化吗？请输入完整的验证码来确认这个操作，否则输入任意键返回上一级:");
					scanf("%d",&a);
					if(a==VerificationCode)
					{
						InitializeanimationAgain();
						Initializationdata();
						Emptywarehouse();
						printf("        初始化成功！\n");
						printf("        按回车键或输入任意键返回菜单");
						Cydata.Capital=FindCapital();
						Cydata.Prestige=FindPrestige();
						Cydata.Animation=FindAnimation();
						getchar();
						getchar();
						system("cls");
						break;
					}
					else
					{
							printf("        取消成功！\n");
							printf("        按回车键或输入任意键返回菜单");
							getchar();
							getchar();
							system("cls");
					}
				}
				else if(w==4)
				{
					int a;
					system("cls");
					if(Cydata.Animation==1)
					{
						printf("        动画开关的状态目前是开，如果需要关闭动画请输入0，否则输入任意键返回上一级:");
						scanf("%d",&a);
						if(a==0)
						{
							
							Cydata.Animation=0;
							Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
							printf("        关闭动画成功！\n");
							printf("        按回车键或输入任意键返回菜单");
							getchar();
							getchar();
							system("cls");
						}
						else
						{
							printf("        取消成功！\n");
							printf("        按回车键或输入任意键返回菜单");
							getchar();
							getchar();
							system("cls");
						}
					}
					else
					{
						printf("        动画开关的状态目前是关，如果需要打开动画请输入1，否则输入任意键返回上一级:");
						scanf("%d",&a);
						if(a==1)
						{
							
							Cydata.Animation=1;
							Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
							printf("        打开动画成功！\n");
							printf("        按回车键或输入任意键返回菜单");
							getchar();
							getchar();
							system("cls");
						}
						else
						{
							printf("        取消成功！\n");
							printf("        按回车键或输入任意键返回菜单");
							getchar();
							getchar();
							system("cls");
						}
					}
					
				}
				else if(w==5)
				{
				
				}
			}
			
		}
	} 
	Savebasicdata(Cydata.Capital,Cydata.Prestige,Cydata.Animation);
	return 0;
	
}
