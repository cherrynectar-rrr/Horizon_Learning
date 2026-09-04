"""
Week02

math tool
"""

def add(a,b):
    return a + b
def sub(a,b):
    return a - b
def mul(a,b):
    return a * b
def div(a,b):
    if b==0:
        return "分母不可以为零，无计算结果"
    else:
        return round(a / b, 2)
test = input("请输入两个数字：")
num1, num2 = test.split()
n1 = int(num1)
n2 = int(num2)
print(f"加法：{add(n1,n2)}")
print(f"减法：{sub(n1,n2)}")
print(f"乘法：{mul(n1,n2)}")
print(f"除法：{div(n1,n2)}")
