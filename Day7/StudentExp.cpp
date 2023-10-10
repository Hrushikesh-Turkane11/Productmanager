#include<iostream>
using namespace std;
class Student{
	private:
		int age,rollno;
		string name;
	public:
		Student(int age,int rollno,string name){
			this->age=age;
			this->rollno=rollno;
			this->name=name;
		}
		void display(){
			cout<<rollno<<"   "<<name<<"   "<<age<<endl;
		}
};
class StudentExp{
	public:void Error(){
		cout<<"Exception: Age is Less than 18"<<endl;
	}
};

int main(){
	int age;
	cin>>age;
	try{
		if(age<18){
			throw StudentExp();
		}
		Student s1(age,1,"Abc");
		s1.display();	
	}catch(StudentExp e1){
		e1.Error();
	}
}
