#include <iostream>
#include <string.h>
using namespace std;

class Counter{
    private:
        static int count;
    public:
        static void show() {
            cout<<"I am static member function"<<endl;
        }
};

int main(){
    Counter::show();
}