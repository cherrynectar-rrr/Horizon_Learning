phone = {
    "Tom":"123",
    "Jack":"456"
}
def all_key (phone) :
    for k in phone :
        print(f"{k}-->{phone[k]}")
while True :
    print("=" * 6 + "请选择你的操作" + "=" * 6)
    print("1. 增加联系人")
    print("2. 查询联系人")
    print("3. 修改联系人")
    print("4. 删除联系人")
    print("退出：-1")

    num = int(input())
    match num :
        case 1 :
            key = input("请输入姓名")
            val = input("请输入电话号码")
            phone[key] = val
            all_key(phone)
        case 2 :
            key = input("您要查询谁的号码")
            val = phone[key]
            print(f"{key}-->{val}")
        case 3 :
            key = input("请输入姓名")
            val = input("请输入电话号码")
            phone[key] = val
            all_key(phone)
        case 4 :
            all_key(phone)
            phone.pop(input("请选择你要删除的内容："))
            all_key(phone)
        case -1:
            print("Thx")
            break
        case _:
            None