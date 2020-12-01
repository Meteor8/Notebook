#include <stdio.h>
#include <stdlib.h>

struct people
{
   char name[30];
   int ID;
}*output1,*temp;


int main()
{
    FILE *file1;
    if((file1=fopen("c:\\test1.txt","w+"))==NULL)
    {
        printf("文件打开错误！\n");
    }
    output1=(struct people*)malloc(sizeof(struct people));
    temp=(struct people*)malloc(sizeof(struct people));
    printf("请输入姓名：");
    scanf("%s",temp->name);
    printf("请输入ID:");
    scanf("%d",&temp->ID);
    fwrite(temp,sizeof(struct people),1,file1);
    fclose(file1);

    if((file1=fopen("c:\\test1.txt","r+"))==NULL)
    {
        printf("文件打开错误！\n");
    }
    fread(output1,sizeof(struct people),1,file1);
    printf("您输入的是：\n");
    printf("姓名：%s\tID：%d",output1->name,output1->ID);
    fclose(file1);

/*
    FILE *fp;
    char c;
    char file[30];
    printf("input directory and file:");
    gets(file);
    if((fp=fopen(file,"w")) == NULL)
    {
        printf("Open error on reading\n");
        exit(0);
    }
    while((c=getchar())!='\n')
    {
        fputc(c,fp);
    }
    fclose(fp);
    if((fp=fopen(file,"r")) == NULL)
    {
        printf("Open error on reading\n");
        exit(0);
    }
    while((c=fgetc(fp)!=EOF))
        putchar(c);
    fclose(fp);
*/
/*
    FILE * p_file1;
    char c;
    char fileadress[30];
    do
    {
        printf("请输入要打开文件的路径：");
        gets(fileadress);

            if((p_file1=fopen(fileadress,"r"))==NULL)
        {
            printf("地址错误错误！请重新输入！\n");
        }
    }while(p_file1==NULL);

    printf("您确认要打开文件：%s吗？\n",fileadress);  //读取文件
    printf("文件打开成功！正在读取中...\n");
    printf("文档内容为：");
    while((c=fgetc(p_file1))!=EOF)
    {
        putchar(c);
    }
    putchar('\n');
    fclose(p_file1);

    printf("请输入要添加的文字：");
    if((p_file1=fopen(fileadress,"a"))==NULL) //添加文字
    {
        printf("文件打开错误！\n");
    }
    while((c=getchar())!='\n')
    {
        fputc(c,p_file1);
    }
    fclose(p_file1);


    if((p_file1=fopen(fileadress,"r"))==NULL) //读取文件
    {
        printf("文件打开错误！\n");
    }
    printf("文档内容修改为：");
    while((c=fgetc(p_file1))!=EOF)
    {
        putchar(c);
    }
    fclose(p_file1);
*/

    return 0;
}
