#include <iostream>
#include <vector>

using std::vector;

#include<bits/stdc++.h>
using namespace std;

long long merge(vector<int> &arr,int l,int m, int r){
	long long number_of_inversions = 0;
	if(l<r){	
		int i, j, k; 
	    int n1 = m - l + 1; 
	    int n2 = r - m; 
	    int L[n1], R[n2]; 
	    for (i = 0; i < n1; i++) 
	        L[i] = arr[l + i]; 
	    for (j = 0; j < n2; j++) 
	        R[j] = arr[m + 1 + j]; 
	    i = 0; 
	    j = 0;
	    k = l; 
	    while (i < n1 && j < n2) { 
	        if (L[i] <= R[j]) { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
	        else { 
	        	number_of_inversions+=(n1-i);
	            arr[k] = R[j]; 
	            j++;  
	        } 
	        k++; 
	    } 
	    while (i < n1) { 
	        arr[k] = L[i]; 
	        i++; 
	        k++; 
	    } 
	    while (j < n2) { 
	        arr[k] = R[j]; 
	        j++; 
	        k++; 
	    } 
	}
	return number_of_inversions;
}

long long get_number_of_inversions(vector<int> &a,size_t left, size_t right) {
  long long number_of_inversions = 0;
  if (right <= left) return number_of_inversions;
  size_t ave = left + (right - left) / 2;
  number_of_inversions += get_number_of_inversions(a, left, ave);
  number_of_inversions += get_number_of_inversions(a, ave+1, right);
  number_of_inversions +=merge(a,left,ave,right);
  return number_of_inversions;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << get_number_of_inversions(a, 0, a.size()-1) << '\n';
}
