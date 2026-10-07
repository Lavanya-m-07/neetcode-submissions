class Solution:
    def isValid(self, s: str) -> bool:
        result = []
        for c in s:
            if c in '({[':
                result.append(c)
            else:
                if not result:
                    return False
                top = result.pop()
                if top == '(' and c != ')':
                    return False
                elif top == '{' and c != '}':
                    return False
                elif top == '[' and c != ']':
                    return False
        if not result:
            return True
        else:
            return False