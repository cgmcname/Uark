/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cgmcname
 *
 * Created on April 1, 2016, 1:52 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int binarySearch(int* a, int left, int right, int x)
{
    if (left == right)
    {
    
        if(a[left] == x)
        {
            return left;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        int mid;
        mid = (left + right)/2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] > x)
        return binarySearch( a,  left,  mid,  x);
        else
        return binarySearch( a,  mid+1,  right,  x);    
    }
}


int mss(int* a, int left, int right)
{
    if (left == right)
    {
        return a[left];
    }
    else
    {
        int mid;
        mid = (left + right)/2;
        
        //case 1: crosses the boundary
        int sum =0;
        int leftSum =a[mid];
        //for lopp that goes left from mid
        //add a[i] to sum
        for (int i = 0; i < mid; i++)
            sum += a[i];
        if (sum > leftSum)
        leftSum = sum;
        
        sum = 0;
        int rightSum = a[mid +1];
        //for loop that goes right from mid + 1
               // add a[i] to sum
        for (int i = 0; right > mid+1; i++)
            sum += a[i];
                if (sum > rightSum)
                rightSum = sum;
                
        int boundaryMaxSum = leftSum + rightSum;
        
        // cases 2-3 left or right 
        //int leftMaxSum = mss of the left side;
        //int right MaxSum = mss of the right side;
        
        if bounaryMaxsum is bigger than the other two sums
        return boundaryMaxSum
        else if leftMaxSum is bigger than rightMaxsum
        retrun leftMaxSum
        else
            return rightMaxSum
        
        
    }
}
/*
 * 
 */
int main(int argc, char** argv) 
{
    int array[10];
    for (int i =0; i < 10; i++)
    {
        array[i] = i;
    }
    
    cout << binarySearch(array, 0, 9, 7) << endl;
    //cout << mss(array, 0, 9) << endl;
    return 0;
}

