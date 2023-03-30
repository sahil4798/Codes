using namespace std;

int fib(int n){
    int t0=0 , t1=1;
    if(n<=1)
    {
        return n;
    }
    int ti ;

        for(int i =2 ; i<=n ; i++)
        {
            ti= t0 + t1 ;
            t0=t1;
            t1=ti;
        }
        // tn = tn-2 + tn-1 ;
        return ti;

}

int main()
{

int N=4;
printf("%d \n" , fib(N));

return 0;
}