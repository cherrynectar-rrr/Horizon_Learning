def letter_count(str_list) :
    count = 0
    for letter in str_list :
        if letter != " " :
            count += 1
        return count
def rev (str_list) :
    rev_str_list = str_list[::-1]
    return rev_str_list
def sta_o(strlist) :
    count = 0
    for element in str_list :
        if element == "o" :
            count += 1
    return count
str_list = input("请输入一段字符串：")
print(f"长度：{len(str_list)}")
print(f"全部大写：{str_list.upper()}")
print(f"全部小写：{str_list.lower()}")
print(f"单词数量：{letter_count(str_list)}")
print(f"反转字符串：{rev(str_list)}")
print(f"统计字母o出现的次数：{sta_o(str_list)}")

