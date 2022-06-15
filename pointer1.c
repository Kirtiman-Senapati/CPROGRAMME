void interchange(int *num1,int *num2)
{
int temp;
temp = *num1;
*num1 = *num2;
*num2 = *num1;
}