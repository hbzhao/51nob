#include <iostream>
/*
 * 暴力穷举法，时间复杂度为O(n)
 *
 */
int count_revert(int* numbers,int length){
    int result =0;
    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(numbers[j]<numbers[i]){
                result++;
            }
        }
    }
    return result;
}

/*
 * use merge sort algorithm to count the reverse number
 *出现的问题，当后边的数组出现小于前边数组的值时，逆序对的数字应该加上前边数组剩余值的个数。
 */
int* merge_array(int* a,int left,int mid,int right,int* result,int* res){
    int i,j,k,l,m;
    i=left;
    j = mid;
    m = mid+1;
    k = right;
    l = 0;
    while(i<= j&& m<=k){
        if(a[i]<a[m]){
            result[l] = a[i];
            i++;
            l++;
        }
        else{
            result[l]=a[m];
            *res = *res + (j-i+1);
            l++;
            m++;
        }
    }
    while(i<=j){
        result[l] = a[i];
        l++;
        i++;
       // (*res)++;
    }
    while(m<=k){
        result[l]=a[m];
        l++;
        m++;
        //(*res)++;
    }

    for(int i=0;i<l;i++){
        a[left+i] = result[i];
    }
    return result;
}

void merge_sort(int* numbers,int left,int right,int *result,int* res){
    if(left<right){
        int mid = (left+right)/2;
        merge_sort(numbers,left,mid,result,res);
        merge_sort(numbers,mid+1,right,result,res);
        merge_array(numbers,left,mid,right,result,res);
    }
    //return numbers;
}


int main() {
    int length;
    int* numbers = NULL;
    int* result = NULL;
    int* res =NULL;

    std::cin>>length;
    numbers = new int [length];
    result = new int [length];
    res = new int [1];
    *res = 0;
    for(int i=0;i<length;i++){
        std::cin>>numbers[i];
    }
    //result = count_revert(numbers,length);
    merge_sort(numbers,0,length-1,result,res);
   // for(int i=0;i<length;i++){
     //   std::cout<<numbers[i]<<std::endl;
    //}

    std::cout<<*res;
    return 0;
}