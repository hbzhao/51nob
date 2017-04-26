#include <iostream>
#include <math.h>
/*
 * 在计算的时候要注意数值越界的问题
 * 主要出现在a^d/2 * a^d/2 *a这个时候会越界
 *
 * （其实纠结这个问题挺没意思的。。。。）
 */
long long  mod(long long a,long long b,long long c){
    long long temp =b-2;
    long long res = 1;
    a=a%c;

    while(temp>=0){
        res=res*(a*a) %c;
        temp -= 2;
    }
    if(temp == -1){
        res = res*a%c;
    }
    //res = int(pow(a,b)) % c;



    return res;
}

long long qmod(long long a,long long b,long long c){
    long long res = 1;
    a = a%c;
    if(b==0) return 1;
    if(b==1) return a%c;
    if(b==2) return a*a%c;
    if(b%2 == 1){
        res = qmod(a,(b-1)/2,c);
        res = res*res%c;
        return res*a%c;
    } else {
        res = qmod(a,b/2,c);
        return res*res%c;
    }

}

long long Exponentiation(long long a, long long b, long long c)// a ^ b mod c
{
    long long res = 1, power;

    power = a % c;
    while(b)
    {
        if(b & 1)
        {
            res = (res * power) % c;
        }
        power = (power * power) % c;
        b = b>>1;
    }
    return res;
}

int main() {
    long long a,b,c = 0;
    long long res =0;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    res = qmod(a,b,c);
    //std::cout<<Exponentiation(a,b,c)<<std::endl;
    std::cout<<res;
}