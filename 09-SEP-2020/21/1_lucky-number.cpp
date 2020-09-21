
// https://practice.geeksforgeeks.org/problems/lucky-numbers2911/1

// Complete the function
// n: Input n
// counter: variable has already been declared in driver code and initialized as 2
// Return True if the given number is a lucky number else return False

bool isLucky(int n, int &counter) {
    // add code here
    if(n < counter) return 1;
    if(n % counter == 0) return 0;
    counter += 1;
    return isLucky(n - n / (counter - 1), counter);
}