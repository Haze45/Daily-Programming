#include<iostream>
using namespace std;
class fictorial
{
    int a;
     fact=1
    public:
    {
        void input();
        void calculate();
        void output();
    }
    void fictorial::input()
    {
        cout << "Enter the number = \n"
        cin << a;
    }
    void fictorial::calculate()
    {
       
        for(int i = 1; i <=a; i++)
        {
            fact=fact*i;
        }
    }
    void fictorial::output()
    {
        cout << "fictorial = "<<fact<<endl;
    }
};

int main()
{
    fictorial x;
    x.input();
    x.calculate();
    x.output();
}