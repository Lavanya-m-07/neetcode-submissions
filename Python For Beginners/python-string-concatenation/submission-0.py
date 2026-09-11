def concatenate(s1: str, s2: str) -> str:
    pass
    result = s1 + s2
    if(len(result) > 10):
        return "Too long!"
    else:
        return result




# do not modify below this line
print(concatenate("He", "llo"))
print(concatenate("Hello ", "world!"))
print(concatenate("Length", "of10"))
