#include<iostream.h>
#include<conio.h>
#include<stdio.h>


struct stud
{
char name[100];
int roll,ph,ch,math;
};

void main()
{
struct stud s[100];
int n,i;
cout<<"Enter no of stud";
cin>>n;

for(i=0;i<=n-1;i++)
{
cout<<"Enter name,roll and marks";
gets(s[i].name);
cin>>s[i].roll>>s[i].ph>>s[i].ch>>s[i].math;
cout<<"Name\tRollNo\tPh\tCh\tMath\n";
cout<<"====================="<<endl;
for(i=0;i<=n-1;i++)
{
cout<<s[i].name<<"\t"<<s[i].roll<<"\t"<<s[i].ph<<"\t"<<s[i].ch<<"\t"<<s[i].math<<endl;
}
getch();
}