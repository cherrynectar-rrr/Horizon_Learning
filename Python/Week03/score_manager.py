def average(grade_list):
    score = 0
    for grade in grade_list :
        score += grade
    aver = score / len(grade_list)
    return aver
def max(grade_list) :
    max_score = grade_list[0]
    for grade in grade_list :
        if grade > max_score :
            max_score = grade
    return max_score
def min(grade_list) :
    min_score = grade_list[0]
    for grade in grade_list :
        if grade < min_score :
            min_score = grade
    return min_score

grade_list = []
print("请输入你的成绩，-1结束：")
while True :
    grade = input()
    if grade == "-1" :
        break
    else :
        grade_list.append(float(grade))
print(f"共有{len(grade_list)}人成绩")
index = 0
while index < len(grade_list) :
    print(grade_list[index])
    index += 1
print(f"平均分：{average(grade_list)}")
print(f"最高分：{max(grade_list)}")
print(f"最低分：{min(grade_list)}")