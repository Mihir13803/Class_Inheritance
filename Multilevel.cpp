/*  
Exp_14
PRN - 22070123147
Part 4
Multilevel Inheritence
*/
#include<iostream>
using namespace std ;
class Pranav
{
    public:
    Pranav()
    {
        cout<<"This is Pranav  \n";
    }
};
class name: public Pranav{

};
class Fullname : public name{

};
int main()
{
    Fullname obj;
    return 0;

};
/*Output
This is Pranav  
*/
