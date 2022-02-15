#include <iostream>  
using namespace std; 

class student
{
    private: 

    char name[12], fname[12];
    int rollno;

  public:

  int input()
   {
     cin>>rollno;
     cin>>name;
     cin>>fname;
     return 0;
    }

      int show()
       {
         cout<<rollno;
         cout<<name;
         cout<<fname;
         return 0;

        }
};
int main()  
{
    student o1,o2;
    o1.input();
    o2.input();
    o1.show();
    o2.show();
  return 0;
}