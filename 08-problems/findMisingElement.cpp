int findMissingPositive(vector<int> &arr)
{
    for (int i = 1; i <= arr.size(); i++)
    {
        bool found = false;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == i)
            {
                found = true;
                break;
            }
        }
        if (!found)
            return i;
    }
    return arr.size() + 1;
}
