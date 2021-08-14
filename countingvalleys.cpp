//BHARATH PRATHAP NAIR
//Problem:Counting Valleys
//https://www.hackerrank.com/challenges/counting-valleys/problem


// !! This code passed only 8 testcases.

int countingValleys(int steps, string path) 
{
    int valley=0,sealevel=0;
    for(int i=0;i<steps;i++)
    {
        if(path[i]=='U')
        {
            sealevel+=1;
        }
        else 
        {
            sealevel-=1;
        }
        if(path[i]=='D' && sealevel==-1)
        {
            valley+=1;
        }
    }
    return valley;
}
