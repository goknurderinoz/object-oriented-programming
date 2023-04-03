#include <iostream>
#include <string.h>
using namespace std;

class Test{
    private:
        int n = 10;
    public:
        void show(int x){
            n=x;
            cout<<"N: "<<n<<endl;
        }
};

int main() {
/*  const int n=10;
    const int x=n+10;
    cout<<"The value of n:"<<n<<endl;
    cout<<"The value of x:"<<x<<endl; */
    const int x = 11;
    Test T;
    T.show(x);

    return 0;
}