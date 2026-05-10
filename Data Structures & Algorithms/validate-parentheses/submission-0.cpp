class Solution {
public:
    bool isValid(string s) {
        stack<char> characters;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') { characters.push(c);}

            else if (c == ')' || c == ']' || c == '}') {
                if (characters.empty()) { return false; }

                char top = characters.top();
                if ((c == ')' && top == '(') ||
                    (c == ']' && top == '[') ||
                    (c == '}' && top == '{')) {
                        characters.pop();
                }
                else { return false; }
            }
        }
        return characters.empty();
    }
};
