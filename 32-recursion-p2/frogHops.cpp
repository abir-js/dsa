int countHops(int n) {
    // Your code here   

    if(n==1)
        return 1;
    if(n==2)
        return 2;
    if(n==3)
        return ;

    return countHops(n-1)+countHops(n-2)+countHops(n-3);
}