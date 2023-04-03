#include <iostream>
#include <string.h>
using namespace std;

class Counter{
    private:
        static int count;
    public:
        Counter(){
            count++;
        }
        void showCount() {
            cout<<"You created "<<count<<" object of this class"<<endl;
        }
};

int Counter::count = 0;

int main(){
    Counter obj1, obj2, ob3, obj4, obj5;
    obj1.showCount();
    Counter a, b, c, d;
    a.showCount();
}