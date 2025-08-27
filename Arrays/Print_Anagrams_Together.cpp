class Solution {
  public:
    string getFrequencyKey(const string& str) 
    {
        vector<int> freq(26, 0);
        for (char c : str) {
            freq[c - 'a']++;
        }
        string key;
        for (int count : freq) {
            key += to_string(count) + "#";
        }
        return key;
    }
    
    vector<vector<string>> anagrams(vector<string>& arr)
    {
        vector<vector<string>> myStr;
        unordered_map<string, vector<string>> Map;
    
        for (const auto& str : arr)
        {
            string key = getFrequencyKey(str);
            Map[key].push_back(str);
        }
    
        for (const auto& pair : Map)
        {
            myStr.push_back(pair.second);
        }
    
        return myStr;
    }
};