#include <iostream>
using namespace std;

class Distance{
    public:
        Distance() : km(0), hr(0){

        }
        void get() {
            cout<<"Enter the distance in KiloMeter:"<<endl;
            cin>>km;
            cout<<"Enter Hours of Distance:"<<endl;
            cin>>hr;
        }
        void show() {
            cout<<"Your Traveled is "<<km<<" km "<<hr<<" Hours."<<endl;
        }
        Distance TotalDistance(Distance pas) {
            Distance t;
            t.km = km + pas.km;
            t.hr = hr + pas.hr;
            //cout<<"Total Traveled is "<<t.km<<" KiloMeter in "<<t.hr<<" Hours."<<endl;
            return t;
        }
    private:
        int km,hr;
};

int main() {
    Distance youDis, myDis, Res;
    cout<<"---------Your Input of Distance-----------"<<endl;
    youDis.get();
    youDis.show();
    cout<<"---------My Input of Distance-----------"<<endl;
    myDis.get();
    myDis.show();
    cout<<"---------Total Output of Distance-----------"<<endl;
    Res = youDis.TotalDistance(myDis);
    cout<<"Total Traveled is ";
    Res.show();
    return 0;
}