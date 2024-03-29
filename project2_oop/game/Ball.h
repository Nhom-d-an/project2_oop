﻿#pragma once
#include "DoHoa.h"

enum eDir { STOP = 0, LEFT, UPLEFT, DOWNLEFT, RIGHT, UPRIGHT, DOWNRIGHT };//Dùng enum để gán tên cho các hằng số để dễ quản lí

class Ball //Tạo class quản lí bóng
{
private:
	int x, y; //tọa độ x,y hiện tại
	int x0, y0;//tọa độ x,y cũ             
	int originalX, originalY;//Tọa độ x, y gốc
	eDir direction; //Hướng di chuyển của bóng
	bool invertDir = false;
	int player=0;//xac dinh nguoi nao da cham bong
	bool isPath = false;//flag cho biet nen ve duong path
	double speed = 1;
public:
	Ball(int, int);//khởi tạo tọa độ quả bóng
	void Reset();//reset lại tọa độ quả bóng về ban đầu
	void changeDirection(eDir);//Đổi hướng di chuyển của bóng
	void randomDirection();//Random hướng di chuyển của bóng
	void Move();//Hàm cho bóng di chuyển
	int getX();//Hàm trả về tọa độ x hiện tại
	int getY();//Hàm trả về tọa độ y hiện tại
	int getX0();//Hàm trả về tọa độ x cũ
	int getY0();//Hàm trả về tọa độ y cũ
	eDir getDirection();//Hàm trả về hướng di chuyển của bóng
	void setDirection(eDir dir) {//cai dat huong bong
		direction = dir;
	}
	void invertDirection();//doi huong bong

	void setInverDir(bool flag) {//cai dat flag de doi huong bong
		invertDir = flag;
	}

	int getPlayer() {//xac dinh nguoi choi cham bong
		return player;
	}

	void setPlayer(int x) {//cat dat nguoi choi da cham bong
		player = x;
	}

	void setIsPath(bool flag) {//cat dat flag de ve duong path
		isPath = flag;
	}

	bool getIsPath() {//lay flag ve duong path
		return isPath;
	}

	void drawBall();//ve bong
	void saveInfo(ofstream& out);
};
