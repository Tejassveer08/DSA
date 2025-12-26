class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        
        int suffixY = 0;
        for (char c : customers)
            if (c == 'Y') suffixY++;

        int prefixN = 0;
        int minPenalty = suffixY;
        int bestHour = 0;

        for (int j = 1; j <= n; j++) {

            if (customers[j - 1] == 'Y')
                suffixY--;
            else
                prefixN++;

            int penalty = prefixN + suffixY;

            if (penalty < minPenalty) {
                minPenalty = penalty;
                bestHour = j;
            }
        }

        return bestHour;
    }
};
