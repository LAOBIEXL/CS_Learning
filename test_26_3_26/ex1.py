# 主函数：菜单式整合所有功能
from turtle import st


def main():
    """主函数：菜单式操作"""
    while True:
        print("\n===== 学生成绩管理系统 =====")
        print("1. 录入学生成绩")
        print("2. 统计科目成绩（平均分/及格率）")
        print("3. 查询学生成绩")
        print("4. 退出系统")
        choice = input("请输入操作序号（1-4）：")
        
        if choice == "1":
            add_student()
        elif choice == "2":
            subject = input("请输入要统计的科目（语文/数学/英语）：")
            if subject not in ["语文", "数学", "英语"]:
                print("科目输入错误！")
                continue
            avg, rate = calculate_statistics(subject)
            print(f"\n{subject}成绩统计结果：")
            print(f"平均分：{avg} 分")
            print(f"及格率：{rate} %")
        elif choice == "3":
            query_id = input("请输入要查询的学号：")
            result = query_student_by_id(query_id)
            if result:
                print("\n查询结果：")
                for key, value in result.items():
                    print(f"{key}：{value}")
            else:
                print(f"学号{query_id}不存在！")
        elif choice == "4":
            print("退出系统，感谢使用！")
            break
        else:
            print("输入错误，请输入1-4的序号！")




# 初始化存储所有学生数据的列表（每个元素是字典）
student_scores = []

# 函数1：校验字符串是否非空（用于姓名/学号）
def check_non_empty(input_str, field_name):
    """
    校验输入的字符串是否非空（去除首尾空格后）
    :param input_str: 待校验的字符串
    :param field_name: 字段名（如"姓名"、"学号"），用于提示信息
    :return: 校验通过返回True，否则返回False
    """
    # 补全代码
    if input_str.strip() and field_name : 
        return True
    else:
        return False

# 函数2：校验成绩是否为0-100的合法数值
def check_score(score_str, subject):
    """
    校验成绩是否为0-100的数字
    :param score_str: 输入的成绩字符串（需转为数字）
    :param subject: 科目名（如"语文"），用于提示信息
    :return: 校验通过返回转换后的数字，否则返回None
    """
    # 补全代码
    scr = float(score_str.strip())
    if scr >= 0 and scr <= 100:
        return scr
    else:
        return None


def add_student():
    """录入学生信息，支持多次录入，输入'q'退出"""
    # 补全代码
    while True:
        print("请输入学生信息：(输入'q'退出)")
        name = input("请输入学生姓名：")
        if name == 'q' : break
        while(not check_non_empty(name,"姓名")):
            print("姓名不能为空，请重新输入：",' ')
            name = input()
        id = input("请输入学生学号：")
        while(not check_non_empty(id,"学号")):
            print("学号不能为空，请重新输入：",' ')
            id = input()

        cn = check_score(input("请输入学生语文成绩："), "语文")
        while(cn is None):
            print("语文成绩输入错误，请重新输入：",' ')
            cn = check_score(input("请输入学生语文成绩："), "语文")
        mth = check_score(input("请输入学生数学成绩："), "数学")
        while(mth is None):
            print("数学成绩输入错误，请重新输入：",' ')
            mth = check_score(input("请输入学生数学成绩："), "数学")
        eng = check_score(input("请输入学生英语成绩："), "英语")
        while(eng is None):
            print("英语成绩输入错误，请重新输入：",' ')
            eng = check_score(input("请输入学生英语成绩："), "英语")
        stu_info = dict()
        stu_info['name'] = name
        stu_info['id'] = id
        stu_info['cn'] = cn
        stu_info['mth'] = mth
        stu_info['eng'] = eng
        student_scores.append(stu_info)
        print("学生信息录入成功！")
        print('--------------------------------')


def calculate_statistics(subject):
    """
    计算指定科目的平均分和及格率
    :param subject: 要统计的科目（如"语文"、"数学"）
    :return: 平均分（保留2位小数）、及格率（保留2位小数），无数据返回(0, 0)
    """
    # 补全代码
    if len(student_scores) == 0:
        return (0,0)
    h = {"语文":'cn', "数学":'mth', "英语":'eng'}
    sub = h[subject]
    sum = 0
    cnt = 0
    count = len(student_scores)
    for i in student_scores:
        sum += i.get(sub,0)
        if(i.get(sub,0) >= 60):
            cnt += 1
    avg = sum / count
    rate = cnt/count
    return (round(avg,2), round((rate*100),2))

def get_grade(total_score):
    """
    根据总分判断成绩等级
    :param total_score: 学生总分
    :return: 等级（A/B/C/D）A:≥270, B:240-269, C:210-239, D:<210
    """
    # 补全代码
    if total_score >= 270:
        return "A"
    elif total_score >= 240:
        return "B"
    elif total_score >= 210:
        return "C"
    else:
        return "D"


def query_student_by_id(student_id):
    """
    按学号查询学生信息
    :param student_id: 要查询的学号
    :return: 找到返回学生字典，否则返回None
    """
    # 补全代码
    for i in student_scores:
        if i.get('id',0) == student_id:
            return i
        else:
            return None


# 启动主函数
if __name__ == "__main__":
    main()