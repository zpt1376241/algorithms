//#define ABC
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int code[8][1<<8];//代码中用到了<<，代表移位，比如1<<len，就代表1的二进制表示向左移动len位，结果为1*2^len
int readchar()
{
    while(1)
    {
        int ch=getchar();
        if(ch!='\n'&&ch!='\r')
            return ch;
    }
}
int readint(int c)  //将输入的二进制数转化为十进制
{
    int v=0;
    while(c--)
        v=v*2+readchar()-'0';
    return v;
}
int readcodes()     //读取编码头code
{
    memset(code,0,sizeof(code));
    code[1][0]=readchar();
    for(int len=2;len<=7;len++)
    {
        for(int i=0;i<(1<<len)-1;i++)
        {
            int ch=getchar();
            if(ch==EOF) return 0;   //如果输入为EOF，结束输入
            if(ch=='\n'||ch=='\r')   return 1;  //输入\n||\r代表编码头输入完成
            code[len][i]=ch;    //i代表的就是[len][value]中的value的值
        }
    }
    return 1;
}
int main()
{
    #ifdef  ABC
    freopen("C:/test/in.txt","r",stdin);
    freopen("C:/test/out.txt","w",stdout);
    #endif
    while(readcodes())
    {
        while(1)
        {
            int len=readint(3);
            if(len==0)  break;      //三位都为0表示编码结束
            while(1)
            {
                int v=readint(len);
                if(v==(1<<len)-1)   break;   //各位都为1表示小节的结束
                putchar(code[len][v]);
            } 
        }
        putchar('\n');  //printf("\n");
    }
}