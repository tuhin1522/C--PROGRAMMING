#include<bits/stdc++.h>
using namespace std;
int n;
int totalstudent = 0;

class BSCstudent {
private:
    string StudentName, FatherName, MotherName, Address;
    int Roll, Session;

public:
    void addinfo(string name, string fathername, string mothername, string address, int roll, int session) {
        StudentName = name;
        FatherName = fathername;
        MotherName = mothername;
        Address = address;
        Roll = roll;
        Session = session;
    }

    void displayallinfo() {
        cout << "------------------------" << endl;
        cout << "Student's Name:" << StudentName << endl;
        cout << "Father's Name:" << FatherName << endl;
        cout << "Mother's Name:" << MotherName << endl;
        cout << "Address Info:" << Address << endl;
        cout << "Roll_Number:" << Roll << endl;
        cout << "Session:" << Session << endl;
    }

    int getRoll() const {
        return Roll;
    }

    void displaytotalvalue(int m) {
        cout << "Total Students are:" << m << endl;
    }

    void ddelete(int index, BSCstudent list[])
    {
        for(int i = index+1;i<n;i++)
        {
            list[i-1]=list[i];
        }

    }

    void displayStudentInfo() {
        cout << "----------------------" << endl;
        cout << "Student Name: " << StudentName << endl;
        cout << "Father's Name: " << FatherName << endl;
        cout << "Mother's Name: " << MotherName << endl;
        cout << "Address: " << Address << endl;
        cout << "Roll Number: " << Roll << endl;
        cout << "Session: " << Session << endl;
    }
};

int main()
{
    cout<<"Maximum Student:";
    cin>>n;
    BSCstudent list[n];
    
    while(true)
    {
        cout<<"***"<<endl;
        cout<<"What do you want?"<<endl;
        cout<<"1.Insert information"<<endl;
        cout<<"2.Display Total Value"<<endl;
        cout<<"3.Delete info"<<endl;
        cout<<"4.Display info"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"***"<<endl;
        int Choice;
        cin>>Choice;
        if(Choice==1)
        {
            if(totalstudent<n)
            {
                    string Studentname,Fathername,Mothername,Address;
                    int Roll,Session;
                    cout<<"Student Name:";
                    cin>>Studentname;
                    cout<<endl;
                    cout<<"Father's Name:";
                    cin>>Fathername;
                    cout<<endl;
                    cout<<"Mother's Name:";
                    cin>>Mothername;
                    cout<<endl;
                    cout<<"Address:";
                    cin>>Address;
                    cout<<endl;
                    cout<<"Roll:";
                    cin>>Roll;
                    cout<<endl;
                    cout<<"Session:";
                    cin>>Session;
                    cout<<endl;
                    list[totalstudent].addinfo(Studentname,Fathername,Mothername,Address,Roll,Session);
                    totalstudent++;

            }
            else
            {
                cout<<"Index full"<<endl;
                
            }

        }
        else if(Choice==2)
        {
            list[0].displaytotalvalue(totalstudent);
        }
        else if(Choice==3)
        {
            int m;

            cout<<"Enter roll num:";
            cin>>m;
            int index = -1;
            for(int i=0;i<totalstudent;i++)
            {
                if(list[i].getRoll()==m)
                {
                    index=i;
                    break;
                }
            }
            if(index!=-1)
            {
                list[index].ddelete(index,list);
                totalstudent--;
            }
            else
            {
                cout<<"Invalid Roll number"<<endl;
            }
        }
        else if(Choice==4)
        {
            for(int i=0;i<totalstudent;i++)
            {
                list[i].displayStudentInfo();
            }
        }
        else if(Choice==5) 
        {
            return 0;
        }
       else
        {
            cout<<"Invalid Choice.Try again"<<endl;
        }

    }

}
