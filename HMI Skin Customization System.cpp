#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Themes {
    map<string, vector<string>> Attributes;

public:
   
    Themes() {
        Attributes["Classic"] = {"black", "white", "small", "modern"};
        Attributes["Sport"] = {"white", "red", "medium", "royal"};
        Attributes["Eco"] = {"blue", "orange", "medium", "matte"};
    }

   
    void display(const string& them) {
      
        auto it = Attributes.find(them);
        if (it != Attributes.end()) {
            cout << "BackgroundColor FontColor  FontSize  IconStyle  "<< them <<":";
            for (const string& attr : it->second) {
                cout << attr << " ";
            }
            cout << endl;
        } else {
            cout << "Theme '" << them << "' not found." << endl;
        }
    }
};

int main() {
    
    Themes obj1;
    obj1.display("Classic");
    obj1.display("Sport");
    obj1.display("Eco");

   
    return 0;
}
