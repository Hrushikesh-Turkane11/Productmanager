#include<iostream>
using namespace std;

template<class T> class Myclass{

	private : 
				T val1;
				T val2;	
	public :
		Myclass(T val1,T val2){
		this->val1=val1;
		this->val2=val2;
		}
		void display(T &val1, T &val2){
			T temp=val1;
			val1=val2;
			val2=temp;
		} 
};
int main2(){
	string a="Abhi",b="Hrushi";
	Myclass<string> obj(a,b);
	cout<<"Before Swapping"<<endl;
	cout<<a<<"   "<<b<<endl;
	cout<<"After Swapping"<<endl;
	obj.display(a,b);
	cout<<a<<"   "<<b<<endl;
	
}
