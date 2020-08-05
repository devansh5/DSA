const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl", 
                               "mno", "pqrs", "tuv", "wxyz"}; 

void  printWordsUtil(int number[], int curr_digit, char output[], int n, vector <string> &res) 
{
    // Base case, if current output word is prepared 
    int i; 
    if (curr_digit == n) 
    { 
        res.push_back (output);
        return ; 
    } 
  
    // Try all 3 possible characters for current digir in number[] 
    // and recur for remaining digits 
    for (i=0; i<strlen(hashTable[number[curr_digit]]); i++) 
    { 
        output[curr_digit] = hashTable[number[curr_digit]][i]; 
        printWordsUtil(number, curr_digit+1, output, n, res); 
        if (number[curr_digit] == 0 || number[curr_digit] == 1) 
            return; 
    } 
} 

vector <string> possibleWords(int a[],int N)
{
    vector <string> res;
    char result[N+1]; 
    result[N] ='\0'; 
    printWordsUtil(a, 0, result, N, res); 
    return res;
}
