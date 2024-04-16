#include <graphics.h>
#include <conio.h> // 包含conio.h头文件

int main()
{
    initgraph(640, 540); // 创建一个640*540的窗口，多出来的高度用来放置颜色块

    int blockSize = 30; // 方块大小
    int columns = 640 / blockSize; // 列数
    int rows = 480 / blockSize; // 行数

    // 绘制颜色块
    int colorBlockSize = 40; // 颜色块大小
    int colorBlockSpacing = 10; // 颜色块间距
    int colorBlockLeft = 20; // 颜色块左边界
    for (int i = 0; i < 7; i++) // 绘制7种颜色的颜色块
    {
        int x1 = colorBlockLeft + (colorBlockSize + colorBlockSpacing) * i; // 颜色块左上角x坐标
        int y1 = 500; // 颜色块左上角y坐标
        int x2 = x1 + colorBlockSize; // 颜色块右下角x坐标
        int y2 = y1 + colorBlockSize; // 颜色块右下角y坐标
        setfillcolor(i + 1); // 设置颜色块颜色
        solidrectangle(x1, y1, x2, y2); // 绘制实心矩形
    }

    setcolor(BLACK); // 设置线条颜色为黑色
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

    // 鼠标操作
    MOUSEMSG m; // 定义鼠标消息变量
    while (true)
    {
        m = GetMouseMsg(); // 获取鼠标消息
        if (m.uMsg == WM_LBUTTONDOWN) // 如果检测到鼠标左键按下
{
    if (m.y > 500) // 如果点击在颜色块区域
    {
        setfillcolor(m.x / (colorBlockSize + colorBlockSpacing) + 1); // 设置当前颜色
    }
    else // 如果点击在方块区域
    {
        int x = m.x / blockSize;
        int y = m.y / blockSize;
        solidrectangle(x * blockSize, y * blockSize, (x + 1) * blockSize, (y + 1) * blockSize); // 绘制实心矩形
    }
}

    }

    closegraph(); // 关闭绘图窗口

    return 0;
}
