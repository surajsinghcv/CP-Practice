
// https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1

/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
int tour(petrolPump p[],int n)
{
   //Your code here
   int curr = 0, prev = 0, index = 0;
   for(int i = 0; i < n; i++)
   {
       curr += p[i].petrol - p[i].distance;
       if(curr < 0)
       {
           index = i + 1;
           prev += curr;
           curr = 0;
       }
   }
   
   return (curr + prev >= 0 ? index : -1);
}

