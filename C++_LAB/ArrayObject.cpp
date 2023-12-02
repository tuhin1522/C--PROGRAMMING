#include<bits/stdc++.h>
using namespace std;

const int max_st = 10;

class BScStudentList {
public:
    struct Student {
        string stName;
        string ftName;
        string mtName;
        int roll;
        string session;
        string address;
    };

    Student st[max_st];
    int numSt;
    BScStudentList(){
        numSt=0;
    }

    void AddStudentInfo() {
        if (numSt < max_st) {
            Student newSt;

            cout<<"Enter Student Name: ";
            cin >> newSt.stName;

            cout<<"Enter Father's Name: ";
            cin >> newSt.ftName;

            cout<<"Enter Mother's Name: ";
            cin >> newSt.mtName;

            cout<<"Enter Roll Number: ";
            cin >> newSt.roll;

            cout<<"Enter Session: ";
            cin >> newSt.session;

            cout<<"Enter Address: ";
            cin >> newSt.address;

            st[numSt++] = newSt;
            cout<<"Student information added successfully."<<endl;
        } else {
            cout<<"Maximum number of st reached. Cannot add more st."<<endl;
        }
    }

    void DisplayTotal() {
        cout<<"Total number of students: "<<numSt<<endl;
    }

    void DeleteStudentInfo(int rol) {
        for (int i = 0; i < numSt; ++i) {
            if (st[i].roll == rol) {
                for (int j = i; j < numSt - 1; ++j) {
                    st[j] = st[j + 1];
                }
                numSt--;
                cout<<"Student with Roll Number "<<rol<<" deleted successfully."<<endl;
                return;
            }
        }
        cout<<"Student with Roll Number "<<rol<<" not found."<<endl;
    }

    void DisplayAllInfo() {
        if (numSt == 0) {
            cout<<"No student information available."<<endl;
        } else {
            cout<<"Student Information:"<<endl;
            for (int i = 0; i < numSt; ++i) {
                cout<<"Student "<<i + 1<<":\n";
                cout<<"Name: "<<st[i].stName<<endl;
                cout<<"Father's Name: "<<st[i].ftName<<endl;
                cout<<"Mother's Name: "<<st[i].mtName<<endl;
                cout<<"Roll Number: "<<st[i].roll<<endl;
                cout<<"Session: "<<st[i].session<<endl;
                cout<<"Address: "<<st[i].address<<endl;
                cout<<"--------------------------"<<endl;
            }
        }
    }
};

int main() {
    BScStudentList studentList;

    while (true) {
        cout<<"\nOptions:\n";
        cout<<"1. Add Student Info\n";
        cout<<"2. Display Total\n";
        cout<<"3. Delete Student Info\n";
        cout<<"4. Display All Info\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                studentList.AddStudentInfo();
                break;
            case 2:
                studentList.DisplayTotal();
                break;
            case 3: {
                int rol;
                cout<<"Enter Roll Number to delete: ";
                cin >> rol;
                studentList.DeleteStudentInfo(rol);
                break;
            }
            case 4:
                studentList.DisplayAllInfo();
                break;
            case 5:
                return 0;
            default:
                cout<<"Invalid choice. Please enter a valid option."<<endl;
        }
    }

    return 0;
}
