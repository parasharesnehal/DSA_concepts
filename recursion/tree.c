void fun(int n)
{
 if(n>0)
 {
 printf("%d", n);

 fun(n-1);
 fun(n-1);
 }
}
void main(){
fun(3);}