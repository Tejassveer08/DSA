class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

    // Start iterating from the last digit
    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            // If the digit is less than 9, increment it and return the result
            digits[i]++;
            return digits;
        } else {
            // If the digit is 9, set it to 0
            digits[i] = 0;
        }
    }

    // If all digits are 9, insert a 1 at the beginning
    digits.insert(digits.begin(), 1);
    return digits;
}
};