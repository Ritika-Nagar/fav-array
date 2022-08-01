#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    
    while(mid<=high){
        
        if(arr[mid]==0 && mid<=high){ //ishe left me rkhna h
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        
        if(arr[mid]==1 && mid<=high){// isko toh bich me rkhna hai 
            mid++;
        }
        
        if(arr[mid]==2 && mid<=high){// ishe right rkhna h ....tho agar knhi bich me ghum rha h toh ishe right me bhej do 
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
