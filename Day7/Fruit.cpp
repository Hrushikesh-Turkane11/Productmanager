#include<iostream>
#include<typeinfo>
using namespace std;

class Fruit
{
	public:
		virtual void taste()=0;
		
};
class Mango:public Fruit
{
public:
	
	void taste()
	{
		cout<<"Mango is sweet"<<endl;
	}
	void pulp()
	{
		cout<<"Pulp from mango"<<endl;
	}	
};

class Orange:public Fruit
{
	public:
		void taste()
		{
			cout<<"Orange is Sweet and sour"<<endl;
		}
		
		void juice()
		{
			cout<<"Juice from orange"<<endl;
		}
};

class Apple:public Fruit
{
	public:
		void taste()
		{
			cout<<"Apple is Sweet"<<endl;
		}
		
		void jam()
		{
			cout<<"Jam from Apple"<<endl;
		}
};

int main3()
{
	Fruit*Basket[10];
	int i=0,ch;
	do
	{
	cout<<"1.Add mango  2.add orange  3.add apple  4.display  5. Exit"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:{
			Mango* m1=new Mango();
			Basket[i]=m1;
			cout<<"Mango added at index "<<i<<endl;
			i++;
			
			break;
		}
		case 2:
			{
				Orange*o1=new Orange();
				Basket[i]=o1;
				cout<<"Orange added at index "<<i<<endl;
				i++;
				
				break;
			}
		case 3:
			{
				Apple*a1=new Apple();
				Basket[i]=a1;
				cout<<"Appple added at index "<<i<<endl;
				i++;
				
				break;
			}
		case 4:
			{
				cout<<"Fruites in the baskets are "<<endl;
				for(int j=0;j<i;j++)
				{
				Basket[j]->taste();
				if(typeid(*Basket[j])==typeid(Mango))
				{
					Mango *m=dynamic_cast<Mango *>(Basket[j]);
					m->pulp();
				}
				else if(typeid(*Basket[j])==typeid(Orange))
				{
					Orange *o=dynamic_cast<Orange *>(Basket[j]);
					o->juice();
				}
				else if(typeid(*Basket[j])==typeid(Apple))
				{
					dynamic_cast<Apple *>(Basket[j])->jam();
				}
				}
				break;
			}
		default :
			cout<<"Invalid Choice"<<endl;
			break;
	}
}while(ch!=5);
	
	
}
