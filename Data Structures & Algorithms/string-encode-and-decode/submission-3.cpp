class Solution {
public:

    string encode(vector<string>& strs) {
        string ecd = "";
        for(string& s : strs) ecd += to_string(s.length()) + "#" + s;
        return ecd;
    }

    vector<string> decode(string s) {
        vector<string> dcd;
        int i = 0;
        int n = s.size();

        while (i < n) {
            int j = i;
            while (j < n && s[j] != '#') {
                j++;
            }
            int l = stoi(s.substr(i, j - i)); 
            i = j + 1; 
            dcd.push_back(s.substr(i, l));
            i += l;
        }
        return dcd;
    }
};
