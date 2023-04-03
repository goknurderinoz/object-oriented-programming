// C++ program to demonstrate the working of public inheritance

#include <iostream>
#include <string.h>
using namespace std;

class Player{
    private:
        int age;
        char name[40], team[40];
    public:
        void display() {
            cout<<"Player name is:"<<name<<endl;
            cout<<"Team name is:"<<team<<endl;
            cout<<"Player age is:"<<age<<endl;
        }
        void intput() {
            cout<<"Enter player name:"<<endl;
            cin>>name;
            cout<<"Enter player team:"<<endl;
            cin>>team;
            cout<<"Enter player age:"<<endl;
            cin>>age;
        }
            
        void change(char n[40], char t[40], int a) {
            strcpy(name, n);
            strcpy(team, t);
            age = a;
        }
};

main() {
    Player p;
    int choice;
    do{
        cout<<"------Main Menu---------"<<endl;
        cout<<"1:- Input Player Data"<<endl;
        cout<<"2:- Display Player Data"<<endl;
        cout<<"3:- Change Player Data"<<endl;
        cout<<"4:- Exit"<<endl;
        cout<<"Enter any Choice"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                p.intput();
                break;
            case 2:
                p.display();
                break;
            case 3:
                p.change("shaid", "pakistan", 40);
                break;
            case 4:
                exit(1);
                break;
            default:
                cout<<"You enter invalid number!"<<endl;
        }
    }while(1);
    
}
