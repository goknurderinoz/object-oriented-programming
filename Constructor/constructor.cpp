#include <iostream>
using namespace std;

class Test{
    public:
        Test(){
            cout<<"Constructor is called..."<<endl;
        }
        Test(int n) {
            num = n;
            cout<<"The value of number is:"<<num<<endl;
        }
        Test(float a, int n){
            avg = a;
            num = n;
            cout<<"Avg :"<<avg<<endl;
            cout<<"Num :"<<num<<endl; 
        }
    private:
        int num;
        float avg;
};

int main() {
    //The constructor is called when the object is created.
    Test T1(), T2(7), T3(7.9, 8);

    return 0;
}