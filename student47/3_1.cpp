#include <iostream>
#include <string>
using namespace std;

class Person{
	string name;
	char sex;
	int age;
	
public:
    Person* father;
	Person* mother;
	//构造函数 
	Person (string name, char sex, int age){
		this->name = name;
		this->age = age;
	}
	
	string getName (){
		return this->name;
	}
};

bool isBrother (Person p3, Person p4){
	if(p3.father == p4.father || p3.mother == p4.mother) 
		return true;
	else 
		return false;
}

void getName(Person p){
	Person* Pf = p.father;
	Person* Pm = p.mother;
	
	Person* fF = Pf->father;
	cout<<"爷爷:"<<fF->getName()<<endl;
	Person* fM = Pf->mother;
	cout<<"奶奶:"<<fM->getName()<<endl;
	Person* mF = Pm->father;
	cout<<"姥爷:"<<mF->getName()<<endl;
	Person* mM = Pm->mother;
	cout<<"姥姥:"<<mM->getName()<<endl;
} 

int main ()
{
	Person P1 ("张三", 'm', 40);
	Person P2 ("李四", 'f', 39);
	Person P3 ("张小三", 'm', 12);
	Person P4 ("张二三", 'm', 11);
	
	P3.father = &P1;
	P3.mother = &P2;
	P4.father = &P1;
	P4.mother = &P2;
	
	if ( isBrother(P3, P4) )
		cout<<P3.getName()<<"和"<<P4.getName()<<"是兄弟姐妹。"<<endl;
	else
		cout<<P3.getName()<<"和"<<P4.getName()<<"不是兄弟姐妹。"<<endl;
		
	Person P5 ("张老三", 'm', 70);
	Person P6 ("李桂芬", 'f', 69);
	Person P7 ("李老四", 'm', 70);
	Person P8 ("田二妞", 'f', 69);
	
	P1.father = &P5;
	P1.mother = &P6;
	P2.father = &P7;
	P2.mother = &P8;
	
	getName (P1);
	
	return 0;
}
