#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> IPC = {"Speed", "Fuel", "Oil Pressure"};
    vector<string> FCC = {"AC temperature", "Seat Reclining", "Music"};
    sort(IPC.begin(), IPC.end());
    stable_sort(IPC.begin(), IPC.end());
    cout << "IPC: ";
    for (string i : IPC) {
        cout << i << " ";
    }
    cout << endl;

    cout << "FCC: ";
    for (string i : FCC) {
        cout << i << " ";
    }
    cout << endl;
    vector<string> Merged;
    merge(IPC.begin(), IPC.end(), FCC.begin(), FCC.end(), back_inserter(Merged));

    cout << "Merged Vector: ";
    for (string i : Merged) {
        cout << i << " ";
    }
    cout << endl;

 
    cout << "InplacedMerge: ";
    inplace_merge(IPC.begin(), IPC.end(), FCC.begin());
    for (string i : IPC) {
        cout << i << " ";
    }
    cout << endl;


    auto it = lower_bound(IPC.begin(), IPC.end(), "Speed");
    if (it != IPC.end()) {
        cout << "found at position: " << distance(IPC.begin(), it) << endl;
    } else {
        cout <<" not found" << endl;
    }


    vector<string> unionResult;
    set_union(IPC.begin(), IPC.end(), FCC.begin(), FCC.end(), back_inserter(unionResult));

    cout << "Set Union: ";
    for (string i : unionResult) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
