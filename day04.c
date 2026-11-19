#include <stdio.h>
#include <string.h>//操作字符串需要这个头文件

//1.定义结构体:相当于画了一张“学生档案表”的模板
struct Student {
    char name[20];  //姓名(字符串)
    int age;        //年龄
    float score;    //成绩
};

int main() {
    //2.创建一个学生变量，并填入信息
    struct Student stu1;
    strcpy(stu1.name,"Huang");//字符串赋值需要用到strcpy
    stu1.age = 20;
    stu1.score = 99;

    //使用'.'来访问结构体里的成员
    printf("学生姓名: %s , 年龄: %d , 分数: %.1f\n", stu1.name, stu1.age, stu1.score);

    // ==========================================
    // 核心重点：结构体指针（408考研必考）
    // ==========================================

    //3.定义一个指针,指向stu1的内存地址
    struct Student *p = &stu1;

    //4.使用指针访问成员(注意!这里用的是 -> 箭头，不是点)
    //p -> age 的意思就是 : 顺着p的地址，找到age这个成员
    p -> age = 21;//将年龄修改成21
    p -> score = 98;//将成绩修改为99

    printf("修改后: 姓名: %s, 年龄: %d, 分数: %.1f\n", p->name, p->age, p->score);



    //定义一个三个学生的结构体
    struct Student class1[3];
    class1[0].age = 18;
    class1[1].age = 19;
    class1[2].age = 20;

    //遍历这个数组，使他们的年龄打印到控制台
    for (int i = 0;i < 3;i++) {
        printf("第 %d 的年龄是 %d\n",i,class1[i].age);
    }

    return 0;
}
