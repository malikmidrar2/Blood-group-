#include <iostream>
#include <string>
using namespace std;

string findAlternativeBloodType(string bloodType) {
    if (bloodType == "B+") {
        return "O+";
    }
    else "Aghasy Nashta ";
}

int main() {
    string requiredBloodType = "B+";
    string availableBloodType;
    
    cout<<"Available Group Enter Ka (e.g., B+, O+, etc.): "<<endl;
    cin>>availableBloodType;
    
    if (availableBloodType == requiredBloodType) {
        cout<<"B+ blood Shta Da "<<endl;
    } else {
        string alternative = findAlternativeBloodType(requiredBloodType);
        if (alternative != "Agasy Nashta") {
            cout<<"B+  Nashta "<<alternative<<"  Use Koiy "<<endl;
        } else {
            cout<<"B+ Mndey Bal Nashta"<<endl;
        }
    }

    return 0;
}
    