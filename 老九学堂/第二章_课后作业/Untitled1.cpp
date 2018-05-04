#include <iostream>

using namespace std;

int main()
{
        //【破冰练习四】

    /*
    计算矩形的面积和周长：
    --需求说明：
    编写一个程序，要求根据输入矩形的长和宽，计算矩形的面积和周长。

    --提示：
    Ø  计算面积的公式：面积 = 长度 * 宽度
    Ø  计算周长的公式：周长 = 2  *（长+ 宽）
    */


    //定义长、宽变量
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
