



void Rearrange(int arr[], int n)
{
    // Your code goes here
    vector<int>v1,v2;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            v1.push_back(arr[i]);
        }
        else
        {
            v2.push_back(arr[i]);
        }
    }
    int k=0;
    for(int i=0;i<v1.size();i++)
    {
        arr[k]=v1[i];
        k++;
    }
    for(int i=0;i<v2.size();i++)
    {
        arr[k]=v2[i];
        k++;
    }
    
}
