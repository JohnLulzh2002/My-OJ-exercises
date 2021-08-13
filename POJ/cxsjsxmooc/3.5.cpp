#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;
class Student{

private:
	char name[22];
	int age,num,g1,g2,g3,g4;
public:
	void input(){
		scanf("%[^,]",name);
		scanf(",%d,%d,%d,%d,%d,%d",&age,&num,&g1,&g2,&g3,&g4);
	}
	void calculate(){}
	void output(){
		printf("%s,%d,%d,%d",name,age,num,(g1+g2+g3+g4)/4);
		switch((g1+g2+g3+g4)%4){
		case 1:
			printf(".25");	break;
		case 2:
			printf(".5");	break;
		case 3:
			printf(".75");
		}
	}

};
int main(){
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
}