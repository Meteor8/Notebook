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
        printf("�ļ��򿪴���\n");
    }
    output1=(struct people*)malloc(sizeof(struct people));
    temp=(struct people*)malloc(sizeof(struct people));
    printf("������������");
    scanf("%s",temp->name);
    printf("������ID:");
    scanf("%d",&temp->ID);
    fwrite(temp,sizeof(struct people),1,file1);
    fclose(file1);

    if((file1=fopen("c:\\test1.txt","r+"))==NULL)
    {
        printf("�ļ��򿪴���\n");
    }
    fread(output1,sizeof(struct people),1,file1);
    printf("��������ǣ�\n");
    printf("������%s\tID��%d",output1->name,output1->ID);
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
        printf("������Ҫ���ļ���·����");
        gets(fileadress);

            if((p_file1=fopen(fileadress,"r"))==NULL)
        {
            printf("��ַ����������������룡\n");
        }
    }while(p_file1==NULL);

    printf("��ȷ��Ҫ���ļ���%s��\n",fileadress);  //��ȡ�ļ�
    printf("�ļ��򿪳ɹ������ڶ�ȡ��...\n");
    printf("�ĵ�����Ϊ��");
    while((c=fgetc(p_file1))!=EOF)
    {
        putchar(c);
    }
    putchar('\n');
    fclose(p_file1);

    printf("������Ҫ��ӵ����֣�");
    if((p_file1=fopen(fileadress,"a"))==NULL) //�������
    {
        printf("�ļ��򿪴���\n");
    }
    while((c=getchar())!='\n')
    {
        fputc(c,p_file1);
    }
    fclose(p_file1);


    if((p_file1=fopen(fileadress,"r"))==NULL) //��ȡ�ļ�
    {
        printf("�ļ��򿪴���\n");
    }
    printf("�ĵ������޸�Ϊ��");
    while((c=fgetc(p_file1))!=EOF)
    {
        putchar(c);
    }
    fclose(p_file1);
*/

    return 0;
}
