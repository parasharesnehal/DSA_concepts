void fun( int n )
{
if( n > 0)
 {
 fun(n-1); // head recursion
 }
}
void main(){
    fun(7);
}