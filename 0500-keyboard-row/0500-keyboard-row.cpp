class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char> k1 = {'q','w','e','r','t','y','u','i','o','p'};
        set<char> k2 = {'a','s','d','f','g','h','j','k','l'};
        set<char> k3 = {'z','x','c','v','b','n','m'};

        vector<string> ans;

        for (int i = 0; i < words.size(); i++) {
            int f1 = 1, f2 = 1, f3 = 1; 

            for (int j = 0; j < words[i].size(); j++) {
                char c = tolower(words[i][j]);
                if (k1.count(c) == 0) f1 = 0;
                if (k2.count(c) == 0) f2 = 0;
                if (k3.count(c) == 0) f3 = 0;
            }

            if (f1 || f2 || f3) ans.push_back(words[i]);
        }
        return ans;
    }
};