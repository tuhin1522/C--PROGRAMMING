#include <bits/stdc++.h>
using namespace std;

const int max_st = 30;
const int mx_size = 10;
int numSt = 0;

class BScStudentList {
    char stN[max_st];
    char ftN[max_st];
    char mtN[max_st];
    int roll;
    char sess[max_st];
    char add[max_st];

public:
    void getdata(void);
    void putdata(void);
    void DeleteStudentInfo(int rol, BScStudentList m[]);
    void TotalStudents();
};

void BScStudentList::getdata(void) {
    if (numSt < mx_size) {
        cout<<"Enter BScStudent Name: ";
        cin >> stN;

        cout<<"Enter Father's Name: ";
        cin >> ftN;

        cout<<"Enter Mother's Name: ";
        cin >> mtN;

        cout<<"Enter Roll Number: ";
        cin >> roll;

        cout<<"Enter Session: ";
        cin >> sess;

        cout<<"Enter Address: ";
        cin >> add;

        numSt++;
    } else {
        cout<<"Maximum number of students reached. Cannot add more students."<<endl;
    }
}

void BScStudentList::putdata(void) {
    cout<<"Name: "<<stN<<endl;
    cout<<"Father's Name: "<<ftN<<endl;
    cout<<"Mother's Name: "<<mtN<<endl;
    cout<<"Roll Number: "<<roll<<endl;
    cout<<"Session: "<<sess<<endl;
    cout<<"Address: "<<add<<endl;
    cout<<"--------------------------"<<endl;
}

void BScStudentList::TotalStudents() {
        cout<<"Total Students : "<<numSt<<endl;
        cout<<endl;
    }

void BScStudentList::DeleteStudentInfo(int rol, BScStudentList m[]) {
    bool found = false;
    for (int i = 0; i < numSt; ++i) {
        if (m[i].roll == rol) {
            for (int j = i; j < numSt - 1; ++j) {
                m[j] = m[j + 1];
            }
            numSt--;
            found = true;
            cout<<"BScStudent with Roll Number "<<rol<<" deleted successfully."<<endl;
            break;
        }
    }
    if (!found) {
        cout<<"BScStudent with Roll Number "<<rol<<" not found."<<endl;
    }
}

int main() {
    BScStudentList m[mx_size];

    while (true) {
        cout<<"\nOptions:\n";
        cout<<"1. Add BScStudentListudent Info\n";
        cout<<"2. Display Total\n";
        cout<<"3. Delete BScStudentListudent Info\n";
        cout<<"4. Display All Info\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                m[numSt].getdata();
                cout<<"BScStudent : "<<numSt + 1<<endl;
                break;
            case 2:
                m[0].TotalStudents();
                break;
            case 3: {
                int rol;
                cout<<"Enter Roll Number to delete: ";
                cin >> rol;
                m[0].DeleteStudentInfo(rol, m);
                break;
            }
            case 4:
                for (int i = 0; i < numSt; i++) {
                    cout<<"BScStudent : "<<i + 1<<endl;
                    m[i].putdata();
                }
                break;
            case 5:
                return 0;
            default:
                cout<<"Invalid choice. Please enter a valid option."<<endl;
        }
    }
    return 0;
}
