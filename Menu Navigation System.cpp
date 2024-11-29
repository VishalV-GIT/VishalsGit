#include <iostream>
#include <string>
using namespace std;

int main(){
    int currentmenu=0; 
    while(true){
        if(currentmenu==0) {  
            cout<<"\nMain menu\n";
            cout<<"1.Settings\n";
            cout<<"2.Media\n";
            cout<<"3.Exit\n";
            cout<<"Enter Comamnd: ";
            int choice;
            cin>>choice;
            if(choice==1) {
                currentmenu=1;  
            }else if(choice==2) {
                currentmenu=2;  
            }else if(choice==3) {
                break; 
            }else{
                cout<<"Invalid command\n";}} 
        else if(currentmenu==1) {  
            cout<<"\nSettings menu\n";
            cout<<"1.Displaysettings\n";
            cout<<"2.Audiosettings\n";
            cout<<"3.Back to main menu\n";
            cout<<"Enter Command: ";
            int choice;
            cin>>choice;

            if(choice==1) {
                cout<<"Displaysettings\n";
            }else if(choice==2) {
                cout << "Audiosettings\n";
            }else if (choice==3) {
                currentmenu=0;  
            } else {
                cout << "Invalid Command\n";}} 
        else if(currentmenu == 2) {  
            cout<<"\nMedia menu\n";
            cout<<"1.Radio\n";
            cout<<"2. Bluetooth audio\n";
            cout<<"3. Back to Main menu\n";
            cout<<"Enter Command: ";
            int choice;
            cin >> choice;
            if(choice==1) {
                cout<<"Radio\n";
            }else if(choice==2){
                cout<<"Bluetooth Audio\n";
            }else if(choice==3){
                currentmenu=0;  
            }else{
                cout <<"Enter Command:\n";
            }
        }
    }

    return 0;
}
