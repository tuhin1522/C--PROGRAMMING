#include<bits/stdc++.h>
using namespace std;

const int max_st = 30;
const int siz = 10;
int numSt = 3;

class BookLibrary
{
    public:
        string name;
        string author;
        string publisher;
        int ISBN,number_book;

    void initialize(string name, string author,string publisher,int ISBN, int number_book);
    void modifyBookInformation(int isbn,BookLibrary book[]);
    void displayAll();
    void totalbooks(BookLibrary book[]);
    void DeleteBookInfo(int isbn, BookLibrary book[]);
};

void BookLibrary :: initialize(string Name, string Author,string Publisher,int isbn, int Number_book){
    name = Name;
    author = Author;
    publisher = Publisher;
    ISBN = isbn;
    number_book = Number_book;
}

void BookLibrary :: totalbooks(BookLibrary book[]){
    cout<<"Type of Books : "<<numSt<<endl;
    int totbk = 0;
    for(int i=0;i<numSt;i++){
        totbk += book[i].number_book;
    }
    cout<<"Total Books : "<<totbk<<endl;
}

void BookLibrary::modifyBookInformation(int isb,BookLibrary book[]) {
    bool found = false;
    for (int i = 0; i < numSt; i++) {
        if (book[i].ISBN == isb) {
            cout << "Which field do you want to modify?" << endl;
            cout << "1. Title of Book" << endl;
            cout << "2. Name of Author" << endl;
            cout << "3. Name of Publisher" << endl;
            cout << "4. ISBN Number " << endl;
            cout << "5. Number of books" << endl;
            cout << "Enter the choice : ";

            int choice;
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "Title of book Name: " << book[i].name << endl;
                cout << "Enter new Title : ";
                cin >> book[i].name;
                break;

            case 2:
                cout << "Author Name: " << book[i].author << endl;
                cout << "Enter new author : ";
                cin >> book[i].author;
                break;

            case 3:
                cout << "Publisher Name: " << book[i].publisher << endl;
                cout << "Enter new publisher : ";
                cin >> book[i].publisher;
                break;

            case 4:
                cout << "ISBN Number: " << book[i].ISBN << endl;
                cout << "Enter new ISBN : ";
                cin >> book[i].ISBN;
                break;

            case 5:
                cout << "number of books: " << book[i].number_book << endl;
                cout << "Enter new number of books : ";
                cin >> book[i].number_book;
                break;

            default:
                cout << "Invalid choice." << endl;
            }

            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "Book with ISBN " << isb << " not found." << endl;
    }
}


void BookLibrary::DeleteBookInfo(int isb, BookLibrary book[])
{
    bool found = false;
    for(int i=0;i<numSt;i++){
        if(book[i].ISBN = isb){
            for(int j=i;j<numSt;j++){
                book[j] = book[j+1];
            }
            numSt--;
            found = true;
        }
    }
    if(!found){
        cout<<"Not found."<<endl;
    }
}

void BookLibrary::displayAll(void) {
    cout<<"Title of book Name: "<<name<<endl;
    cout<<"Author Name: "<<author<<endl;
    cout<<"Publisher Name: "<<publisher<<endl;
    cout<<"ISBN Number: "<<ISBN<<endl;
    cout<<"number of books: "<<number_book<<endl;
    cout<<"--------------------------"<<endl;
}

int main()
{
    BookLibrary book[siz];

    book[0].initialize("Python","Lipson","Lipschutz",1,10);
    book[1].initialize("Java","Lipsn","Lipsch",2,10);
    book[2].initialize("C","Lison","Lschutz",3,10);
    
    while(true){
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

        switch(choice)
        {
            case 1:{
                if(numSt<siz){
                    string name;
                    string author;
                    string publisher;
                    int ISBN,number_book;

                    cout<<"Enter the Book name: ";
                    cin>>name;
                    cout<<"Enter Author Name: ";
                    cin>>author;
                    cout<<"Enter publisher : ";
                    cin>>publisher;
                    cout<<"Enter isbn : ";
                    cin>>ISBN;
                    cout<<"Enter number of book : ";
                    cin>>number_book;

                    book[numSt].initialize(name, author, publisher, ISBN, number_book);
                    numSt++;
                    
                }
                else{
                    cout<<"Store is full."<<endl;
                }
                break;
            }
            case 2:
            {
                book[0].totalbooks(book);
                break;
            }
            case 3:
            {
                int isb;
                cout<<"Enter your isbn : ";
                cin>>isb;
                book[0].modifyBookInformation(isb, book);
                break;
            }
            case 4:
            {
                for(int i=0;i<numSt;i++){
                    cout<<"Books Number : "<<i + 1<<endl;
                    book[i].displayAll();
                }
                break;
            }
            case 5:
            {
                int isb;
                cout<<"Enter your isbn : ";
                cin>>isb;
                book[0].DeleteBookInfo(isb,book);
                break;
            }
        }
    }
    
}