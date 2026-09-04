import random

stu_list = []
print("请输入你要抽取的人的名单(输入-1结束)：")
while True :
    student = input()
    if student == "-1" :
        break
    else :
       stu_list.append(student)
print("准备完毕开始抽取")
while True :
    stu = random.choice(stu_list)
    print(stu)
    judge = input("继续？(y/n)") 
    if judge != "y" :
        print("抽取结束！")
        break

