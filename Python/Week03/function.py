def all_stu (student) :
    for index in (student) :
        print("以下是所有学生：")
        print(f"name-->{index["name"]}, age --> {index["age"]}, score --> {index["score"]}")

def add_stu (student) :
    name = input("请输入姓名：")
    age = input("请输入年龄：")
    score = input("请输入分数")
    stu = {"name":name, "age":age, "score":score}
    student.append(stu)
    print("添加成功！")

def del_stu (student) :
    name = input("请输入你要删除学生的姓名：")
    for index in range(len(student)-1, -1, -1) :
        if student[index]["name"] == name :
            del student[index]
            print("删除成功")
            break
        else :
            print("没有这个学生")

def find_stu (student):
    name = input("请输入你要查找的学生：")
    for index in range(len(student)-1, -1, -1) :
            if student[index]["name"] == name :
                print(f"查询完成：name-->{student[index]["name"]}, age --> {student[index]["age"]}, score --> {student[index]["score"]}")
                break  
            else :
                print("没有这个学生")

def chge_score (student):
    name = input("请输入你要修改成绩的学生的姓名：")
    for index in range(len(student)-1, -1, -1) :
        if student[index]["name"] == name :
            student[index]["score"] = int(input("新的分数是："))
            print("修改成功")
            break
        else :
            print("没有这个学生，请先添加该学生")