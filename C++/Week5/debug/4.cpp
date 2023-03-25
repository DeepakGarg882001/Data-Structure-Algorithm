// Debug the code. It tries to check if given string a Palindrome or not


// string isPalindrome(string S)
// {
// 		int N = S.length();
//     for (int i = 0; i < (N/2)-1; i++) {
// 		    if (S[i] != S[N-i]) {
//             return "No";
//         }
//     }
//     return "Yes";
// }



string isPalindrome(string S)
{
		int N = S.length();
    for (int i = 0; i < (N/2)-1; i++) {
		    if (S[i] != S[N-i]) {
            return "No";
        }
    }
    return "Yes";
}