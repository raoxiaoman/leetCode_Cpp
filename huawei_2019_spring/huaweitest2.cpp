#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
#include <sstream>

using namespace std;

int main(){
    //string s = "FE81:0001:0000:0000:FE01:0203:0405:0607";
    string s;
    vector<string> address;
    string temp;
    cin >> s;
    istringstream ss(s);

    if(s.size() != 39){
        cout << "Error" << endl;
        return 0;
    }
    while(getline(ss,temp,':')){
        if(temp.size()!=4) {
            cout << "Error" << endl;
            return 0;
        }

        for (auto tt : temp) {
            if((tt >= '0'  && tt <= '9') || (tt >= 'A' && tt <='F')) {
            }else{
                cout << "Error" << endl;
                return 0;
            }
        }
        address.push_back(temp);
    }
    size_t i;
    for (i= 0; i < address.size() -1; ++i) {
        if(address[i]!="0000"){
            break;
        }
    }
    if(i == 7){
        if(address[i]=="0000"){
            cout << "Unspecified" << endl;
            return 0;
        }else if(address[i]=="0001"){
            cout << "Loopback" << endl;
            return 0;
        }
    }

    if(address[0][0] == 'F' && address[0][1] == 'E' && address[0][2] == '8' ){
        cout << "LinkLocal" << endl;
    }
    else if(address[0][0] == 'F' && address[0][1] == 'E' && address[0][2] == 'C' ){
        cout << "SiteLocal" << endl;

    }else if(address[0][0] == 'F' && address[0][1] == 'F' && address[0][2] == '0' ){
        cout << "Multicast" << endl;

    }else {
        cout << "GlobalUnicast" << endl;
    }

    return 0;
}
