# ...需要补全代码

import numpy as np
# ===================== 1. 创建数组：录入学生成绩 =====================
# 背景：5名学生，4门科目（数学、语文、英语、物理）的成绩（满分100）
# 手动创建二维数组，行=学生（编号1-5），列=科目
scores = np.array([
    [85, 92, 78, 90],   # 学生1
    [76, 88, 95, 82],   # 学生2
    [91, 79, 87, 89],   # 学生3
    [68, 75, 80, 77],   # 学生4
    [94, 86, 92, 88]    # 学生5
])

# ===================== 2. 查看数组信息 =====================
print("===== 成绩数据基本信息 =====")
print(f"成绩数组形状（学生数, 科目数）: {scores.shape}")  # 查看维度
print(f"数组维度数: {scores.ndim}")                    # 查看维度数量
print(f"数组元素总数: {scores.size}")                  # 查看元素个数
print(f"数组数据类型: {scores.dtype}")                # 查看数据类型
print("\n原始成绩矩阵:\n",scores)

# ===================== 3. 维度变换 =====================
# 背景：将二维成绩表转换为一维，方便按顺序统计所有成绩
# 补全代码
scores_1d = scores.flatten()
print("\n一维成绩数组:\n",scores_1d)
# ===================== 4. 常用统计函数 =====================
print("\n===== 成绩统计分析 =====")
# 按科目统计（列维度）, 提取数学成绩（第0列）
# 补全代码
math_scores = scores[:,0]
print("\n数学成绩数组:\n",math_scores)
maxmt = np.max(math_scores)
minmt = np.min(math_scores)
meanmt = np.mean(math_scores)
varmt = np.var(math_scores)
print("\n数学成绩最大值:\n",maxmt)
print("\n数学成绩最小值:\n",minmt)
print("\n数学成绩平均值:\n",meanmt)
print("\n数学成绩方差:\n",varmt)
# 按学生统计（行维度）, 计算每个学生的总分（行求和）,查找全班总分最高的学生编号
# 补全代码
sum_scores = np.sum(scores,axis = 1)
print("\n全班每个学生总分:\n",sum_scores)
print("\n全班总分最高的学生编号:\n",np.argmax(sum_scores) + 1)
# 全班所有科目的整体统计, 计算全班所有科目平均分和全班所有成绩中位数
# 补全代码
mean_scores = np.mean(scores,axis = 0)
median_scores = np.median(scores,axis = 0)
print("\n全班所有科目平均分:\n",mean_scores)
print("\n全班所有成绩中位数:\n",median_scores)


# ===================== 5. 数学函数：成绩标准化 =====================
# 背景：为了消除科目难度差异，将成绩标准化（Z-score）：(x - 均值) / 标准差
print("\n===== 成绩标准化（消除科目难度差异） =====")
# 按科目标准化（每列单独标准化）
# 补全代码
std_per_subject = np.std(scores, axis=0)
ret = np.where(
    std_per_subject == 0,
    scores,
    (scores - mean_scores) / std_per_subject
)
ret = ret.round(2)
print("\n标准化后的成绩数组:\n", ret)

