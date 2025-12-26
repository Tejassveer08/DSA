class Solution {
public:
    int bestClosingTime(string customers) {
         int max_score=0,score=0,besthour=-1;
         for(int i=0;i<customers.size();i++)
         {
            score+=(customers[i]=='Y')?1:-1;
            if(score>max_score)
            {
                max_score=score;
                besthour=i;
            }
         }
         return besthour+1;
    }
};