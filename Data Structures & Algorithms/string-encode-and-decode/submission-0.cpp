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
        while(i < s.length()) {
            int j = i;
            while(s[j] != '#') j++;
            int l = stoi(s.substr(i, j - i));
            string st = s.substr(j + 1, l);
            dcd.push_back(st);
            i = j + 1 + l;
        }
        return dcd;
    }
};
