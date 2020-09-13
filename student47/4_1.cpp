#include <iostream>
#include <cstring>
using namespace std;

class File {
	string name;
	double size;
	string createTime;
	string modTime;
public:
	File(string n, double s, string ct, string mt){
		name = n;
		size = s;
		createTime = ct;
		modTime = mt;
	}
	void Print(){
		cout<<"�ļ���:"<<name<<endl;
		cout<<"�ļ���С:"<<size<<"KB"<<endl;
		cout<<"����ʱ��:"<<createTime<<endl;
		cout<<"�޸�ʱ��:"<<modTime<<endl; 
	}
	
};

class MediaFile : public File{
	string type;
	string playTime;
public:
	MediaFile(string n, double s, string ct, string mt, string t, string pt)
		:File(n, s, ct, mt){
		type = t;
		playTime = pt;
	}
	void Print(){
		cout<<"�ļ�����:"<<type<<endl;
		cout<<"����ʱ��:"<<playTime<<endl; 
	}
};

int main (){
	MediaFile music("̽��ˮ��", 675.5, "2020/9/11 14:14:00", "2020/9/11 14:14:05", "MP3", "2020/9/11 14:18:00");
	music.File::Print();
	music.Print();
}
