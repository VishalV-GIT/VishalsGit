#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void DyanmicDisplay(vector<string>Dynamics){
    cout<<"Dynamic Widgets:";
    for(auto it=Dynamics.begin();it !=Dynamics.end();it++){
        cout<<*it<<",";}
    
    
}
void StaticDisplay(set<string>Statics){
    cout<<"Static Widgets: ";
    for(auto it=Statics.begin();it !=Statics.end();it++){
        cout<<*it<<",";}
        
}

int main()
{
    vector<string>Dynamic={"Speedometer","Tachometer"};
    set<string>Static={"Logo","Warning Lights"};
    DyanmicDisplay(Dynamic);
    cout<<endl;
    StaticDisplay(Static);
    cout<<endl;
    auto x=find(Static.begin(),Static.end(),"Warning Lights");
    if(x!=Static.end()){
        cout<<"Widget Exists"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    copy(Dynamic.begin(),Dynamic.end(),inserter(Static,Static.end()));
    cout<<"After copy of Widgets:";
    StaticDisplay(Static);
    cout<<endl;
    cout<<"Finding Widget after copy:";
    auto y=find(Static.begin(),Static.end(),"Logo");
    if(y!=Static.end()){
        cout<<"Widget Exists"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
   
    
    
    
    
    

    return 0;
}