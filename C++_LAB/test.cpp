#include<bits/stdc++.h>
using namespace std;
class DB;

class DM
{
    private:
        float m,cm;
        friend void addDist(DM,DB);

    public:
        void getDist();
};

class DB
{
    private:
        float ft,in;
    public:
        void getDist();
        friend void addDist(DM,DB);
};

void DM :: getDist(){
    cout<<"Input in Meter and CM : ";
    cin>>m>>cm;
}

void DB :: getDist(){
    cout<<"Input in Feet and Inch : ";
    cin>>ft>>in;
}


int main()
{
    DM obj;
    DB ob;

    obj.getDist();
    ob.getDist();

    addDist(obj, ob);
}
