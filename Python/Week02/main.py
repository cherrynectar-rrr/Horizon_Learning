import calculator
import ui
while True :
    ui.show_menu()
    n = int(input("请选择你要进行的计算："))
    if n==5:
        break
    else :
        a = int(input("请输入第一个数字："))
        b = int(input("请输入第二个数字："))
        match n:
            case 1:print("加法：", calculator.add(a,b))
            case 2:print("减法：", calculator.sub(a,b))
            case 3:print("乘法：", calculator.mul(a,b))
            case 4:print("除法：", calculator.div(a,b))
print("感谢您的使用！！")
