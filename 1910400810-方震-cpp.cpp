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
	printf("\t����������: \n");
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
	printf("\t�������ݣ�m�ĳ�ֵΪ20��n=7 ,7���˵���������Ϊ3��1��7��2��4��7��4 \n");
	printf("\t����m=6,����ȷ�������ʲô��\n");
	printf("\t������ m ��n: \n");
	cin >> m >> n;
	CreatLinkListFunction(n);  
	EnterPassword(n);       
	printf("\t���ӵ���������:\n");
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
	cout<<"\t���Ϊ1-52���ƣ��������ϣ��ӵ�2�ſ�ʼ����2Ϊ��������2�ı������Ʒ�һ�Σ�ֱ�����һ���ƣ�Ȼ�󣬴ӵ�3�ſ�ʼ����3Ϊ��������3�ı������Ʒ�һ�Σ�ֱ�����һ���ƣ�Ȼ�󡭴ӵ�4�ſ�ʼ����4Ϊ��������4�ı������Ʒ�һ�Σ� ֱ�����һ���ƣ�...������5�ı������Ʒ�һ�Σ�6�ģ�7��ֱ����52Ϊ�����ķ���"<<endl;
    cout<<"\t�������ʱ�������ϵ�������Щ��"<<endl;
	Card car[52];
    int i; 
    for(i=0;i<52;i++)
	{
	    car[i].number=i+1; 
		car[i].side=1; 
	}
	PaperCards(car);
	cout<<"\t�������ϵ����У�"; 
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
	printf("\t������m�����Ӻ���n��\n"); 
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
	
	printf("\t��""%d",current);
	printf("�������Ǵ���\n") ;
}
int main()
{
	printf("\t==============================���˵�============================\n"); 
	printf("\t==============================1.josep��=========================\n"); 
	printf("\t==============================2.����ѡ����======================\n");
	printf("\t==============================3.ֽ����Ϸ========================\n");
	printf("\t��ѡ�����г���:\n"); 
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
		printf("�������"); 
		system("pause");
	} 
	return 0;
	
}
