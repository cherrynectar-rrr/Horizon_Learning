import ui_
import function

student = [
    {
        "name":"Tom",
        "age":18,
        "score":99
    }
]

while True :
    ui_.show_menu()
    num = int(input("请输入选项："))
    match num :
        case 1:
            function.add_stu (student)
        case 2:
            function.all_stu (student)
        case 3:
            function.find_stu(student)
        case 4:
            function.del_stu(student)
        case 5:
            function.chge_score(student)
        case 6:
            break
            print("Thx")
        case _:
            None
