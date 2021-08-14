//BHARATH PRATHAP NAIR
//Problem:Birthday Cake Candles
//https://www.hackerrank.com/challenges/birthday-cake-candles/problem

int birthdayCakeCandles(vector<int> candles) 
{
    int max=0,count=0;
    for(int i=0;i<candles.size();i++)
    {
        if(candles[i]>max)
        {
            count=1;
            max=candles[i];
        }
        else if (candles[i]==max)
        {
            count+=1;
        }
    }
    return count;
}
