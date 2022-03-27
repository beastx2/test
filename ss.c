#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX 11

char l[10];
int count = 0;

struct symb{
  int add;
  char lable[10];

}sy[11];

int create(int num){
  int key;
  key = num %MAX;
  return key;
}

void lprob(int a[MAX],int key,int num){
  int flag = 0;
  int i;
  if(count == MAX)
  {
    printf("Hsh table is full....\nExisting...\n");
    exit(1);
  }
  else
  {
    count ++;
    flag=0;
    for(i=key;i<MAX;i++)
    {
      if(a[i]==0)
      {
        a[i] =num;
        flag=1;
        s[i].add=num;
        strcpy(sy[i].label,l)
        break;
      }
    }
    if(flag ==0)
    {
      for(i=key;i<MAX;i++)
      {
        if(a[i]==0)
        {
          a[i] =num;
          flag=1;
          s[i].add=num;
          strcpy(sy[i].label,l)
          break;
        }
      }
    }
  }
}

void display(int a[MAX])
{
  int i;
  printf("\nthe sumbol table");
  printf("\n************");
  printf("\nhash values\tAddress\tlabel");
  for(i=0;i<MAX;i++)
  {
    printf("\n%d\t %d\t %s",i,sy[i].add,sy[i].label);
  }
}

void search()
{
  char la[10];
  int i,flag=0,address;
  printf("enter label");
  scanf("%s",la);
  for(i=0;i<MAX;i++)
  {
    if(strcmp(la,sy[i].label)==0)
    {
      address = sy[i].add;
      flag=1;
      break;
    }
  }
  if(flag==1)
  {
    printf("the label was found at address %d.\n",address);
  }
  else
  {
    printf("label was not found in symbol table.\n");
  }
}

void modify()
{
  int address,flag=0,i;
  char la[10],str[100];
  printf("enter address");
  scanf("%d",&address);
  printf("enter new label");
  scanf("%s",la);
  for(i=0;i<MAX;i++)
  {
    if(sy[i].add == address)
    {
      strcpy(sy[i].label,la);
      flag=1;
      printf("modifiaction compleye.\n");
      break;
    }
  }
  if(flag==0)
  {
    printf("address not found.\n");
  }
}

void main()
{
  int a[MAX],num,key,i,ch;
  char ans='y';
  for(i=0;i<MAX;i++)
    a[i]=0
  do
  {
    printf("\nsymbol table menu\n1.create symbol table\n2.display\n3.search in symbol\n4.modify symbol\n5.exit\nenter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        while(ans='y')
        {
          printf("\nenter address");
          key=create(num);
          printf("\nenter label");
          scanf("%s",l);
          lprob(a,key,num);
          printf("\ndo yu want to continue(y/n)");
          scanf("%c",%ans);
        }
        ans='y';
        break;
      case 2:
        display(a);
        break;
      case 3:
        search();
        break;
      case 4:
        modify();
        break;
      case 5:
        exit(0);
    }
  }
  while(ch<=5&&ch!=0);
}
