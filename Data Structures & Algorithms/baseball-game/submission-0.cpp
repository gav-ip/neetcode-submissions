class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> scores;
        int n = operations.size();

        for (const string& s : operations){            
    
            if (s == "+"){

                int score_1 = scores.top(); 
                scores.pop(); 
                int score_2 = scores.top();

                int new_score = score_1 + score_2;
                
                // push back popped value
                scores.push(score_1);

                // push new score to top of stack
                scores.push(new_score);
            }

            else if (s == "C"){
                scores.pop();
            }

            else if (s == "D"){

                scores.push(2 * scores.top());
            }
            else{
                scores.push(stoi(s));
            }
        }

        int result = 0;
        while(!scores.empty()){
            result += scores.top();
            scores.pop();
        }

        return result;
        
    }
};