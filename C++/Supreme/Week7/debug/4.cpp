// Debug the code. This code tries to implement string to integer converter.


// int rec(char input[],int n){
//     if(input[0] = '\0')
//         return n;
//     n = n * 10 + input[0];
//     return rec(input + 1, n);
// }

// int stringToNumber(char input[]) {
//     int n = 0;
//     return rec(input, n);
// }



int rec(char input[],int n){
    if(input[0] = '\0')
        return n;
    n = n * 10 + input[0];
    return rec(input + 1, n);
}

int stringToNumber(char input[]) {
    int n = 0;
    return rec(input, n);
}