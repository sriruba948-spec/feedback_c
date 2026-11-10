#include<stdio.h>
int main()
{
char ch;
FILE *fp;

fp=fopen("feedback.txt","w");

if(fp==NULL)
{
printf("file opening failed\n");
return 0;
}
fprintf(fp,"feedback about c programming\n");
fprintf(fp,"1. easy to learn and understand\n");
fprintf(fp,"2.program runs very quickly\n");
fprintf(fp,"3.It is a protable programming language\n");
fprintf(fp,"4.It uses memory efficiently\n");
fprintf(fp,"5.It is suitable for developing system software\n");
fclose(fp);
fp=fopen("feedback.txt","a");
if(fp==NULL)
{
printf("files opening failed\n");
return 0;
}

fprintf(fp,"feedback about the c sir");
fprintf(fp,"our c programming sir teaches us very well\n");
fprintf(fp,"he explains every concept clearly and patiently\n");
fprintf(fp,"his teaches makes programming easy and intresting\n");
fprintf(fp,"he encourage us to practise coding and improve our skills\n");
fprintf(fp,"we are happy to learn c programming from him\n");
fclose(fp);
fp=fopen("feedback.txt","r");
if(fp==NULL)
{
printf("files opening failed\n");
return 0;
}
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
return 0;
}