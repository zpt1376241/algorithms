#include<stdio.h>
#include<string.h>
char s[15][15];
int num[15][15];
int main(){
    int r,c;
    int first=0;int count=0;
    while(scanf("%d",&r)==1&&r){
        scanf("%d",&c);
        for(int i=0;i<r;i++) scanf("%s",s[i]);

        memset(num,0,sizeof(num));
        int number=1;
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            if(s[i][j]!='*'&&(i-1<0||j-1<0||s[i][j-1]=='*'||s[i-1][j]=='*'))num[i][j]=number++;
            if(s[i][j]=='*')num[i][j]=-1;
        }
        //Num[]�У�-1��ʾ�ڸ����ֱ�ʾ��ʼ��0��ʾû�����ֵĿհ׸� 

        if(first)printf("\n");
        first=1;
        printf("puzzle #%d:\nAcross\n",++count);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if((j-1<0||num[i][j-1]==-1)&&(num[i][j]>0)){
                    printf("%3d.",num[i][j]);//������,��������İ����������֣�
                    //һ����ǰ��û�������˵ģ���j-1<0����һ����ǰ���Ǻڸ��ӵģ�                   
                    for(int k=j;num[i][k]!=-1&&k<c;k++) printf("%c",s[i][k]);
                    printf("\n");
                }
            }
        }
        printf("Down\n");//ͬ������ķ���������������Ʋ���
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if((i-1<0||num[i-1][j]==-1)&&(num[i][j]>0)){
                    printf("%3d.",num[i][j]);
                    for(int k=i;num[k][j]!=-1&&k<r;k++) printf("%c",s[k][j]);
                    printf("\n");
                }
            }
        }   
    }       
} 