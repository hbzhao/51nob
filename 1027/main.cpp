#include <iostream>
#include <string>
#include <algorithm>
//#include <w32api/wsman.h>

using std::cin;
using std::cout;
using std::string;
using std::endl;

std::string multiple(std::string a,std::string b){
    std::string result(a.length()+b.length()+1,'0');
    //std::string result;
    int flag=1;
    int i =0;
    int j = 0;
    int add = 0;
    int t1,t2,t3 =0;
    int d1 = a.length();
    int d2 = b.length();
    if(a[0]=='-') flag = -flag;
    if(b[0]=='-') flag = -flag;

    while (i<b.length()){
        j=0;
        while(j<a.length()){

            //result[j+i] = (result[j+i]) + (a[a.length()-1-i]-'0')*(b[b.length()-1-j]-'0')+add;
            t1 = (a[a.length()-1-j]-'0');
            t2 = (b[b.length()-1-i]-'0');
            t3 = (result[j+i]);
            result[j+i] = t1*t2+t3+(add);
            add = 0;
            if((result[j+i]-'0')>=10){
                add = (result[j+i]-'0')/10;
                result[j+i] = (result[j+i]-'0')%10+'0';
            }
            j++;
        }
        result[j+i]+=add;
        add = 0;
        i++;
    }
    std::reverse(result.begin(),result.end());
    if(flag==-1){
        result.insert(0,'-',1);
        for(int i=1;i<result.length()&&result[1]=='0';i++){
            result.erase(1,1);
        }
    }
    else if (flag == 1){

        for(int i=0;i<result.length()&&result[0]=='0';i++){
            result.erase(0,1);
         }
    }

    return result;
}
/*
int main() {
    std::string A;
    std::string B;
    std::cin>>A;
    std::cin>>B;
    std::cout<<multiple(A,B)<<std::endl;
    return 0;
}
 */

int main (){
    string str(10,'t');
    string str1 = " ";
    //cin>>str;
    getline(cin,str);
    cout<<str<<endl;
}