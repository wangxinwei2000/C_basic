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
//    printf("%.2f %c %.2f\n", num1, operator_char, num2);
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
//int main(){
//    char c,b;
//    printf("please input c  ");
//    scanf("%c",&c);
//    getchar();
//    printf("please input b  ");
//    scanf("%c",&b);
//    printf("c=%c b=%c",c,b);
//    return 0;
//}
//please input c5
//please input b6
//c=5 b=6
//==============================================================10_7
//int main (void){
//    int n;
//    pos_1:
//    printf("请输入一个整数：");
//    scanf("%d",&n);
//    if(n<0){
//        printf("输入错误！ \n");
//        goto pos_1;
//    }
//    printf("成功输入整数：%d",n);
//    return 0;
//}
//int main(){
//    int arr[8];
//    printf("%d\n", sizeof(arr));
//    return 0;
//}
//=============================================10_8链表操作字符串
//typedef struct student{
//    int id;
//    char name[20];
//    char sex[5];
//    struct student *next;
//}st;
//st *creat_head(){
//    st *head=(st*)malloc(sizeof(st));
//    head->next=NULL;
//}
//void insert_next(st *head,int id, char *name, char *sex){
//    st *new_st=(st*)malloc(sizeof(st));
//    new_st->id=id;
//    strcpy(new_st->name,name);
//    strcpy(new_st->sex,sex);
//    new_st->next=head->next;
//    head->next=new_st;
//}
//void print_st(st *head){
//    st *p=head->next;
//    while (p!=NULL){
//        printf("id=%d name=%s sex=%s \n",p->id,p->name,p->sex);
//        p=p->next;
//    }
//}
//int main(){
//    st *head=creat_head();
//
//    insert_next(head,18,"张三","男");
//
//    print_st(head);
//    return 0;
//}
//=======================================================================//10_9静态局部变量
//void func(){
//    static int b=10;//静态变量只初始化一次，下次就不执行这句了。
//    b++;
//    printf("%d\n",b);
//}
//int main(){
//    for(int i=0;i<10;i++){
//        func();
//    }
//    return 0;
//}
//========================================================================//10_10静态全局变量
//static int c=10;//作用域可以在本文件中使用，不可以在其他文件中使用，存储在数据区，生命周期从程序创建到程序销毁，
//void func(){
//    printf("c=%d\n",c);
//}
//int main(){
//    func();
//    printf("c=%d\n",c);
//    return 0;
//}
//========================================================================100以内素数判断
//void prime_num(int start_num,int end_num){
//    for(int i=start_num;i<=end_num;i++){
//        for(int j=2;j<=i;j++){
//            if(i==j){
//                printf("%d\n",j);
//                break;
//            }
//            if(i%j==0)
//                break;
//        }
//    }
//}
//int main(){
//    prime_num(2,100);
//    return 0;
//}
//=============================================================================10_16杨辉三角
//int binomial(int k,int n){
//    if (k>n){
//        printf("数据输入错误\n");
//        return 0;
//    }
//    int num1=1,num2=1,result;
//    for(int i=n-k+1;i<=n;i++)
//        num1=num1*i;
//    for(int i=1;i<=k;i++)
//        num2=num2*i;
//    result=num1/num2;
//    return result;
//}
//void Yanghui_triangle(int n){
//      for(int i=0;i<=n;i++){
//            for(int j=0;j<=i;j++)
//                printf("%d ",binomial(j,i));
//            printf("\n");
//      }
//}
//
//int main(){
////   int num=binomial(0,0);
////   printf("result=%d\n",num);
//    Yanghui_triangle(10);
//    return 0;
//}
//===========================================================================10_17经典算法43
//void swap_head(int *arr,int n){
//    int max=arr[0],loc=0;
//    for(int i=0;i<n;i++){
//        if(arr[i]>max) {
//            max = arr[i];
//            loc = i;
//        }
//    }
//    int temp=arr[0];
//    arr[0]=arr[loc];
//    arr[loc]=temp;
//}
//void swap_last(int *arr,int n){
//    int min=arr[0],loc=0;
//    for(int i=0;i<n;i++){
//        if(arr[i]<min) {
//            min = arr[i];
//            loc = i;
//        }
//    }
//    int temp=arr[n-1];
//    arr[n-1]=arr[loc];
//    arr[loc]=temp;
//}
//void arr_print(int *arr,int n){
//    for(int i=0;i<n;i++)
//        printf("%d ",arr[i]);
//    printf("\n");
//}
//int main(){
//    int arr[10]={80,2,3,4,5,999,7,8,9,10};
//    arr_print(arr,10);
//    swap_head(arr,10);
//    arr_print(arr,10);
//    swap_last(arr,10);
//    arr_print(arr,10);
//    return 0;
//}
typedef int elmtype;
typedef struct node{
    elmtype data;
    struct node* next;
}Node;
typedef enum ret_type {ERROR=-1,ok=0} Status;
typedef Node* LinkedList;
LinkedList node_create(elmtype data);
Status list_print(LinkedList head);
Status list_push_front(LinkedList head, elmtype data) {
    if (head == NULL)
        return ERROR;
    if (head->next == NULL) {
        LinkedList newNode = node_create(data);
        head->next = newNode;
    } else {
        LinkedList newNode = node_create(data);
        newNode->next = head->next;
        head->next = newNode;
    }
}
Status list_print(LinkedList head) {
    if (head == NULL) {
        return ERROR;
    }
    LinkedList ptr = head->next;
    while (ptr) {
        printf("%d", ptr->data);
        ptr = ptr->next;
        printf("\n");
    }
    printf("\n");
    return ok;
}
LinkedList node_create(elmtype data){
    LinkedList node=(LinkedList)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}
int main() {
    LinkedList head = node_create(0);
    list_push_front(head,1);
    list_push_front(head,2);
    list_push_front(head,3);
    list_push_front(head,4);
    list_push_front(head,5);
    list_print(head);
    printf("\n");
    return 0;
}

