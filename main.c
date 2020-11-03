#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include "test1.h"
#include <string.h>
#include  <ctype.h>
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
//=====================================================================
//typedef int elmtype;
//typedef struct node{
//    elmtype data;
//    struct node* next;
//}Node;
//typedef enum ret_type {ERROR=-1,ok=0} Status;
//typedef Node* LinkedList;
//LinkedList node_create(elmtype data);
//Status list_print(LinkedList head);
//Status list_push_front(LinkedList head, elmtype data) {
//    if (head == NULL)
//        return ERROR;
//    if (head->next == NULL) {
//        LinkedList newNode = node_create(data);
//        head->next = newNode;
//    } else {
//        LinkedList newNode = node_create(data);
//        newNode->next = head->next;
//        head->next = newNode;
//    }
//}
//Status list_print(LinkedList head) {
//    if (head == NULL) {
//        return ERROR;
//    }
//    LinkedList ptr = head->next;
//    while (ptr) {
//        printf("%d ->", ptr->data);
//        ptr = ptr->next;
//    }
//    printf("\n");
//    return ok;
//}
//LinkedList node_create(elmtype data){
//    LinkedList node=(LinkedList)malloc(sizeof(Node));
//    node->data = data;
//    node->next = NULL;
//    return node;
//}
//Status list_pop_front(LinkedList head, elmtype data){
//    if(head==NULL)
//    {
//        printf("链表不存在\n");
//        return ERROR;
//    }
//    LinkedList p=head;
//    while (p!=NULL){
//        if(p->next->data==data){
//            LinkedList p1=p->next;
//            p->next=p->next->next;
//            printf("%d 删除成功\n",data);
//            free(p1);
//            return ok;
//        }
//        p=p->next;
//        if(p->next==NULL){
//            printf("%d 不存在\n",data);
//            return ok;
//        }
//    }
//}
//Status list_data_store(LinkedList head,elmtype n){
//    if(head==NULL){
//        printf("链表不存在\n");
//        return ERROR;
//    }
//    for(int i=1;i<=n;i++){
//        list_push_front(head,i);
//    }
//    return ok;
//}
//int main() {
//    LinkedList head = node_create(0);
//    list_push_front(head,1);
//    list_push_front(head,2);
//    list_push_front(head,3);
//    list_push_front(head,4);
//    list_push_front(head,5);
//    list_print(head);
//    list_pop_front(head,3);
//    list_print(head);
//    printf("\n");
//    return 0;
//}
//=================================================================10_20 Current
//int main(){
//    int Arr[]={1,2,3,4,5,6,7,8,9,10,11,12},m=0,sum= sizeof(Arr)/4,k=1,j=1,t=0;
//    int arr[sum];
//    for(int i=1;i<=sum;i++){
//        arr[i-1]=i;
//    }
//    for(int i=0;i<sum;i++)
//        printf("%d ",Arr[i]);
//    printf("\n");
//    while (m<sum-1){
//        t=0;
//       while(t<sum){
//           if(arr[t]!=0){
//               if(k==3){
//                   printf("%d\n",Arr[t]);
//                   arr[t]=0;
//                   m++;
//                   k=1;
//               } else{
//                   k++;
//               }
//           }
//           t++;
//       }
//    }
//    for(int i=0;i<sum;i++)
//    {
//        if(arr[i]!=0){
//            printf("最后的数为%d ",Arr[i]);
//            break;
//        }
//    }
//    return 0;
//}
//=================================================================10_22双链表

//typedef struct node{
//    int data;
//    struct node *pre;
//    struct node *next;
//}Node;
//Node *creat_head(){
//    Node *head=(Node*)malloc(sizeof(Node));
//    head->next=NULL;
//    head->pre=NULL;
//    return head;
//}
//void insert_head(Node *head,int data){
//    Node *new_node=(Node*)malloc(sizeof(Node));
//    new_node->data=data;
//    new_node->next=head->next;
//    if(head->next!=NULL){
//        head->next->pre=new_node;
//    }
//    new_node->pre=head;
//    head->next=new_node;
//}
//void print_node_next(Node *head){
//    Node *p=head->next;
//    while(p!=NULL){
//        printf("%d ",p->data);
//        p=p->next;
//    }
//    printf("\n");
//}
//void print_node_pre(Node *head,int data){
//    Node *p=head->next;
//    while(p!=NULL){
//        if(p->data==data)
//            break;
//        p=p->next;
//    }
//    while (p->pre!=NULL){
//        printf("%d ",p->data);
//        p=p->pre;
//    }
//    printf("\n");
//}
//void remove_node(Node *head,int data){
//    Node *p=head;
//    while(p!=NULL){
//        if(p->next->data==data&&p->next->next==NULL){
//            printf("数据：%d 已经删除\n",data);
//            p->next=NULL;
//            break;
//        }
//        if((p->next==NULL)&&(p->data!=data)){
//            printf("%d不存在无法删除\n",data);
//            break;
//        }
//        if(p->next->data==data){
//             Node *p1=p->next;
//             p->next->next->pre=p;
//             p->next=p->next->next;
//             free(p1);
//             printf("数据：%d 已经删除\n",data);
//             break;
//        }
//        p=p->next;
//    }
//}
//int main(){
//    Node *head=creat_head();
//    insert_head(head,10);
//    insert_head(head,20);
//    insert_head(head,30);
//    insert_head(head,40);
//    insert_head(head,50);
//    insert_head(head,60);
//    insert_head(head,70);
//    insert_head(head,80);
//    print_node_next(head);
//    print_node_pre(head,40);
//    remove_node(head,80);
//    print_node_next(head);
//    remove_node(head,10);
//    print_node_next(head);
//    return 0;
//}
//===============================================================10_22约瑟夫问题
//typedef struct node{
//    int data;
//    struct node *next
//}Node;
//Node *creat_head(int head_data,int headnext_data ){
//    Node *head=(Node*)malloc(sizeof(Node));
//    head->data=head_data;
//    head->next=(Node*)malloc(sizeof(Node));
//    head->next->data=headnext_data;
//    head->next->next=head;
//    return head;
//}
//void insert_head(Node *head,int data){
//    Node *new_node = (Node*)malloc(sizeof(Node));
//    new_node->data = data;
//    new_node->next = head->next;
//    head->next = new_node;
//}
//void remove_current_node(Node *head){
//    int k=0;
//    Node *p = head;
//    while(p!=p->next->next){
//        k++;
//        if(k==2){
//            Node *p1=p->next;
//            printf("%d ",p->next->data);
//            p->next=p->next->next;
//            free(p1);
//            k=0;
//        }
//        p=p->next;
//    }
//    if(k!=0){
//        printf("最后的数为：%d\n",p->data);
//
//    } else{
//        printf("最后的数为：%d\n",p->next->data);
//    }
//}
//void current_print(Node *head){
//    Node *p = head;
//    while (p){
//        printf("%d\n",p->data);
//        p=p->next;
//    }
//}
//int main(){
//    Node *head =creat_head(1,12);
//    insert_head(head,11);
//    insert_head(head,10);
//    insert_head(head,9);
//    insert_head(head,8);
//    insert_head(head,7);
//    insert_head(head,6);
//    insert_head(head,5);
//    insert_head(head,4);
//    insert_head(head,3);
//    insert_head(head,2);
//    remove_current_node(head);
//    return 0;
//}
//=======================================================================
//#include<assert.h>
////#include<ctype.h>
////
////#define INITSIZE 20
////#define INCREMENT 10
////#define MAXBUFFER 10
////#define LEN sizeof(Elemtype)
////typedef double Elemtype;
////typedef struct{
////    Elemtype *base;
////    Elemtype *top;
////    int StackSize;
////}SqStack;
////
////void InitStack(SqStack *S)
////{
////    S->base=(Elemtype*)malloc(LEN*INITSIZE);
////    assert(S->base != NULL);
////    S->top=S->base;
////    S->StackSize=INITSIZE;
////}
////
////void PushStack(SqStack *S,Elemtype e)
////{
////    if(S->top - S->base >= S->StackSize)
////    {
////        S->base=(Elemtype*)realloc(S->base,(S->StackSize+INCREMENT)*LEN);
////        assert(S->base !=NULL);
////        S->top=S->base+S->StackSize;
////        S->StackSize+=INCREMENT;
////    }
////    *S->top =e;
////    S->top++;
////}
////
////void PopStack(SqStack *S,Elemtype *e)
////{
////    *e=*--S->top;
////}
////
////void CalFunction(SqStack *S,char str[])
////{
////    Elemtype number,e,d;
////    char arr[MAXBUFFER];
////    int i=0,j=0;
////
////    InitStack(S);
////
////    while(str[i]!='\0')
////    {
////        while(isdigit(str[i])||str[i]=='.') //过滤数字
////        {
////            arr[j++]=str[i++];
////            arr[j]='\0';
////
////            if( j >= MAXBUFFER )
////            {
////                printf("输入单个数据过大！\n");
////                return ;
////            }
////            if(str[i]==' ')
////            {
////                number=atof(arr); //利用atof函数将数字字符转化为double型数据
////                PushStack(S,number); //将转换的数进行压栈
////                j=0;
////                break;
////            }
////        }
////
////        switch(str[i])
////        {
////            case '+':
////                PopStack(S,&e);
////                PopStack(S,&d);
////                PushStack(S,d+e);
////                break;
////            case '-':
////                PopStack(S,&e);
////                PopStack(S,&d);
////                PushStack(S,d-e);
////                break;
////            case '*':
////                PopStack(S,&e);
////                PopStack(S,&d);
////                PushStack(S,d*e);
////                break;
////            case '/':
////                PopStack(S,&e);
////                PopStack(S,&d);
////                if(e == 0)
////                {
////                    printf("输入出错，分母为零！\n");
////                    return ;
////                }
////                PushStack(S,d/e);
////                break;
////        }
////        i++;
////    }
////
////    PopStack(S,&e);
////    printf("计算结果为：%lf",e);
////}
////
////int main()
////{
////    char str[100];
////    SqStack S;
////    printf("请按逆波兰表达式输入数据,每个数据之间用空格隔开:");
////    gets(str);
////    CalFunction(&S,str);
////    return 0;
////}
//======================================================

#define MAXSIZE 100
typedef int SElemType ;
typedef enum ret_type {ERROR=-1,Ok=0} Status;
typedef struct
{
    SElemType data [ MAXSIZE ];
    int top ;
} SqStack , * SqtackPtr ;

Status Push(SqStack *S, SElemType e){
    if(S->top>=MAXSIZE-1){
        printf("栈区已满\n");
        return ERROR;
    } else{
        S->top++;
        S->data[S->top]=e;
        return Ok;
    }
}

Status Pop(SqStack *S, SElemType *e)
{
    if(S->top==-1){
        printf("栈区已为空无法删除\n");
        return ERROR;
    } else{
        *e = S->data[S->top];
        S->top--;
        return Ok;
    }
}
Status suffix(SqStack *S,char str[]){
       int length = strlen(str),i=0,j=0;
       char str1[10];
       while (i<length){
           if(isdigit(str[i])){
               if(str[i+1]==' '){
                   str1[j++]=str[i];
                   str1[j]='\0';
                   Push(S,atoi(str1));
                   j=0;

               } else{
                   str1[j++]=str[i];
               }
           }
           if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){
               SElemType val1,val2;
               switch (str[i]){
                   case '-':
                       if(isdigit(str[i+1])){
                           str1[j++]='-';
                           break;
                       } else{
                           Pop(S,&val1);
                           Pop(S,&val2);
                           Push(S,val2-val1);
                           break;
                       }
                   case '+':
                       Pop(S,&val1);
                       Pop(S,&val2);
                       Push(S,val2+val1);
                       break;
                   case '*':
                       Pop(S,&val1);
                       Pop(S,&val2);
                       Push(S,val1*val2);
                       break;
                   case '/':
                       Pop(S,&val1);
                       Pop(S,&val2);
                       Push(S,val2/val1);
                       break;
               }
           }
           i++;
       }
       printf("top=%d \n",S->top);
       printf("result = %d ",S->data[0]);
    return Ok;
}
int main(){
    SqStack S;
    S.top=-1;
    char str[100];
    printf("请输入后缀式 ,字符之间用空格相连\n");
    gets(str);
    suffix(&S,str);
    return 0;
}