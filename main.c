#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include "test1.h"
#include <string.h>
//void Input(int *arr);
//void sort_1(int *arr);
//void Print(int *arr);
//int compare(const void *a, const void *b);
//int main() {
//    srand((size_t)time(NULL));
//    int arr[10];
//    Input(arr);
//    Print(arr);
//    printf("\n");
//    qsort(arr,10, sizeof(int),compare);
//    Print(arr);
//    return 0;
//}
//void Input(int *arr){
//    srand((size_t)time(NULL));
//    for(int i=0;i<10;i++){
//       *(arr+i)=rand()%50+51;
//    }
//    return;
//}
//void sort_1(int *arr){
//    int p;
//    for(int i=0;i<10;i++){
//        for(int j=i;j<10;j++){
//            if(arr[i]<arr[j]){
//                p = arr[i];
//                arr[i] = arr[j];
//                arr[j] = p;
//            }
//        }
//    }
//    return;
//}
//
//void Print(int *arr){
//    for(int i=0;i<10;i++){
//        printf("%d ",*(arr+i));
//    }
//    return;
//}
//int compare(const void *a, const void *b){
//    return *(int*)a-*(int*)b;
//}
//=========================================================链表
//typedef  struct node{
//    int data;
//    struct node *next;
//}Node;
//Node *Creat_head(){
//    Node *head=(Node*)malloc(sizeof(Node));
//    head->data=0;
//    head->next=NULL;
//}
//void print(Node  *head){
//    Node *p=head;
//    while (p!=NULL){
//        printf("%d\n",p->data);
//        p=p->next;
//    }
//    return;
//}
//void insert_List(Node *head){
//    Node *p=head,*q;
//    printf("%d",head->data);
//    for(int i=1;i<=10;i++){
//        q=(Node*)malloc(sizeof(Node));
//        q->data=i*10;
//        head->next=q;
//        head=q;
//    }
//    head->next=NULL;
//    head=p;
//    print(head);
//    while (p!=NULL){
//        printf("%d\n",p->data);
//        p=p->next;
//    }
//    return;
//}
//int main(){
//   Node *head=Creat_head();
//   print(head);
//   insert_List(head);
//   print(head);
//   return 0;
//}
//=================================================
//typedef struct complex{
//    int real;
//    int image;
//}complex;
//void addcomplex(complex *num1,complex *num2,complex *num){
//    num->real=num1->real+num2->real;
//    num->image=num1->image+num2->image;
//}
//int main(){
//   complex num1={10,20},num2={30,40},num_add;
//   addcomplex(&num1,&num2,&num_add);
//   printf("%d+%di\n",num_add.real,num_add.image);
//}
//==============================================================
//void remove_space(char*str){
//    int i=0,j=0;
//    while (str[i]!='\0'){
//        if(str[i]!=' ')
//            str[j++]=str[i];
//        i++;
//    }
//    str[j]='\0';
//}
//int main(){
//    char str[]="黄河 长江 长城";
//    int length=strlen(str);
//    remove_space(str);
//    puts(str);
//    printf("程序执行完成！\n");
//    return 0;
//}
//========================================
//int main(){
//    int arr1[11]={10,20,30,40,50,60,70,80,90,100},n,loc;
//    printf("请输入插入的数字：");
//    scanf("%d",&n);
//    for(int i=0;i<=10;i++){
//        if(i==10){
//            loc=10;
//            break;
//        }
//        if(arr1[i]>n){
//            loc=i;
//            break;
//        }
//    }
//    for(int i=10;i>loc;i--)
//        *(arr1+i)=*(arr1+i-1);
//    *(arr1+loc)=n;
//    for(int i=0;i<11;i++)
//        printf("%d ",*(arr1+i));
//    return 0;
//}
//============================================字符串查找
//void str_loc(char* Str, char *str){
//    int len=strlen(str);
//    int i=0;
//    while(Str[i]!='\0'){
//        for(int j=0;j<=len;j++){
//            if(j==len){
//                printf("字符串位置为：%d",i);
//                return;
//            }
//            if(Str[i+j]!=str[j])
//                break;
//        }
//        i++;
//    }
//    printf("字符串未找到\n");
//}
//int main(){
//    char Str[50],str[20];
//    printf("请输入字符串：");
//    gets(Str);
//    printf("请输入要查要的字符串：");
//    gets(str);
//    str_loc(Str,str);
//    return 0;
//
//}
//=========================================字符串出现次数使用strstr
//int sum_str(char*Str,char *str){
//    int sum=0,len=strlen(str);
//    char *p =strstr(Str,str);
//    printf("%s\n",p);//result=abcdsdabcdedabcdwd//第一次出现abc后的字符串
//    while (p!=NULL){
//        sum++;
//        p=p+3;
//        p=strstr(p,str);
//    }
//    return sum;
//}
//int main(){
//    char Str[]="sdaabcdsdabcdedabcdwd",str[]="abc";
//    int sum = sum_str(Str,str);
//    printf("字符串出现次数：%d",sum);
//    return 0;
//}
//================================================链表应用
//typedef struct student{
//    int data;
//    struct student *next;
//}Node;
//Node *creat_head(){
//    Node *head =(Node*)malloc(sizeof(Node));
//    head->next=NULL;
//    return head;
//}
//void insert_head(int data,Node *head){
//    Node *p=(Node*)malloc(sizeof(Node));
//    p->data=data;
//    p->next=head->next;
//    head->next=p;
//    printf("头部插入数据%d\n",data);
//}
//void remove_node(int data,Node *head){
//    Node *p=head;
//    while (p!=NULL){
//        if((p->next==NULL)&&(p->data!=data)){
//            printf("%d不存在无法删除\n",data);
//            break;
//        }
//        if((p->next)->data==data){
//            Node*p1=p->next;
//            p->next=(p->next)->next;
//            free(p1);
//            printf("%d已删除\n",data);
//            break;
//        }
//        p=p->next;
//    }
//}
//void insert_sort(int data,Node *head){
//    Node *p1 =(Node*)malloc(sizeof(Node));
//    p1->data=data;
//    Node *p=head;
//    while (p!=NULL){
//        if(p->next==NULL){
//            p1->next=p->next;
//            p->next=p1;
//            break;
//        }
//        if(p1->data>=(p->next)->data){
//            p1->next=p->next;
//            p->next=p1;
//            break;
//        }
//        p=p->next;
//    }
//    printf("按顺序插入数据%d\n",data);
//}
//void Node_print(Node *head){
//    Node *p=head->next;
//    while (p!=NULL){
//        printf("%d\n",p->data);
//        p=p->next;
//    }
//}
//int main(){
//    Node *head = creat_head();
//    insert_head(10,head);
//    insert_head(40,head);
//    insert_head(70,head);
//    insert_head(90,head);
//    insert_sort(500,head);
//    insert_sort(5,head);
//    remove_node(19,head);
//    remove_node(5,head);
//    Node_print(head);
//    return 0;
//}
//=================================================================10_2
//------------------------------------------------------------------
//int main() {
//    float num1, num2, result;
//    char operator_char;
//    printf("请输入num1 运算符 num2:\n");
//    scanf("%f %c %f", &num1, &operator_char, &num2);
////    printf("%.2f %c %.2f\n", num1, operator_char, num2);
//    switch (operator_char)
//    {
//        case '+':
//            result = num1+num2;
//            printf("%.f%c%.f=%.2f",num1,operator_char,num2,result);
//            break;
//        case '-':
//            result = num1-num2;
//            printf("%.f%c%.f=%.2f",num1,operator_char,num2,result);
//            break;
//        case '*':
//            result = num1*num2;
//            printf("%.f%c%.f=%.2f",num1,operator_char,num2,result);
//            break;
//        case '/':
//            result = num1/num2;
//            printf("%.f%c%.f=%.2f",num1,operator_char,num2,result);
//            break;
//        default:
//            printf("运算符错误\n");
//            break;
//    }
////    printf("%.f%c%.f=%.f",num1,operator_char,num2,result);
//    return 0;
//}
//===================================================================================计算器10_5
//float Add(float num1, float num2){
//    return num1+num2;
//}
//float Sub(float num1, float num2){
//    return num1-num2;
//}
//float Mul(float num1, float num2){
//    return num1*num2;
//}
//float Div(float num1, float num2){
//    return num1/num2;
//}
//int main(){
//    double (*Func[4])(float, float)={Add,Sub,Mul,Div};
//    float num1,num2;
//    char operator;
//    printf("请输入数据：");
//    scanf("%f %c %f",&num1,&operator,&num2);
//    switch(operator){
//        case '+':printf("result=%.2f",Func[0](num1,num2));
//            break;
//        case '-':printf("result=%.2f",Func[1](num1,num2));
//            break;
//        case '*':printf("result=%.2f",Func[2](num1,num2));
//            break;
//        case '/':printf("result=%.2f",Func[3](num1,num2));
//            break;
//        default:printf("运算符错误");
//            break;
//    }
//    return 0;
//}
//===================================================================================常见字符串操作函数
//========strok()字符串截取strtok 会破坏原来字符串   用\0替代分割的标志
//void sp_str(char *Str, char *str){
//    char *p=strtok(Str,str);
//    while (p!=NULL){
//        puts(p);
//        p=strtok(NULL,str);
//    }
//}
//int main(){
//    char Str[]="aaa.bbb.ccc.ddd.eee",str_cp[100],*ch,str[]=".";
//    strcpy(str_cp,Str);//拷贝函数
//    puts(str_cp);
//    sp_str(Str,str);
//    return 0;
//}
//字符串逆置======================================================================10_2
//void rev_str(char *str){
//    int i=0,j=strlen(str)-1;
//    char p[100];
//    strcpy(p,str);
//    while (i!=j) {
//        char temp = str[i];
//        str[i] = str[j];
//        str[j] = temp;
//        i++;
//        j--;
//    }
//    puts(p);
//    strcat(p,str+1);
//    puts(p);
//}
//
//int main(){
//    char str[]="abcdefghijk",str_cp[]="123123";
//    rev_str(str);
//    strcat(str,str_cp);
//    puts(str);
//    puts(str);
//    return 0;
//}
//==================================================================================
int main(){
    char c,b;
    printf("please input c  ");
    scanf("%c",&c);
    getchar();
    printf("please input b  ");
    scanf("%c",&b);
    printf("c=%c b=%c",c,b);
    return 0;
}
//please input c5
//please input b6
//c=5 b=6