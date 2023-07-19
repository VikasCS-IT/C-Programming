// Header file

int add(int a, int b)
{
	return (a+b);        // Add value and return
}

int sub(int a, int b)
{
	return (a-b);        // Subtract value and return
}

int mul(int a, int b)
{
	return (a*b);        // Multiply and return
}

int divi(int a, int b)
{
	return (a/b);        // Divide and return
}

int pow(int a,int b)
{
    int i=1, c;
    c = 1;

    while(i<=b){
        c = c*a;
        i++;
    }
    return (c);
}
