#include<stdio.h>
int main()
{
      FILE *fp;
      char ch,fname[30];
      int i=0,pos;
       printf("Enter the filename\t");
       gets(fname);
      fp=fopen("fname","r");
      if(fp==NULL)
      {
            printf("File does not exist..");
      }
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      printf("Current postion is %d\n",pos);
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            //printf("%c",fgetc(fp));
            ch=fgetc(fp);
            printf("%c",ch);
      }
      fclose(fp);
      
      return 0;
}
