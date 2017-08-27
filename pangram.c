#include<stdio.h>

void main()
{
char PangramString[100];
int i,used[26]={0},total=0;

 

printf(“\n Enter the String:\n”);
scanf(“%s”,PangramString);

for(i=0;PangramString[i]!=’\0′;i++)
{
  if(‘a'<=PangramString[i] &&PangramString[i]<=’z’)
  {
    total+=!used[PangramString[i]-‘a’];
    used[PangramString[i]-‘a’]=1;
  }
  else if(‘A'<=PangramString[i] &&PangramString[i]<=’Z’)
  {
    total+=!used[PangramString[i]-‘A’];
    used[PangramString[i]-‘A’]=1;
  }
}

if(total==26)
  {
    printf(“\n The Entered String is a Pangram String.”);
  }
else
  {
    printf(“\n The Entered String is not a Pangram String.”);
  }

}
