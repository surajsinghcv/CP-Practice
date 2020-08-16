bool findTriplets(int arr[], int n)
{ 
  
    sort(arr, arr+n); 
    int l, r, temp;
  
    for (int i=0; i<n-1; i++) 
    { 
        l = i + 1; 
        r = n - 1; 
        temp = arr[i]; 
        while (l < r) 
        { 
            if (temp + arr[l] + arr[r] == 0) 
            {  
                return 1;
            } 
            else if (temp + arr[l] + arr[r] < 0) 
                l++; 
            else
                r--; 
        } 
    } 
  
    return 0;
}