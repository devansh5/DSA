#include<iostream>
#include<math.h>
using namespace std;

class gfg{
	public: void printpowerset(char *set,int set_size)
	{
		unsigned int pow_set_size=pow(2,set_size);
		
		for(int counter=0;counter<pow_set_size;counter++)
		{
		for(int j=0;j<set_size;j++)
		{
				
				
			if(counter && (1<<j))
				cout<<set[j];
		}
		cout<<endl;
		}
	}

};

int main()
{
	gfg g;
	char set[]={'a','b','c'};	
	g.printpowerset(set,3);		
	return 0;
}
