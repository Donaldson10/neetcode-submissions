class Solution {
public:

    string encode(vector<string>& strs) {
        string key;
        for (auto& w : strs){
            key += to_string(w.length()) + '#' + w;
        }
        return key;
    }

    vector<string> decode(string s) {
        vector<string> answer;

        for(int i = 0; i < s.length(); i++){
            string word;
            string num;
            int len;
            while(s[i] != '#'){
                num += s[i];
                i++;
            }
            i++;
            len = stoi(num);
            for(int j = 0; j < len; j++){
                word += s[i];
                i++;
            }
            answer.push_back(word);
            i--;
        }
        return answer;
    }
};
