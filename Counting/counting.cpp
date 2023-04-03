// C++ program to demonstrate the working of public inheritance

#include <iostream>
#include <string.h>
using namespace std;

class Counter {
    private:
    static int count;
    public:
        Counter(){
            count++;
            ShowObject();
        }
        void ShowObject() {
            system("cls");
            cout<<"Total object is:"<<count<<endl;
        }
};
int Counter::count = 0;

int main() {
    // Write C++ code here
    Counter C1,C2,C3;

    return 0;
}
