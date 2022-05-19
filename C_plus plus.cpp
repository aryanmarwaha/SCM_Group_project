include <iostream>
using namespace std;
class RECT
{ 
<<<<<<< HEAD

    public:    //edited by arman
=======
// edited by Aryan Marwaha
    public:
>>>>>>> f6194cff1355ff89a7a8ffe46708d94c52349541
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
