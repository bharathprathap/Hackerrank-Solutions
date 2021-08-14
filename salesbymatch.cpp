//BHARATH PRATHAP NAIR
//Problem:Sales by Match
//https://www.hackerrank.com/challenges/sock-merchant/problem 

int sockMerchant(int n, vector<int> ar) 
{
    int pairs=0,count;   
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j] && ar[i]!=-1)
            {
                count++;
                ar[j]=-1;
            }
        }
        count++;
        ar[i]=0;
        pairs+=floor(count/2);
    }
    
    return pairs;
}
