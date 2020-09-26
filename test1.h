//
// Created by 86151 on 2020/9/21.
//

#ifndef TEST1_TEST1_H
#define TEST1_TEST1_H
//#define p 100

void Swap(int *arr1,int *arr2){
    int *p;
    for(int i=0;i<10;i++){
        *p = *(arr1+i);
        *(arr1+i)=*(arr2+i);
        *(arr2+i)=*p;
    }
}

void Print(int * arr){
    for(int i=0;i<10;i++)
        printf("%d ",*(arr+i));
    printf("\n");
}

#endif //TEST1_TEST1_H
