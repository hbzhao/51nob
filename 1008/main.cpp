#include <iostream>

long long multiple(long long n,long long p){
    //n = n%p;
    long long temp =(n-1);
    while(temp>0){
        n=(n*temp)%p;
        temp--;
    }
    return n;
}

int main() {
    long long N;
    long long P;
    std::cin>>N>>P;
    //std::cin>>P;
    std::cout<<multiple(N,P);
    //std::cout<<P;
    //std::cout<<multiple(N)%P<<std::endl;
    return 0;
}