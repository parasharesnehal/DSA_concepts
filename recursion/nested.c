int fun(int n)
{
 if(n>100)
 return n -10;
 else
 return fun(fun (fun(n+11)));
}
void main()
{
fun(95);}