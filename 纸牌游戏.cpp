#include<iostream> 
using namespace std;

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

int main()
{
    Card car[52];
    int i; 
    for(i=0;i<52;i++)
	{
	    car[i].number=i+1; 
		car[i].side=1; 
	}
	PaperCards(car);
	cout<<"正面向上的牌有："; 
	for(i=0;i<52;i++)
	{
	    if(car[i].side==1)
		    cout<<car[i].number<<" "; 
	}
	cout<<endl; 
	return 0; 
}

