#include <graphics.h>
#include <conio.h> // 包含conio.h头文件

int main()
{
    initgraph(640, 480); // 创建一个640*480的窗口

    int blockSize = 30; // 方块大小
    int columns = 640 / blockSize; // 列数
    int rows = 480 / blockSize; // 行数

    for (int i = 0; i < rows; i++) // 绘制行
    {
        for (int j = 0; j < columns; j++) // 绘制列
        {
            int x1 = j * blockSize; // 方块左上角x坐标
            int y1 = i * blockSize; // 方块左上角y坐标
            int x2 = x1 + blockSize; // 方块右下角x坐标
            int y2 = y1 + blockSize; // 方块右下角y坐标
            setfillcolor(WHITE); // 设置方块颜色为白色
            solidrectangle(x1, y1, x2, y2); // 绘制实心矩形
        }
    }

    setcolor(BLACK); // 设置线条颜色为黑色
    for (int i = 0; i <= rows; i++) // 绘制横向线条
    {
        line(0, i * blockSize, 640, i * blockSize); // 绘制横向线条
    }

    for (int j = 0; j <= columns; j++) // 绘制纵向线条
    {
        line(j * blockSize, 0, j * blockSize, 480); // 绘制纵向线条
    }

    _getch(); // 等待用户按键
    closegraph(); // 关闭绘图窗口

    return 0;
}