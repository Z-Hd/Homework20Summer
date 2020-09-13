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
		cout<<"文件名:"<<name<<endl;
		cout<<"文件大小:"<<size<<"KB"<<endl;
		cout<<"创建时间:"<<createTime<<endl;
		cout<<"修改时间:"<<modTime<<endl; 
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
		cout<<"文件种类:"<<type<<endl;
		cout<<"播放时间:"<<playTime<<endl; 
	}
};

int main (){
	MediaFile music("探清水河", 675.5, "2020/9/11 14:14:00", "2020/9/11 14:14:05", "MP3", "2020/9/11 14:18:00");
	music.File::Print();
	music.Print();
}
