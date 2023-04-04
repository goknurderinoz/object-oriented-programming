#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
    char name[40], city[40];
public:
    void input_data();
    void show_data();
    
};

class std_marks{
    private:
        float math, comp, phy, total, avg;
    public:
        void input_marks();
        void show_marks();
};

class result:public student, public std_marks{
    public:
        void show_result(){
            cout<<"----------------------------------"<<endl;
            cout<<"The complete Result is"<<endl;
            cout<<"----------------------------------"<<endl;
        }
};

void student::input_data(){
    cout<<"Enter Student Name:"<<endl;
    cin>>name;
    cout<<"Enter Student City:"<<endl;
    cin>>city;
}

void student::show_data(){
    cout<<"The name is:"<<name<<endl;
    cout<<"The city is:"<<city<<endl; 
}

void std_marks::input_marks(){
    cout<<"Enter Computer Marks:"<<endl;
    cin>>comp;
    cout<<"Enter Math Marks:"<<endl;
    cin>>math;
    cout<<"Enter Physics Marks:"<<endl;
    cin>>phy;
    total = comp+math+phy;    
    avg = total/3.0;
}

void std_marks::show_marks(){
    cout<<"The Computer Marks is:"<<comp<<endl;
    cout<<"The Math mark is:"<<math<<endl; 
    cout<<"The Physics mark is:"<<phy<<endl; 
    cout<<"Total marks:"<<total<<endl; 
    cout<<"Average:"<<avg<<endl; 
}

main(){
    result res;
    res.input_data();
    res.input_marks();
    res.show_result();
    res.show_marks();
}
