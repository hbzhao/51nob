//
// Created by zhao hong bo on 2017/3/15.
//

#include <iostream>
#include <algorithm>
int* inser_sort(int length,int* numbers){
    int tenmp = length;

    for(int i=1;i<length;i++){
        int j = i-1;
        int key = numbers[i];
        while(j>=0 && numbers[j]>key){
                numbers[j+1] = numbers[j];
                j--;
        }
        numbers[j+1] = key;
    }
    return numbers;
}

int* bubble_sort(int length,int* numbers){
    //int temp=0;
    for(int i=1;i<length;i++){
        for(int j=i;j>0;j--){
            if(numbers[j-1]>numbers[j]){
               // temp = numbers[j];
                std::swap(numbers[j-1],numbers[j]);
            }
        }
    }
    return numbers;
}

/*
 * 快速排序算法，基于分治的思想
 * 1、选定一个数组中的数作为key
 * 2、设定头尾指针遍历数组，将比key小的值放在左侧，大的值放在右侧
 * 3、递归调用函数。
 */
void quick_sort(int* numbers,int left,int right){
    //保留下原始的位置信息
    int low = left;
    int high = right;
    //递归调用的停止点
    if(low<high) {
        int key = numbers[left];
        while (left < right) {
            //寻找不满足分组条件的值
            while (numbers[right] > key && left < right) {
                right--;
            }
            std::swap(numbers[left], numbers[right]);
            while (numbers[left] < key && left < right) {
                left++;
            }

        }
        //left和right的值在经历分组后相等，都在分界位置，任选一个为递归调用的上界和下界
        quick_sort(numbers,low,left-1);
        quick_sort(numbers,left+1,high);
    }
}


/*
 *
 * 归并排序基于分治的思想，将一个需要排序的数组通过分割的方式进行排序
 * 1、计算中间点
 * 2、如果left>=right,则递归结束，在此之前不断递归
 * 3、将分割出来的各个数组合并
 *
 *
 *
 */
int* merge_array(int* a,int left,int mid,int right,int* result){
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
            l++;
            m++;
        }
    }
    while(i<=j){
        result[l] = a[i];
        l++;
        i++;
    }
    while(m<=k){
        result[l]=a[m];
        l++;
        m++;
    }

    for(int i=0;i<l;i++){
        a[left+i] = result[i];
    }
    return a;
}

int* merge_sort(int* numbers,int left,int right,int *result){
    if(left<right){
        int mid = (left+right)/2;
        merge_sort(numbers,left,mid,result);
        merge_sort(numbers,mid+1,right,result);
        merge_array(numbers,left,mid,right,result);
    }
    return numbers;
}

/*
 * using C++ qsort function
 * first,need to define a function name compare
 */
int compare(const void*a,const void * b){
    return *(int *)a-*(int*)b;
}

int main()
{
    int length = 0;
    int i = 0;
    int* numbers = NULL;
    int* res = NULL;
    std::cin >> length;
    numbers = new int [length];
    res = new int [length];
    int temp =length;
    while(temp>0){

        std::cin>>numbers[i];
        i++;
        temp--;
    }
    //res=inser_sort(length,numbers);
    //res = bubble_sort(length,numbers);
    //quick_sort(numbers,0,length-1);
    //res = merge_sort(numbers,0,length-1,res);
    //std::qsort((void *)numbers,length, sizeof(int),compare);
   // std::sort(numbers,numbers+length);
    i=0;
    temp = length;
    while(temp>0){
        std::cout<<numbers[i]<<std::endl;
        i++;
        temp--;
    }
}

