#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int Int Vector;
void bar(void)
{
printf("Augh!I've been hacked!\n");
}
void InsertInt(unsigned index,unsigned longvalue)
{
printf("Writing memory at %p\n",&(IntVector [index]]);
Int Vector[index]=value;
}
bool Init vector(int size)
{
Int Vector=(int*)malloc(sizeof(int)*size);
printf("Address of Int Vector is %p\n",Int Vector);
if(Int Vector==NULL)
return false;
}
int main(int argc,char*argv[])
{
unsigned long index,value;
if(argc!=3)
{
printf("usage is %s [index][value]\n");
return-1;
}
printf("Address of bar is %p\n",bar);
if(!Init Vector(Oxffff))
{
printf("cannot intialize vector!\n");
return-1;
}
index=ato1(argv[1]);
Value=ato1(argv[2]);
InsertInt(index,value);
return 0;
}
