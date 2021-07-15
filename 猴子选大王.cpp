#include<stdio.h> 
#define SIZE 1000
int nextMonkeyOf[SIZE];
int main(){
	printf("请输入m个猴子和数n个\n"); 
	int length,eliminate;
	int current,previous,count =0;
	scanf("%d %d",&length,&eliminate);
	previous =length;
	current=1;
	for (int i=1;i<length;i++){
		nextMonkeyOf[i]=i+1;
	}
	nextMonkeyOf[length]=1;
	while(length>1){
	count=(count+1)%eliminate;
	if (!count){
		nextMonkeyOf[previous]=nextMonkeyOf[current];
		length--;
	}else{
		previous=current;
	}
	current=nextMonkeyOf[current];
	}
	
	printf("第""%d",current);
	printf("个猴子是大王") ;
	return 0;
}
