//
//  quicksort.c
//  maopao
//
//  Created by 申铭 on 2017/3/5.
//  Copyright © 2017年 shenming. All rights reserved.
//

#include "quicksort.h"

int a[101],n;

void quicksort(int left, int right) {
    int i,j,t,temp;
    if (left > right) {
        return;
    }
    
    temp = a[left]; // 基准数
    i = left;
    j = right;
    
    while (i != j) {
        // 顺序很重要，要先从右往左找
        while (a[j] >= temp && i < j) {
            j--;
        }
        
        while (a[i] <= temp && i < j) {
            i++;
        }
        
        if (i < j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    
    // 最终将基准数归位
    a[left] = a[i];
    a[i] = temp;
    
    quicksort(left, i - 1);
    quicksort(i + 1, right);
    return;
}

void operation() {
    int i,j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    
    quicksort(1, n);
    
    for (i = 1; i <= n; i++) {
        printf("%d, ", a[i]);
    }
    
    getchar(); getchar();
}