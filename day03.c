#include <stdio.h>

//这是一个失败的交换函数(按值传递)
void swap_fail(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

//这是一个成功的交换函数(按地址传递，使用指针)
void swap_success(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int x = 10;
    int y = 20;

    //1.测试失败的交换
    swap_fail(x,y);
    printf("fail_result :x = %d, y = %d\n", x,y);

    //2.测试成功的交换
    swap_success(&x,&y);
    printf("success_result :x = %d, y = %d\n", x,y);

    return 0;
}
