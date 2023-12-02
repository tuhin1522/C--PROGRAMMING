#include <bits/stdc++.h>
using namespace std;

class Student {
    static const int maxS=10;
    string stName[maxS];
    string ftName[maxS];
    string mtName[maxS];
    int roll[maxS];
    string session[maxS];
    string address[maxS];
    int numS=0;

public:
    void AddStudentInfo(string name, string f, string m,int rol, string sess, string addr) {
        if (numS < maxS) {
            stName[numS]=name;
            ftName[numS]=f;
            mtName[numS]=m;
            roll[numS]=rol;
            session[numS]=sess;
            address[numS]=addr;
            numS++;
        }
    }

    void TotalStudents() {
        cout<<"Total Students : "<<numS<<endl;
        cout<<endl;
    }

    void DelInfo(int rol) {
        for (int i=0;i<numS;i++) {
            if (roll[i] == rol) {
                for (int j=i;j<numS-1;j++) {
                    stName[j]=stName[j + 1];
                    ftName[j]=ftName[j + 1];
                    mtName[j]=mtName[j + 1];
                    roll[j]=roll[j + 1];
                    session[j]=session[j + 1];
                    address[j]=address[j + 1];
                }
                numS--;
                cout<<"Student with Roll Number "<<rol<<" deleted."<<endl;
                return;
            }
        }
        cout<<"Student with Roll Number "<<rol<<" not found."<<endl;
    }

    void Display() {
        cout<<"Student Information:"<<endl;
        for (int i=0; i < numS; ++i) {
            cout<<"Name: "<<stName[i]<<endl;
            cout<<"Father's Name: "<<ftName[i]<<endl;
            cout<<"Mother's Name: "<<mtName[i]<<endl;
            cout<<"Roll Number: "<<roll[i]<<endl;
            cout<<"Session: "<<session[i]<<endl;
            cout<<"Address: "<<address[i]<<endl;
            cout<<"-----------------------"<<endl;
            cout<<endl;
        }
    }
};

int main() {
    Student stList;

    while (true) {
        cout<<"Options: "<<endl;
        cout<<"1. Add student info"<<endl;
        cout<<"2. Display total number of students"<<endl;
        cout<<"3. Delete a student info"<<endl;
        cout<<"4. Display all student info"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your number: ";

        int n;
        cin>>n;
        switch (n) {
            case 1: {
                string stName, ftName, mtName, session, address;
                int roll;
                cout<<"Enter Student Name: ";
                cin>>stName;
                cout<<"Enter Father Name: ";
                cin>>ftName;
                cout<<"Enter Mother Name: ";
                cin>>mtName;
                cout<<"Enter Roll Number: ";
                cin>>roll;
                cout<<"Enter Session: ";
                cin>>session;
                cout<<"Enter Address: ";
                cin.ignore();
                getline(cin, address);
                stList.AddStudentInfo(stName, ftName, mtName, roll, session, address);
                break;
            }
            case 2:
                stList.TotalStudents();
                break;
            case 3: {
                int roll;
                cout<<"Enter the Roll Number : ";
                cin>>roll;
                stList.DelInfo(roll);
                break;
            }
            case 4:
                stList.Display();
                break;
            case 5:
                return 0;
            default:
                cout<<"Invalid number. Please try again."<<endl;
        }
    }

    return 0;
}