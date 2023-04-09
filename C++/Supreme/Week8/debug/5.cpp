// Debug the code. 

// int gcd(int a, int b)
// {
//     if (a == 0)
//         return b;
//     return gcd(a % b, a);
// }


int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(a % b, a);
}