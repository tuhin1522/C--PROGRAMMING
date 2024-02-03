#include <bits/stdc++.h>
using namespace std;

const int maxsize = 10;
int siz = 0;

class ShoppingList{
public:
    int itemCode;
    string itemName;
    double itemPrice;

public:
    void AddItem(int itemC, string itemN, double itemP);
    void displaytotalvalue(ShoppingList Splist[]);
    void Delete(int itemCod, ShoppingList Splist[]);
    void displayAll();
};

void ShoppingList::AddItem(int itemC, string itemN, double itemP){
    itemCode = itemC;
    itemName = itemN;
    itemPrice = itemP;
}
void ShoppingList:: displaytotalvalue(ShoppingList Splist[]){
    int TotalPrice=0;
    for(int i=0;i<siz;i++){
        TotalPrice += Splist[i].itemPrice;
    }
    cout<<"Total Price : "<<TotalPrice<<endl;
    cout<< endl;
}



void ShoppingList::Delete(int itemCod, ShoppingList Splist[]){
    bool found = false;
    for(int i=0;i<siz;i++){
        if(Splist[i].itemCode == itemCod){
            for (int j=i;j<siz-1;j++) {
                Splist[j]= Splist[j+1];
            }
            siz--;
            found = true;
            cout<<"Shopping with item code "<<itemCod<<" deleted successfully."<<endl;
            cout << endl;
            break;
        }
    }
    if(!found){
        cout<<"Item code is not found"<<endl;
    }
}

void ShoppingList::displayAll(){
    cout << itemName<<"\t" <<itemCode<<"\t"<<itemPrice<< endl;
    //cout<<"Item code: "<<itemCode<<endl;
    //cout<<"Item name: "<<itemName<<endl;
    //cout<<"Item Price: "<<itemPrice<<endl;
}

int main() 
{
    ShoppingList Splist[maxsize];
    
    while(true){
        cout<<"Shopping List:"<<endl;
        cout<<"1. Add item"<<endl;
        cout<<"2. Display Total Value"<<endl;
        cout<<"3. Delete item"<<endl;
        cout<<"4. Display all item"<<endl;
        cout<<"5. Exit"<<endl; 
        int choice;
        cout<<"Enter the choice: ";
        cin>>choice;
        
        switch (choice){
            case 1:{
                if(siz<maxsize){
                    int itemCode;
                    string itemName;
                    double itemPrice;
                    cout<<"Enter itemCode: ";
                    cin>>itemCode;
                    cout<<"Enter itemName: ";
                    cin>>itemName;
                    cout<<"Enter itemPrice: ";
                    cin>>itemPrice;
                    siz++;
                    Splist[siz-1].AddItem(itemCode, itemName, itemPrice);
                    cout<<"Shopping information inserted."<<endl;
                    cout << endl;
                }
                else{
                    cout<<"Shopping limit reached."<<endl;
                }
                break;
            }
            
            case 2:{
                Splist[0].displaytotalvalue(Splist);
                break;
            }
            case 3:{
                int itemCod;
                cout<<"Enter the item code: ";
                cin>>itemCod;
                Splist[0].Delete(itemCod,Splist);
                break;
            }
            case 4:{
                cout<<"Displaying all Shopping:"<<endl;
                cout << endl;
                cout << "Name"<<"\t" <<"Code"<<"\t"<<"Price"<< endl;
                for(int i=0;i<siz;i++){
                    Splist[i].displayAll();
                }
                cout<< endl;
                break;
            }
            case 5:{
                return 0;
            }
            default:{
                cout<<"Invalid choice."<<endl;
                break;
            }
        }
    }
    return 0;
}