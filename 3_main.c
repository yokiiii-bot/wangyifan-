#include<stdio.h>
int main()
{
    int a,b;
    char op;
    int result;
    printf("请输入算式");
    scanf("%d %c %d",&a,&op,&b);
    switch(op)
    {
        case'+':
        result=a+b;
        printf("%d\n",result);
        break;
        case'-':
        result=a-b;
        printf("%d\n",result);
        break;
        case'*':
        result=a*b;
        printf("%d\n",result);
        break;
        case'/':
        if(b!=0){result=a/b;
        printf("%d\n",result);}
        else{printf("除数不能为零\n");}
        break;
        default:
        printf("错误，不支持该运算符\n");
        break;}
        return 0;




    }
