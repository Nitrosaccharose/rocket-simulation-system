//宏定义 

#define ROCKETLEN sizeof(struct Singlestagerocket)
#define DATALEN sizeof(struct Companydata)

//函数声明 

int MainMenu(); //一级菜单，返回用户选择值
void CreateSubMenu1(int coin,double Prestige); //二级菜单，查询资金声望界面
int CreateSubMenu2(int coin,int Prestige); //二级菜单，购买火箭商店，返回用户选择值
int CountRocketSingle() ; //返回仓库文件中已有单支火箭数量
int CountRocketStar(); //返回仓库文件中已有星链火箭数量
int CountRocket(); //返回仓库文件中已有所有类型火箭数量
void ShowRocketofwarehouse(); //展示仓库文件中已有所有类型火箭 
void Rocketstorage(int i); //写入对应编号的火箭数据至仓库文件
void Launchsettlement(double *Prestige,int *Capital,double s,int Price); //结算界面,并写入新的资金声望值至基础数据文件
double Percentagerandomnumber(int down,int up); //百分随机数生成函数，down和up为百分数形式的上下限，返回随机生成的百分数
int Sixdigitrandomnumber() ; //六位随机数生成函数，返回随机生成的六位随机数
int Incomeconversion(double s,double *Prestige,int Price,int *Capital) ; //飞行距离转换收益函数，返回收益值
int WarehouseselectionSingle(); //二级菜单，发射单支火箭展示仓库状态，并返回用户选择值
int WarehouseselectioStar(int n[]) ; //二级菜单，发射星链火箭展示仓库状态，并返回用户选择值
int IsRocketExistSingle (int Rocketnumer); //查询指定编号的单支火箭在文件是否存在，若存在返回1，否则返回0 
int IsRocketExistStar (int Rocketnumer); //查询指定编号的星链火箭在文件是否存在，若存在返回1，否则返回0 
int GetRocketstoragelocation(int number); //查询指定编号的火箭,返回其存放的位置
void DelRocket(int n) ; //删除指定位置的火箭 
int Initializationdetection() ; //初始化检测 ，若已初始化返回1，否则返回0
void Initializationdata(); //初始化基础数据文件
void Emptywarehouse(); //初始化仓库文件
void Savebasicdata(int Capital,double Prestige,int Animation) ; //保存当前基础数据至基础数据文件
int FindCapital(); //返回基础数据文件的资金值 
int FindPrestige(); //返回基础数据文件的声望值 
int FindAnimation(); //返回基础数据文件的动画开关值，若开返回1，否则返回0
int InsMenu(); //二级菜单，设置菜单，返回用户选择值 
int LaunchCSnMenu(); //二级菜单，发射类别选择菜单，返回用户选择值
void ReviseCandP(int *Capital,double *Prestige); //自定义修改基础数据文件的资金或声望
void Rocketanimation(int x); //火箭动画播放函数
void Initializeanimation(); //第一次初始化播放函数
void InitializeanimationAgain(); //第二次初始化播放函数

//结构体定义 

struct Companydata //基础数据 
{
	int flag; //初始化标志，1为已初始化，0为未初始化 
	int Capital;  //公司资金 
	double Prestige;  //公司声望
	int Animation; //动画开关  
}Inidata={1,10000,1.000,1};

struct Singlestagerocket //火箭
{
	char Rockettype[10];   //火箭类型 
	char Tradename[10];   //商品名 
	int Price;  //购买价格 
	double Distance;  //飞行距离 
	int number; //商品编号 
	int IsAvailable; //有效状态 1为有效 0为无效 
}Rocket[6]={
				{"单级","嫦娥7号",4000,1.00,1,1},
				{"单级","嫦娥8号",7500,2.00,2,1},
				{"星链","C级星",800,0.300,3,1},
				{"星链","B级星",1200,0.500,4,1},
				{"单级","嫦娥S号",14000,3.00,5,1},
				{"星链","A级星",2700,0.75,6,1}
		   };



