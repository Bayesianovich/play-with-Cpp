#include <iostream>
#include <cmath>

using namespace std;

const double pi {3.1415926};

// 定义函数原型
void circle_area();
double calculate_area(double);



int main()
{
    circle_area();
    return 0;
}

double calculate_area(double radius){
    return pi * pow(radius, 2);
}

void circle_area(){
    cout << "请输入圆的半径：";
    double radius {};
    cin >> radius;
    cout << "圆的面积是：" << calculate_area(radius) << endl;
}
