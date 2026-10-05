from typing import Dict # this adds type hinting for Dict

def count_characters(word: str) -> Dict[str, int]:
    count_dict = {}
    lenght = len(word)
    for i in range(lenght):
        if word[i] in count_dict:
            count_dict[word[i]] += 1
        else:
            count_dict[word[i]] = 1
    return count_dict


# don't modify below this line
print(count_characters("hello"))
print(count_characters("world"))
print(count_characters("hello world"))
print(count_characters("this is a longer sentence"))