#include <iostream>
using namespace std;

class Cat{
	int age;
	double weight;
	char color[10];
public:
	void setCat();
	void printCat(){
		cout<<"���䣺"<<age<<"(��)"<<endl;
		cout<<"���أ�"<<weight<<"(kg)"<<endl;
		cout<<"��ɫ��"<<color<<endl;
	}
};

void Cat::setCat(){
	cin>>age;
	cin>>weight;
	cin>>color;
}

int main (){
	Cat cat1;
	cat1.setCat();
	cat1.printCat();
	return 0;
}
