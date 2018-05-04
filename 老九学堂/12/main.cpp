#include <iostream>

using namespace std;

int main()
{
int a,b;
    cout << "输入长a:";
    cin >> a;
    cout <<"输入宽b:";
    cin >> b;
    //计算矩形周长
    cout << "矩形的周长为：" << 2 * ( a + b ) << endl;
    // 计算矩形面积
    cout << "矩形的面积为: " << a * b << endl;

    return 0;
}
