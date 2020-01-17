 #include <iostream> //stdio doesn't have cin,cout in it's class
using namespace std;

long int mex=1e7+9; //array can't be accessed till 10e9,long to store the bigger value int can't support it
bool arr[10000009]; //changed long long data type to bool type to store true or false

int main()  //void main doesn't work in c++
{
    long int l,r; //long as int can't store bigger integers
   
    cin>>l>>r;
   
   long int cnt=0; //long as int can't store bigger integers,cnt initially as 0
   
    arr[0]=false; //0 isn't prime
   
    arr[1]=false; //0 isn't prime
    for(long i=2;i<mex;i++) arr[i]=true; //intiallised all array eleme nts as true initially
    for(long int i=2;i*i<=mex;i++) //long as int can't store bigger integers
    {   if(arr[i]==true) //to check if  is prime
        for(long int j=i*i;j<mex;j+=i) //long as int can't store bigger integers,j+=i as to make multiples of prime number false
        arr[j]=false;
    }
   
    for(long int i=l;i<=r;i++) //long as int can't store bigger integers,less then =
    {
        if(arr[i]==true) cnt++; //true as to check prime
    }
   
    cout<<cnt<<endl;
}
