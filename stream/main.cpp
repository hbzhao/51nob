#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {

    int t;
    string tempt;
    vector<string> file;
    ifstream in;
    ofstream out;
    in.open("input.txt",ios::in);
    out.open("output.txt",ios::out| ios::trunc);
    if(in.is_open()){
        while(!in.eof()){
            in>>tempt;
            cout<<tempt<<endl;
            file.push_back(tempt);}
        cout<<file.size()<<endl;
    }else{
        cout<<"wrong again in"<<endl;
    }

    if(out.is_open()){
        while (!file.empty()) {
            tempt = file.back();
            out << tempt<<'\r'<< '\n';//windows下的换行符号
            file.pop_back();
        }
    } else{
        cout<<"wrong again out"<<endl;
    }

    in.close();
    out.close();

    return 0;

}