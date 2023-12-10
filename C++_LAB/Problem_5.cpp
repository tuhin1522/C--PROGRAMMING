#include<bits/stdc++.h>
using namespace std;
class DB;
class DM{
private:
    float m, cm;
    friend void addDist(DM,DB);
public:
    void getDist();
    
};

class DB{
private:
    float ft,in;
public:
    void getDist();
    friend void addDist(DM,DB);

};
void DM::getDist(){
    cout<<"\nEnter the distance into Meter and CM: ";
    cin>>m>>cm;
}
void DB::getDist(){
    cout<<"Enter the distance into Feet and Inch: ";
    cin>>ft>>in;
}
void addDist(DM dm, DB db){
    float tot_meter= dm.m+(dm.cm/100);
    float tot_feet=db.ft+(db.in/12);
    //cout<<"tot ft: "<<tot_feet<<"  tot m: "<<tot_meter<<endl;
    float sum_m=tot_meter+(0.304799*tot_feet);
    
    float sum_ft=tot_feet+(tot_meter*3.28083998);//cout<<sum_ft<<endl;
    int ans_ft=sum_ft;
    float ans_in=(sum_ft-ans_ft)*12;
    int ans_m=sum_m;
    float ans_cm=(sum_m-ans_m)*100;
    //In M/CM = 3 m 35.28 cm and Feet/Inch = 11 Feet 0 Inch
    cout<<"In M/CM = "<<ans_m<<" m "<<ans_cm<<" cm and Feet/Inch = "<<ans_ft<<" feet "<<ans_in<<" Inch"<<endl<<endl;

}
int main() {
    DM dmObj;
    DB dbObj;

    dmObj.getDist();
    dbObj.getDist();

    addDist(dmObj, dbObj);

    return 0;
}
