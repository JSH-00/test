//#include<iostream>
//using namespace std;
//class Point {
//public:
//	void setX(int x) {
//		m_X = x;
//
//	}
//	int getX() {
//		return m_X;
//	}
//	void setY(int y) {
//		m_Y = y;
//
//	}
//	int getY() {
//		return m_Y;
//	}
//private :
//	int m_X;
//	int m_Y;
//};
//class Circle{
//public:
//	void setR(int r) {
//		m_R = r;
//	}
//	int getR() {
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point center) {
//		m_Center = center;
//
//	}
//	//获取圆心
//	Point getCenter() {
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;
//};
// //判断点和圆关系
//void isInCircle(Circle &c,Point &p) {
//	//两点间距离
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	//半径的平方
//	int rDistance = c.getR()* c.getR();
//	//判断
//	cout << "c" << c.getCenter().getX() << "," << c.getCenter().getY() << "," << c.getR() <<endl;
//	cout << "p" << p.getX() << "," <<p.getY();
//	if (distance == rDistance) {
//		cout << "点在圆上"<<endl;
//	}
//	else if (distance > rDistance) {
//		cout << "点在圆外" << endl;
//	}
//	else {
//		cout << "点在圆内" << endl;
//	}
//}
//int main() {
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//
//	Point p;
//	p.setX(10);
//	p.setY(10);
//	isInCircle(c, p);
//	system("pause");
//	return 0;
//}