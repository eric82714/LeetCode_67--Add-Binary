char * addBinary(char * a, char * b){
    int sz = strlen(a) > strlen(b) ? strlen(a):strlen(b);
    char* result = malloc(sz+2 * sizeof(char)); // Initialize result 
    memset(result, 0, (sz+2) * sizeof(char));
    int s = 0;    // Initialize digit sum 
  
    // Traverse both strings starting from last characters 
    int i = strlen(a) - 1, j = strlen(b) - 1; 
    while (i >= 0 || j >= 0 || s == 1) 
    { 
        // Comput sum of last digits and carry 
        s += ((i >= 0)? a[i] - '0': 0); 
        s += ((j >= 0)? b[j] - '0': 0); 
  
        // If current digit sum is 1 or 3, add 1 to result 
        *(result+(sz)) = (s % 2) + '0'; 
  
        // Compute carry 
        s /= 2; 
  
        // Move to next digits 
        i--; j--;sz--; 
    } 
    return result+sz+1; 
}
