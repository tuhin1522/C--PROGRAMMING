#include <bits/stdc++.h>
using namespace std;

const int max_st = 30;
const int size = 10;
int numSt = 0;

class LibraryBook {
    char bkName[max_st];
    char AuthName[max_st];
    char PubName[max_st];
    int isbn;
    int numBk;
    
public:
    void getdata(void);
    void putdata(void);
    void DeleteBookInfo(int isn, LibraryBook books[]);
    void modifyBookInformation(int x);
    void TotalBooks(LibraryBook books[]);
};

void LibraryBook::getdata(void) {
    if (numSt < size) {
        cout<<"Enter title of book Name: ";
        cin>>bkName;

        cout<<"Enter Author Name: ";
        cin>>AuthName;

        cout<<"Enter Publisher Name: ";
        cin>>PubName;

        cout<<"Enter isbn Number: ";
        cin>>isbn;

        cout<<"Enter number of books: ";
        cin>>numBk;
        numSt++;
    } else {
        cout<<"Maximum number of students reached. Cannot add more students."<<endl;
    }
}

void LibraryBook::TotalBooks(LibraryBook books[]) {
    cout<<"Total Books Type : "<<numSt<<endl;
    int totalbooks=0;
    for(int i=0;i<numSt;i++){
        totalbooks += books[i].numBk;
    }
    cout<<"Total number of books: "<<totalbooks<<endl;
    cout<<endl;
}

void LibraryBook :: modifyBookInformation(int x) {
    cout<<"Which field do you want to modify?"<<endl;
    cout<<"1. Title of Book"<<endl;
    cout<<"2. Name of Author"<<endl;
    cout<<"3. Name of Publisher"<<endl;
    cout<<"4. ISBN Number "<<endl;
    cout<<"5. Number of books"<<endl;
    cout<<"Enter your modify: ";

    int choice;
    cin>>choice;

    switch (choice) {
        case 1:
            cout<<"Title of book Name: "<<bkName<<endl;
            cout<<"Enter new title: ";
            cin>>bkName;
            break;
        case 2:
            cout<<"Author Name: "<<AuthName<<endl;
            cout<<"Enter new author: ";
            cin>>AuthName;
            break;
        case 3:
            cout<<"Publisher Name: "<<PubName<<endl;
            cout<<"Enter new publisher: ";
            cin>>PubName;
            break;
        case 4:
            cout<<"ISBN Number: "<<isbn<<endl;
            cout<<"Enter new ISBN: ";
            cin>>isbn;
            break;
        case 5:
            cout<<"number of books: "<<numBk<<endl;
            cout<<"Enter new number of books: ";
            cin>>numBk;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
}


void LibraryBook::putdata(void) {
    cout<<"Title of book Name: "<<bkName<<endl;
    cout<<"Author Name: "<<AuthName<<endl;
    cout<<"Publisher Name: "<<PubName<<endl;
    cout<<"ISBN Number: "<<isbn<<endl;
    cout<<"number of books: "<<numBk<<endl;
    cout<<"--------------------------"<<endl;
}

void LibraryBook::DeleteBookInfo(int isn, LibraryBook books[]) {
    bool found = false;
    for (int i = 0; i < numSt; i++) {
        if (books[i].isbn == isn) {
            for (int j = i; j < numSt - 1; j++) {
                books[j] = books[j + 1];
            }
            numSt--;
            found = true;
            cout<<"BookLibrary with Roll Number "<<isn<<" deleted successfully."<<endl;
            break;
        }
    }
    if (!found) {
        cout<<"BookLibrary with isbn Number "<<isn<<" not found."<<endl;
    }
}


int main() {
    LibraryBook books[size];

    while (true) {
        cout<<endl<<"Options:"<<endl;
        cout<<"1. To insert book information of your library"<<endl;
        cout<<"2. Total number of books Type"<<endl;
        cout<<"3. To modify book information."<<endl;
        cout<<"4. To display all books information."<<endl;
        cout<<"5. Delete Books."<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";

        int choice;
        cin>>choice;

        switch (choice) {
            case 1:
                cout<<"Books Number : "<<numSt + 1<<endl;
                books[numSt].getdata();
                break;
            case 2:
                books[0].TotalBooks(books);
                break;
            case 3: {
                int isb;
                cout<<"Enter isbn Number to modify: ";
                cin>>isb;
                books[0].modifyBookInformation(isb);
                break;
            }
            case 4:
                for (int i = 0; i < numSt; i++) {
                    cout<<"Books Number : "<<i + 1<<endl;
                    books[i].putdata();
                }
                break;
            case 5: {
                int isn;
                cout<<"Enter ISBN Number to delete: ";
                cin>>isn;
                books[0].DeleteBookInfo(isn, books);
                break;
            }
            case 6:
                return 0;
            default:
                cout<<"Invalid choice. Please enter a valid option."<<endl;
        }
    }
    return 0;
}
