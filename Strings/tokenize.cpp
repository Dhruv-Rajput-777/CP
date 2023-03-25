vector<string> tokenize(string &str, char delim) {
    vector<string> out;
    stringstream ss(str);
    string s;
    while (std::getline(ss, s, delim)) {
        out.push_back(s);
    }
    return out;
}