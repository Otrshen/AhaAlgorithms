//
//  lianbao.c
//  maopao
//
//  Created by 申铭 on 2017/3/13.
//  Copyright © 2017年 shenming. All rights reserved.
//

#include "lianbao.h"
#include <stdlib.h>

// 这里创建一个结构体用来表示链表的结点类型
struct node {
    int data;
    struct node *next;
};

void sxm_lianbao() {
    struct node *head, *p, *q, *t;
    int i, n, a;
    scanf("%d", &n);
    head = NULL; // 头指针初始为空
    for (i = 1; i <= n; i++) { // 循环读入n个数
        scanf("%d", &a);
        // 动态申请一个空间，用来存放一个结点，并用临时指针p指向这个结点
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a; // 将数据存储到当前结点的data域中
        p->next = NULL; // 设置当前结点的后继指针指向空，也就是当期结点的下一个结点为空
        if (head == NULL) {
            head = p; // 如果这是第一个创建的结点，则将头指针指向这个结点
        } else {
            q->next = p; // 如果不是第一个创建的结点，则将上一个结点的后续指针指向当前结点
        }
        q = p; // 指针q也指向当前结点
    }
    
    scanf("%d", &a); // 读入待插入的数
    t = head; // 从链表头部开始遍历
    while (t != NULL) { // 当没有到达链表尾部的时候循环
        // 如果当前结点是最后一个结点或者下一个结点的值大于待插入数的时候插入
        if (t->next  == NULL || t->next->data > a) {
            p = (struct node *)malloc(sizeof(struct node)); // 动态申请一个空间，用来存放新增结点
            p->data = a;
            p->next = t->next; // 新增结点的后续指针指向当前结点的后续指针所指向的结点
            t->next = p; // 当前结点的后续指针指向新增结点
            break; // 插入完毕退出循环
        }
        t = t->next; // 继续下一个结点
    }
    
    // 输出链表中的所有数
    t = head;
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->next; // 继续下一个结点
    }
    
    getchar(); getchar();
}