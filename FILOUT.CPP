#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{ofstream filout;
filout.open("marks.txt", ios::out);
char ans='y';
int rollno; float marks;
while(ans=='y'||ans=='Y')
{ cout<<"\nEnter Rollno.: ";
cin>>rollno;
cout<<"\nEnter Marks: ";
cin>>marks;
filout<<rollno<<'\n'<<marks<<'\n';
cout<<"\n Want to enter more records?(y/n)... ";
cin>>ans;
}
filout.close();
getch();
}