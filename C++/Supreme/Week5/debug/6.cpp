// Debug the code. This code attempt to reverse all words occur in a sentence. All words are space separated.

// void reverseString(char input[],int n,int start){
//     for(int i=start,j=n-1+start;i<j;i++,j--){
//         int temp = input[i];
//         input[j] = input[i];
//         input[i] = temp;
//     }
// }

// void reverseEachWord(char input[]) {
//     int start=0,count=1,i=0;
//     while(input[i]!=0){
//         i++;
//         count++;
//         if((input[i]==' ')){
//             reverseString(input,count-1,start);
//             start = i+1;
//             count = 0;
//         }
//     }
// }




void reverseString(char input[],int n,int start){
    for(int i=start,j=n-1+start;i<j;i++,j--){
        int temp = input[i];
        input[j] = input[i];
        input[i] = temp;
    }
}

void reverseEachWord(char input[]) {
    int start=0,count=1,i=0;
    while(input[i]!=0){
        i++;
        count++;
        if((input[i]==' ')){
            reverseString(input,count-1,start);
            start = i+1;
            count = 0;
        }
    }
}