//#define ABC
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int code[8][1<<8];//�������õ���<<��������λ������1<<len���ʹ���1�Ķ����Ʊ�ʾ�����ƶ�lenλ�����Ϊ1*2^len
int readchar()
{
    while(1)
    {
        int ch=getchar();
        if(ch!='\n'&&ch!='\r')
            return ch;
    }
}
int readint(int c)  //������Ķ�������ת��Ϊʮ����
{
    int v=0;
    while(c--)
        v=v*2+readchar()-'0';
    return v;
}
int readcodes()     //��ȡ����ͷcode
{
    memset(code,0,sizeof(code));
    code[1][0]=readchar();
    for(int len=2;len<=7;len++)
    {
        for(int i=0;i<(1<<len)-1;i++)
        {
            int ch=getchar();
            if(ch==EOF) return 0;   //�������ΪEOF����������
            if(ch=='\n'||ch=='\r')   return 1;  //����\n||\r�������ͷ�������
            code[len][i]=ch;    //i����ľ���[len][value]�е�value��ֵ
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
            if(len==0)  break;      //��λ��Ϊ0��ʾ�������
            while(1)
            {
                int v=readint(len);
                if(v==(1<<len)-1)   break;   //��λ��Ϊ1��ʾС�ڵĽ���
                putchar(code[len][v]);
            } 
        }
        putchar('\n');  //printf("\n");
    }
}