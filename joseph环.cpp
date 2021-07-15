#include<stdio.h>
#include<iostream>
#include<malloc.h>
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
	printf("\n请输入密码: \n");
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

int main()
{
	int m, n;   
	printf("测试数据：m的初值为20，n=7 ,7个人的密码依次为3，1，7，2，4，7，4 \n");
	printf("首先m=6,则正确的输出是什么？\n");
	printf("\n请输入 m 和n: \n");
	cin >> m >> n;
	CreatLinkListFunction(n);  
	EnterPassword(n);       
	printf("\n出队的人依次是:\n");
	OutListFunction(m, n);      
	return 0;
}
