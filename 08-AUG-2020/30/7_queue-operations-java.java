
// https://practice.geeksforgeeks.org/problems/queue-operations/1

//User function Template for Java

// Helper class Geeks to implement 
// insert() and findFrequency()
class Geeks{
    
    // Function to insert element into the queue
    static void insert(Queue<Integer> q, int k){
        
        // Your code here
        q.add(k);
        return;
    }
    
    // Function to find frequency of an element
    // rteturn the frequency of k
    static int findFrequency(Queue<Integer> q, int k){
        
        // Your code here
        int count = 0;
        while(q.contains(k))
        {
            count++;
            q.remove(k);
        }
        return count;
    }
    
}