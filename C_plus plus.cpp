#include <iostream>
using namespace std;
class RECT
{ 
// edited by Aryan Marwaha
    public:
    void area()
    {
        cout<<"Area of rectangle"<<endl;
    }
};

class SQUARE
{
    public:
    void area()
    {
        cout<<"Area of square";
    }
};

class SHAPES : public RECT,public SQUARE    
{
};

int main()    
{ // This file is created by aryan
    SHAPES obj;
   //doing edit number 2
    obj.RECT::area(); 
    obj.SQUARE::area(); 
}
