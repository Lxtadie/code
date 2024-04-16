#include<easyx.h>

//图形窗口的大小
#define BGWEIGHT 400//宽
#define BGHEIGHT 600//高
//我方飞机的大小
#define myAirWEIGHT 25//宽
#define myAirHEIGHT 40//高
//敌机的大小
#define enemyAirWEIGHT 25//宽
#define enemyAirHEIGHT 25//高
//子弹的大小
#define bulletWEIGHT 8//宽
#define bulletHEIGHT 8//高
//1，打开窗口，加载图片，链表结构的实现，变量的定义
//2，生成我方飞机，我方飞机的移动
//3，子弹的生成，发射，释放

IMAGE img[4];//图片数组
//初始化函数
void init()
{
    //加载图片
    loadimage(&img[0],"res\\背景.jpg",BGWEIGHT,BGHEIGHT);
    loadimage(&img[1],"res\\飞机.png",myAirWEIGHT,myAirHEIGHT);
    loadimage(&img[2],"res\\敌机.png",enemyAirWEIGHT,enemyAirHEIGHT);
    loadimage(&img[3],"res\\子弹.png",bulletWEIGHT,bulletHEIGHT);
}

//我们所有的功能，都从这个函数开始
void start()
{
    initgraph(BGWEIGHT,BGHEIGHT);
    //初始化
    while(1);
    closegraph();
}