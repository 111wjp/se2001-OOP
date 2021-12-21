// p225 3 (2)
#include <iostream>
using namespace std;
class Point{
	public:
		Point(float a,float b):x(a),y(b){
		}
		~Point(){
			cout<<"executing Point destructor"<<endl;
		}
	private:
		float x;
		float y;
};

class Circle:public Point{
	public:
		Circle(int a,int b,int r):Point(a,b),radius(r){
		}
		~Circle(){
			cout<<"executing Circle destructor"<<endl;
		}
	private:
		float radius;
};
int main(){
	Point *p = new Circle(2.5,1.8,4.5);
	Circle *pt = new Circle(2.5,1.8,4.5);
	delete pt;
	return 0;
}
