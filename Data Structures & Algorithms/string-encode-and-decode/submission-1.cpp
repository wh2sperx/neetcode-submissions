class Solution {
public:

    string encode(vector<string>& strs) {
        string ecd = "";
        for(string& s : strs) ecd += to_string(s.length()) + "#" + s;
        return ecd;
    }

    vector<string> decode(string s) {
        vector<string> r;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (j < s.size() && isdigit(s[j])) {
                j++;
            }
            int l = stoi(s.substr(i, j - i));
            i = j + 1;
            r.push_back(s.substr(i, l));
            i += l;
        }
        return r;
    }
};
