//BHARATH PRATHAP NAIR
//Problem:Jumping On Clouds
//https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem

int jumpingOnClouds(vector<int> c) 
{
    int jumps=0,i=0;
    int n=c.size();
    while(i<(n-2))
    {
        if(c[i+2]==0)
        {
            i+=2;
            jumps+=1;
        }
        else 
        {
            i+=1;
            jumps+=1;    
        }
        
    }
    if(i<n-1)
    {
        jumps+=1;
    }
    return jumps;
}
