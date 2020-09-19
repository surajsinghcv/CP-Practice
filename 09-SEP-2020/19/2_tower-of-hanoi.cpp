
// https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1


// You need to complete this function

// avoid space at the starting of the string in "move disk....."
long long toh(int N, int from, int to, int aux) {
    long long temp = 0ll;
    if (N >= 1) {
        temp += toh(N - 1, from, aux, to);
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        temp++;
        
        temp += toh(N - 1, aux, to, from);
    }
    return temp;
}