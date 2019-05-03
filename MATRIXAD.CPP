#include<iostream.h>
#include<conio.h>

class matrix
{
 private:
 int m;
 float a[3][3],b[3][3],c[3][3];
  public:
  void get_matrix();
  void add();
  void print_matrix();
  }    ;

 void matrix::get_matrix()
 {   int i,j;
 cout<<"Enter the order of square matrix i.e mxm m=";
 cin>>m;
 cout<<"Enter the first Matrix\n";
 for(i=0;i<m;i++)
 {
  for(j=0;  j<m;  j++)
  {
   cin>>a[i][j];
   }
  }
  cout<<"Enter the second Matrix\n";
  for(i=0;i<m;i++)
  {
   for(j=0;j<m;j++)
   {
    cin>>b[i][j];
  }
 }
}
void matrix::add()
{
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<m;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
  }
 }
}

void matrix::print_matrix()
{
 cout<<"The addition of matrix is :"<<endl;
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<m;j++)
   {
    cout<<c[i][j]<<"\t";
    }
    cout<<endl;
    }
    }
void main()
{
 clrscr();
 matrix A ;
 A.get_matrix();
 A.add();
 A.print_matrix();
 getch();
}

