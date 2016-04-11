#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

class Person {
	private:
		string name, lastName;
		int age;
		
	public: 
		Person(){};
		Person (string name, string lastName, int age){
			this->name = name;
			this->lastName = lastName;
			this->age = age;
		}
		
		void setName (string name) {
			this->name = name;
		}
		
		void setLastName (string lastName) {
			this->lastName = lastName;
		}
		
		void setAge (int age) {
			this->age = age;
		}
		
		string getName () {
			return this->name;
		}
		
		string getLastName () {
			return this->lastName;
		}
		
		int getAge () {
			return this->age;
		}
};


int main () {
	
	Person p [5];
	string name, lastName;
	int age;
	
	for (int i = 0; i < 5; i++) {
		cout<<"Person #" <<(i+1)<<endl;
		cout<<"NAME: ";
		cin>>name;	
		cout<<"LASTNAME: ";
		cin>>lastName;
		cout<<"AGE: ";
		cin>>age;
		p[i] = Person(name, lastName, age);
		fflush(stdin);
	}
	
	cout<<"\nUSERS LIST"<<endl;
	cout<<"==============";
	
	for (int i = 0; i < 5; i++) {
		cout<<"\nPERSON #"<<(i+1)<<endl;
		cout<<"[NAME]: "<<p[i].getName()<<endl;
		cout<<"[LASTNAME]: "<<p[i].getLastName()<<endl;
		cout<<"[AGE]: "<<p[i].getAge()<<endl;
		cout<<"---------------------";
	}
	
	return 0;
}
