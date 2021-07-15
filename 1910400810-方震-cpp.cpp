#include<stdio.h>
#include<iostream>
#include<malloc.h>
#define SIZE 1000
using namespace std;
typedef struct LNode         
{
	int number, password;    
	struct LNode *next;
}SLX;
struct LNode *head, *p, *pt;   

int CreatLinkListFunction(int n)      
{
	int i;
	head = (struct LNode*)malloc(sizeof(SLX));   
	p = head;
	for (i = 1; i < n; i++)
	{
		pt = (struct LNode*)malloc(sizeof(SLX));
		p->next = pt;
		p = pt;
	}
	p->next = head; 
	pt = head;
	return 0;
}


int EnterPassword(int n)       
{
	int i, k;
	printf("\t请输入密码: \n");
	for (i = 1; i <= n; i++)
	{
		cin >> k;
		pt->number = i;        
		pt->password = k;         
		pt = pt->next;

	}
	pt = p;
	return 0;
}


int OutListFunction(int m, int n)    
{
	int i, a;
	for (i = 1; i <= n; i++)         
	{
		for (a = 1; a < m; a++)      
		{
			pt = pt->next;
		}
		p = pt->next;
		m = p->password;
		printf("%d ", p->number);    
		pt->next = p->next;
		free(p);                   
	}
	return 0;
}
void josep()
{
		int m, n;   
	printf("\t测试数据：m的初值为20，n=7 ,7个人的密码依次为3，1，7，2，4，7，4 \n");
	printf("\t首先m=6,则正确的输出是什么？\n");
	printf("\t请输入 m 和n: \n");
	cin >> m >> n;
	CreatLinkListFunction(n);  
	EnterPassword(n);       
	printf("\t出队的人依次是:\n");
	OutListFunction(m, n);      
}
struct Card
{
    int number;
	int side;
};

void PaperCards(Card car[])
{
    int base=2,i;
    for(base=2;base<=52;base++)
	    for(i=base-1;i<52;i++)
		    if(car[i].number%base==0)
		    {
		        if(car[i].side==1) car[i].side=2;
		    	else car[i].side=1; 
	    	}
}

void zpyx()
{	
	cout<<"\t编号为1-52张牌，正面向上，从第2张开始，以2为基数，是2的倍数的牌翻一次，直到最后一张牌；然后，从第3张开始，以3为基数，是3的倍数的牌翻一次，直到最后一张牌；然后…从第4张开始，以4为基数，是4的倍数的牌翻一次， 直到最后一张牌；...再依次5的倍数的牌翻一次，6的，7的直到以52为基数的翻过"<<endl;
    cout<<"\t输出：这时正面向上的牌有哪些？"<<endl;
	Card car[52];
    int i; 
    for(i=0;i<52;i++)
	{
	    car[i].number=i+1; 
		car[i].side=1; 
	}
	PaperCards(car);
	cout<<"\t正面向上的牌有："; 
	for(i=0;i<52;i++)
	{
	    if(car[i].side==1)
		    cout<<car[i].number<<" "; 
	}
	cout<<endl; 
}

int nextMonkeyOf[SIZE];
void hzxdw()
{
	printf("\t请输入m个猴子和数n个\n"); 
	int length,eliminate;
	int current,previous,count =0;
	scanf("%d %d",&length,&eliminate);
	previous =length;
	current=1;
	for (int i=1;i<length;i++){
		nextMonkeyOf[i]=i+1;
	}
	nextMonkeyOf[length]=1;
	while(length>1)
	{
	count=(count+1)%eliminate;
	if (!count){
		nextMonkeyOf[previous]=nextMonkeyOf[current];
		length--;
	}else{
		previous=current;
	}
	current=nextMonkeyOf[current];
	}
	
	printf("\t第""%d",current);
	printf("个猴子是大王\n") ;
}
int main()
{
	printf("\t==============================主菜单============================\n"); 
	printf("\t==============================1.josep环=========================\n"); 
	printf("\t==============================2.猴子选大王======================\n");
	printf("\t==============================3.纸牌游戏========================\n");
	printf("\t请选择运行程序:\n"); 
	int y;
	cin>>y;
	if (y==1)
	while(1)
	{
		josep();
		system("pause");
		return 0;
		
	}
	else if(y==2)
	{
	while(1)
		{
			
			hzxdw();
			system("pause");
			return 0;
		}
	}
	else if(y==3)
	{
		while(1)
		{
			zpyx();
			system("pause");
			return 0;
		}
	}
	else 
	{
		printf("输入错误！"); 
		system("pause");
	} 
	return 0;
	
}
