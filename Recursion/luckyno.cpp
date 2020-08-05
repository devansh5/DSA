// 1 2 3 4 5 6 7 8 9
// n=5 k=2

bool islucky(int n,int &counter)
{
    if(n>counter)
    {
        return true;
    }
    if(n%counter==0)
    {
        return false;
    }
    int np=n;
    np=np-n/counter;
    counter++;


    islucky(np,counter);

}
