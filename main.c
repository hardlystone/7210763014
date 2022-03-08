#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//////////////////////////////////////////////////////////////////////
//
/*
void sum(int a[],int n,int *sum_evenIndex,int *sum_oddIndex);

int main()

{

   int a[100],n;

    int sum1,sum2;

	int i;

	scanf("%d",&n);

	for(i=0;i<n;i++)

		scanf("%d",&a[i]);

	sum(a,n,&sum1,&sum2);

	printf("%d %d\n",sum1,sum2);

	return 0;

}

//在下面实现sum函数

void sum(int a[],int n,int *sum_evenIndex,int *sum_oddIndex)
{
    int i;
    *sum_evenIndex=0;
    *sum_oddIndex=0;
    for(i=0;i<n;i++)
    {

        if(i%2==0)
        {
            *sum_evenIndex=*sum_evenIndex+a[i];
        }
        else
        {
            *sum_oddIndex=*sum_oddIndex+a[i];
        }
    }

}
//////////////////////////////////////////////////////////////////////////////////
//1.利用指针计算数组中大于平均数的元素个数
void Da_averager(int a[],int n,int *count);
int main()
{
    int a[10],n,i,sum=0;
    int count=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    n=sum/10;
    Da_averager(a,n,&count);
    printf("%d",count);
return 0;
}

void Da_averager(int a[],int n,int *count)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(a[i]>n)
        {
            (*count)++;
        }
    }
}
//////////////////////////////////////////////////////////////////////////////
//2.利用指针找出数组中的最大值以及对应的最大序号
void Da_xuhao(int a[],int *max,int *index);
int main()
{
    int a[10],i;
    int max=0,index=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    Da_xuhao(a,&max,&index);
    printf("max=%d index=%d",max,index);
return 0;
}

void Da_xuhao(int a[],int *max,int *index)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(a[i]>*max)
        {
            *max=a[i];
            *index=i;
        }
    }

}
/////////////////////////////////////////////////////////////////
//3.利用指针找出数组中的最小值
void Xiao(int a[],int *min);
int main()
{
    int a[10],i;
    int min=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    Xiao(a,&min);
    printf("%d",min);
return 0;
}

void Xiao(int a[],int *min)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(a[i]<*min)
        {
            *min=a[i];
        }
    }
}
////////////////////////////////////////////////////////
//4.使用指针按倒序输出数组
void Z_daoxu(int a[],int *n);
int main()
{
    int a[10],i;
    int n[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    Z_daoxu(a,&n);
    for(i=0;i<10;i++)
    {
        printf("%d ",n[i]);
    }


return 0;
}
void Z_daoxu(int a[],int *n)
{
    int i,j;
    for(i=0,j=9;i<10&&j>=0;i++,j--)
    {
        n[j]=a[i];
    }
}
//////////////////////////////////////////////////////////////////////////////
//5.用指针将两个数按大小顺序输出
void DX_jiaohuan(int *a,int *b);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    DX_jiaohuan(&a,&b);
    printf("%d %d",a,b);

return 0;
}
void DX_jiaohuan(int *a,int *b)
{
    int c;
    if(*a<*b)
    {
        c=*a;
        *a=*b;
        *b=c;
    }
}
//////////////////////////////////////////////////////////////////////////////////
//1. 编写程序，定义一个字符数组并输入，然后把其中的大写字母变成小写字母，把其中的小写字母变成大写字母，最后输出变换后的字符串
int main()
{
    char a[20];
    int i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]+=32;
        }
        else if(a[i]>='a'&&a[i]<='z')
        {
            a[i]-=32;
        }

    } printf("%s",a);
    return 0;
}
///////////////////////////////////////////////////////////////////////////////
//1. 8.4.3 编程题《自定义函数，删除字符串中的字符》
int main()
{
    char a[100],c,i;
    printf("Input a string:");
    gets(a);
    printf("Input a char:");
    c=getchar();
    printf("After deleted,the string is:");
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=c)
            printf("%c",a[i]);
    }
    return 0;
}
///////////////////////////////////////////////////////
//2. 编写程序，把一个数字字符串转换成一个整数。
int main()
{
    char a[100];
    int i,n,sum=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        n=a[i]-'0';
        sum=(sum*10)+n;
    }
    printf("after:%d",sum);

    return 0;
}
////////////////////////////////////////////////////////
//3. 7.3.2 编程题《在字符串中查找某字符》
int main()
{
    char a[80];
    char c;
    int index,i;
    printf("Input a character:");
    c=getchar();
    getchar();
    printf("Input a string:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==c)
        {
            index=i;
        }
    }
    printf("index=%d",index);
    return 0;
}

////////////////////////////////////////////////////////////
//4. 不使用strcat函数实现两个字符串连接
int main()
{   char a[100],b[100];
    int i,j;
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++);
    for(j=0;b[j]!='\0';j++)
    {
         a[i]=b[j];
         i++;
    }
    a[i]='\0';
    printf("%s",a);



    return 0;
}

//////////////////////////////////////////////////////
//5. 字符串替换
void replace(char *str1,char *str2,char *str3);
int aka(char p1,char p2);
int main()
{
    char str1[20],str2[20],str3[200];
    gets(str1);
    gets(str2);
    gets(str3);
    replace(str1,str2,str3);
    puts(str3);
    return 0;

}
void replace(char *str1,char *str2,char *str3)
{
    int i,j,k;
    int count=0,gap=0,demo;
    char temp[200];
    for(i=0;str3[i]!='\0';i+=gap)
    {
        if((str3[i]<'A'||str3[i]>'Z')&&(str3[i]>'a'||str3[i]<'z'))
        {
            gap=1;
        }
        if(aka(str3[i],str1[0])==1)
        {
            demo=1;
            for(j=i,k=0;str1[k]!='\0';j++,k++)
            {
                if(aka(str3[j],str1[k])==0)
                {
                    demo=0;
                    gap=k;
                    break;
                }
            }
            if(demo==1)
            {
                for(j=i+strlen(str1),k=0;j<strlen(str3);j++,k++)
                {
                    temp[k]=str3[j];
                }
                temp[k]='\0';
                for(j=i,k=0;str2[k]!='\0';j++,k++)
                {
                    str3[j]=str2[k];
                    count++;
                }
                for(k=0;temp[k]!='\0';j++,k++)
                {
                    str3[j]=temp[k];
                }
                str3[j]='\0';
                gap=strlen(str1);
            }
        }
        else
        {
            gap=1;
        }

    }

}
int aka(char p1,char p2)
{
    int m;
    m=p1-p2;
    if(m==32||m==-32||m==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}




////////////////////////////////////////////////////////////////////////////
//6. 自己编写一个字符串比较函数
int mystrcmp(char *p1,char *p2);
int main()
{
    char s1[100],s2[100];
    int i;
    gets(s1);
    gets(s2);
    i=mystrcmp(s1,s2);
    printf("%d",i);
    return 0;

}
int mystrcmp(char *p1,char *p2)
{
    int j,x=-1;
        for(j=0;p1[j]!='\0'||p2[j]!='\0';j++)
        {
            if(p1[j]!=p2[j])
            {
                x=p1[j]-p2[j];
                break;
            }
        }
        if(x!=-1)
        {
            return x;
        }else
        return 0;

}
//////////////////////////////////////////////////////////////
//3. 指针-编写函数实现求整型一维数组中下标为奇数的元素和，并在主函数测试。
int sum(int *a,int n);
int main()
{
    int *a;
    int n;
    scanf("n=%d",&n);
    a=(int *)malloc(n * sizeof(int));
    if(a==NULL)
    {
        printf("No\n");
        exit(1);
    }
    sum(a,n);
    return 0;
}
int sum(int *a,int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        if(i!=0&&i%2!=0)
        {
            sum=sum+a[i];
        }
    }
    printf("sum of odd index is %d",sum);
}
////////////////////////////////////////////////////
//4. 指针-编写多个函数，用指针实现学生成绩管理相关问题。
void input(int *p,int n);
void print(int *p,int n);
void sort(int *p,int n);
int main()
{
    int *p,n;
    p=(int *)malloc(n *sizeof(int));
    scanf("%d",&n);
    input(p,n);
    print(p,n);
    sort(p,n);
    return 0;
}
void input(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }

}
void print(int *p,int n)
{
    int i;
    printf("before sorting is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
}
void sort(int *p,int n)
{
    int i,j;
    int max;
    printf("sorted result is:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[j]>p[i])
            {
                max=p[j];
                p[j]=p[i];
                p[i]=max;
            }
        }
        printf("%d ",p[i]);
    }
}
///////////////////////////////////////////////////////
//5. 指针-编写函数实现报号留人问题。
void monkey(int *p,int n);
int main()
{
    int *p,n;
    p=(int *)malloc(n *sizeof(int));
    scanf("n=%d",&n);
    monkey(p,n);

    return 0;
}
void monkey(int *p,int n)
{
    int i,j,flag=0,count=n;
    for(i=1;i<n+1;i++)
    {
        p[i]=1;
    }
    for(i=1;;i++)
    {
        if(i==n+1)
            i=1;
        if(p[i]!=0)
            flag++;
        else
            continue;
        if(flag==3)
        {
            p[i]=0;
            flag=0;
            count--;
        }
        if(count==1)
            break;
    }
    for(i=1;i<n+1;i++)
    {
        if(p[i]==1)
        break;
    }printf("last is No. %d",i);

}
//////////////////////////////////
//1. 使用结构体统计候选人的得票数

struct candidate
{
    char name[20];
    int count;
}hx1,hx2,hx3;

int main()
{
    struct candidate hx1={"zhang",0};
    struct candidate hx2={"li",0};
    struct candidate hx3={"wang",0};
    char toupiao[10][10];
    int i,invalid=0;
    for(i=0;i<10;i++)
    {
        scanf("%s",toupiao[i]);
    }
    for(i=0;i<10;i++)
    {
        if(!strcasecmp(toupiao[i],hx1.name))
            hx1.count++;
        else if(!strcasecmp(toupiao[i],hx2.name))
            hx2.count++;
        else if(!strcasecmp(toupiao[i],hx3.name))
            hx3.count++;
        else
            invalid++;
    }
    printf("   name count\n");
    printf("  zhang %d\n",hx1.count);
    printf("     li %d\n",hx2.count);
    printf("   wang %d\n",hx3.count);
    printf("invalid %d",invalid);
}
///////////////////////////////////////////////
//2. 使用结构体求最高平均成绩学生信息
typedef struct date
{
    int year;
    int month;
    int day;
}DATE;
typedef struct student
{
    long number;
    char name[20];
    char sex[1];
    DATE birthday;
    int score[4];
}student;
int main()
{
    student su[4];
    int i,j;
    int suaver[4],max=0;
    for(i=0;i<4;i++)
    {
        scanf("%ld %s %s %d %d %d",&su[i].number,su[i].name,su[i].sex,&su[i].birthday.year,&su[i].birthday.month,&su[i].birthday.day);
        for(j=0;j<4;j++)
       {
           scanf("%d",&su[i].score[j]);
       }
    }

    for(i=0;i<4;i++)
    {
        suaver[i]=0;
        for(j=0;j<4;j++)
        {
            suaver[i]=suaver[i]+su[i].score[j];
        }
        suaver[i]=suaver[i]/4;
    }
    for(i=0;i<4;i++)
    {
        if(max<suaver[i])
        {
            max=suaver[i];
        }
    }
    for(i=0;i<4;i++)
    {
        if(max==suaver[i])
        {
            printf("%ld %s %s %d %d %d",su[i].number,su[i].name,su[i].sex,su[i].birthday.year,su[i].birthday.month,su[i].birthday.day);
            for(j=0;j<4;j++)
            {
                printf(" %d",su[i].score[j]);
            }

        }
    }
}
//////////////////
//水仙花数
int main()
{
   int n;
   for(n=100;n<1000;n++)
   {
       if(n==(pow(n%10,3)+pow((n/10)%10,3)+pow((n/100),3)))
          printf("%d\n",n);
   }
return 0;
}
//99乘法表1.0
int main()
{
    int i,j,k;
    for(i=1;i<10;i++)
    {
        printf("   %d",i);
    }
    printf("\n");
    for(i=1;i<10;i++)
    {
        printf("   -");
    }
    printf("\n");
    for(i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");

    }
    return 0;
}
//99乘法表2.0
int main()
{
    int i,j;
    for(i=1;i<10;i++)
    {
        printf("  %d",i);
    }
    printf("\n");
    for(i=1;i<10;i++)
    {
        printf("  -");
    }
    printf("\n");
    for(i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%3d",i*j);
        }
        printf("\n");
    }
    return 0;
}
//99乘法表3.0
int main()
{
    int i,j;
    for(i=1;i<10;i++)
    {
        printf("  %d",i);
    }
    printf("\n");
    for(i=1;i<10;i++)
    {
        printf("  -");
    }
    printf("\n");
    for(i=1;i<10;i++)
    {

        for(j=i;j<10;j++)
        {
            printf("%3d",i*j);
        }
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("   ");
        }
    }
    return 0;
}
//计算sinx的值；泰勒级数
int main()
{
    int n=1,count=1;
    double x;
    double sum,term;
    printf("Input x:");
    scanf("%lf",&x);
    sum=x;
    term=x;
    do
    {
        term=-term*x*x/((n+1)*(n+2));
        sum=sum+term;
        n=n+2;
        count++;
    }while(fabs(term)>=1e-5);
    printf("%f %d",sum,count);
    return 0;
}
//s3.1.计算利息与本金
int main()
{
    int year;
    float b,a;
    scanf("%f %d",&b,&year);
    if(year==1)
    {
        a=(1+0.0225)*b;
    }
    else if(year==2)
    {
        a=pow((1+0.0243),year)*b;
    }
    else if(year>=3&&year<5)
    {
        a=pow((1+0.0270),year)*b;
    }
    else if(year>=5&&year<8)
    {
        a=pow((1+0.0288),year)*b;
    }
    else if(year>=8)
    {
        a=pow((1+0.0300),year)*b;
    }
    printf("%.2f",a);
    return 0;
}
//s3.2成绩转换
int main()
{
    int score;
    scanf("%d",&score);
    if(score<0||score>100)
    {
        printf("input error!");
    }
    else if(score<=100&&score>=90)
    {
        printf("A");
    }
    else if(score<90&&score>=80)
    {
        printf("B");
    }
    else if(score<80&&score>=70)
    {
        printf("C");
    }
    else if(score<70&&score>=60)
    {
        printf("D");
    }
    else if(score<60&&score>=0)
    {
        printf("E");
    }
    return 0;
}
//s3.3.大小写英文字母转换
int main()
{
    char ch;
    ch=getchar();
    if(ch>='A'&&ch<='Z')
    {
        ch=ch+32;
        printf("%c %d",ch,ch);
    }
    else if(ch>='a'&&ch<='z')
    {
        ch=ch-32;
        printf("%c %d",ch,ch);
    }
    else
    {
        printf("%c %d",ch,ch);
    }
    return 0;

}
//S3.4字符判断
int main()
{
    char ch;
    ch=getchar();
    if(ch==' ')
    {
        printf("space");
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("digit");
    }
    else if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        printf("letter");
    }
    else
    {
        printf("other");
    }
    return 0;
}
//S4.1.完数
int main()
{
    int i,j,s;
    for(i=2;i<=1000;i++)
    {
        s=0;
        for(j=1;j<i;j++)
        {
            if((i%j)==0)
            {
                s=s+j;
            }
        }
        if(s==i)
        {
            printf("%d\n",i);
        }

    }
    return 0;
}
//s4.2.求位数
int main()
{
    int a,b;
    int count=0;
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        b=b/10;
        count++;
    }
    printf("count=%d\n",count);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        printf("%d ",b);
    }
    return 0;

}
//s4.3.用循环计算1！+2！+....（2*n-1）！
int main()
{
    int n,i,j,term,sum=0;
    scanf("%d",&n);
    for(i=1;i<=((2*n)-1);i=i+2)
    {
        term=1;
        for(j=1;j<=i;j++)
        {
            term=term*j;
        }
        sum=sum+term;
    }
    printf("%d",sum);
    return 0;
}
//s4.4求序列之和
int main()
{
    int a=1,b=2;
    int i,c;
    float sum=0;
    for(i=1;i<=20;i++)
    {
        sum=sum+(float)b/a;
        c=a;
        a=b;
        b=c+b;
    }
    printf("%.4f",sum);
}
//s4.5求a，b之间的所有素数
int main()
{
    int a,b,c,e=0;
    int i,j,k=0;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    for(i=a;i<b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                e=1;
            }
        }
        if(e==0)
        {
            printf("%d ",i);
            k++;
        }
        if(k==5)
        {
            printf("\n");
            k=0;
        }
        e=0;
    }
}
int main()
{
    double pi,term=1,fact=1,sum=0;
    int i,count=0,n=0;
    for(i=1;fabs(term)>=1e-4;i++)
    {
        fact=(2*n)+1;
        if(i%2==0)
        {
            fact=-fact;
        }
        term=1.0/fact;
        sum=sum+term;
        n++;
        count++;
    }
    printf("pi=%f,count=%d",sum*4,count);
}
int panduan(int a[],int n,int *count);
int panduan(int a[],int n,int *count)
{
    int i=0;
    for(i;i<10;i++)
    {
        if(a[i]>n)
            (*count)++;
    }
}
int main()
{
    int a[10],count=0,n,i,sum=0,m;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    n=sum/10;
    panduan(a,n,&count);
    printf("%d",count);
}
void Z_daoxu(int a[],int *n);
int main()
{
    int a[10],i;
    int n[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    Z_daoxu(a,n);
    for(i=0;i<10;i++)
    {
        printf("%d ",n[i]);
    }


return 0;
}
void Z_daoxu(int a[],int n[])
{
    int i,j;
    for(i=0,j=9;i<10&&j>=0;i++,j--)
    {
        n[j]=a[i];
    }
}*/
///////////////////////////////////////////////
//题目：求素数个数
//目的：通过对比同一个问题不同解法的绝对执行时间，体会如何设计好的算法。
//内容：编写一个程序，求1-n的素数个数，至少给出两种解法。对于相同的n给出这两种解法的结果和求解时间，并用相关数据进行测试。
//编写人：韩乐凡

int ss1(int n) //用函数ss1,ss2判断是否是素数
{
    int i;
    if(n<=1)
        return 0;
    else
    {
        for(i=2;i<n;i++)
      {
        if(n%i==0)
        {
            return 0;
        }
      }
      return 1;
    }
}
int ss2(int n)
{
    int i;
    if(n<=1)
        return 0;
    else
    {
        for(i=2;i<=sqrt(n);i++)
      {
        if(n%i==0)
        {
            return 0;
        }
      }
      return 1;
    }
}

int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(ss1(i))
          count++;
    }
    printf("%d",count);
return 0;
}










