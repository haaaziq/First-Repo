//Creating a C++ Program
#include<iostream>
using namespace std;

class GitHub{                                              //Creating class named GitHub
    public:                                                //Public Access
          void show(){                                     //member function show() 
            cout<<"This is a show function of class Github"<<endl;
          }
};

int main(){             //main() function
  GitHub obj1;          //creating Object of class
  obj1.show();          //show() function called using obj1
  cout<<"printing this in 'testing' branch"<<endl;

return 0;
}
