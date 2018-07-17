#include <stdio.h>
#include <math.h>
#include <assert.h>

/**
 * 折半查找算法
*/

//定义常量
#define LEN 8
int arr[LEN] = {8, 7, 6, 3, 1, 0, 9, 7};

//判断是否排序完成
int is_sort(void) {
    int i;
    for (i=1; i<LEN;i++) {
        if (arr[i-1]>a[i])
            return 0;
    }
    return 1;
}


