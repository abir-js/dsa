void segregate0and1(vector<int> &arr)
{
    // Your code here
    int n = arr.size();
    int zero_count = 0;
    int one_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero_count++;
        else if (arr[i] == 1)
            one_count++;
    }

    for (int i = 0; i < zero_count; i++)
    {
        arr[i] = 0;
    }
    for (int i = n - 1; i >= n - one_count; i--)
    {
        arr[i] = 1;
    }
}