height = float(input("请输入你的身高："))
weight = float(input("请输入你的体重："))
bmi = weight/(height**2)
if bmi<18.5:
    status = "偏瘦"
elif 18.5 <= bmi < 24:
    status = "正常"
elif 24 <= bmi < 28:
    status = "超重"
elif bmi >= 28:
    status = "肥胖"

print(f"你的 BMI 是：{bmi:.2f}\n身体状况：{status}")
