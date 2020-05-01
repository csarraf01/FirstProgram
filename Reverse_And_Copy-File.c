#include<stdio.h>
int main()
{
      FILE *fp,*fp1;

      char ch,ch1;
      int i,pos;
      fp=fopen("input.txt","r");
      fp1=fopen("abc.txt","w");
     // PRINTS THE CONTENTS IN REVERSE ORDER
      if(fp==NULL)
      {
            printf("File does not exist..");
      }
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      i=0;
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            ch=fgetc(fp);
            printf("%c",ch);
      }


      //COPIES THE CONTENT OF fp INTO fp
       while((ch1 = getc(fp)) != EOF)
       {
        putc(ch1, fp1);
       }

      fclose(fp);
      fclose(fp1);
      getch();
}
