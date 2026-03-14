 #include<iostream>

 int findSum(int n){
    //Base case
    if (n==1)
    return 1;
    //Recursive case
    return n + findSum(n-1);
 }

 int main()
 {
    int n = 5;
    std::cout << findSum(n);
    return 0;
 }