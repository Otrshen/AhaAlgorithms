//
//  maopao.c
//  maopao
//
//  Created by 申铭 on 2017/3/5.
//  Copyright © 2017年 shenming. All rights reserved.
//

#include "maopao.h"

struct student {
    char name[21];
    int score;
};

void maopao1() {
    struct student a[100],t;
    int i,j,n;
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        scanf("%s %d", a[i].name, &a[i].score);
    }
    
    for (i = 1; i <= n-1; i++) {
        for (j = 1; j <= n-i; j++) {
            if (a[j].score < a[j+1].score) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    
    for (i = 1; i <= n; i++) {
        printf("结果：%s:%d\n", a[i].name, a[i].score);
    }
    
    getchar();getchar();
    
    //    int a[100],i,j,t,n;
    //    scanf("%d", &n);
    //
    //    for (i = 1; i <= n; i++) {
    //        scanf("%d", &a[i]);
    //    }
    //
    //    for (i = 1; i <= n-1; i++) {
    //        for (j = 1; j <= n-i; j++) {
    //            if (a[j] < a[j+1]) {
    //                t = a[j];
    //                a[j] = a[j+1];
    //                a[j+1] = t;
    //            }
    //        }
    //    }
    //
    //    for (i = 1; i <= n; i++) {
    //        printf("%d,", a[i]);
    //    }
    //
    //    getchar();getchar();
}
