# ...需要补全代码
#1.模拟学生成绩数据集（含姓名、班级、语文 / 数学 / 英语 3 科成绩，共 60 条数据，含合理随机分布，无缺失值），作为可视化分析的基础数据：
# 导入库，约定行业通用别名
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

# 设置Matplotlib中文显示（解决中文乱码问题），适配不同系统
plt.rcParams['font.sans-serif'] = ['SimHei', 'DejaVu Sans']  # SimHei（Windows）、Mac可替换为Arial Unicode MS
plt.rcParams['axes.unicode_minus'] = False  # 解决负号显示异常问题

# 固定随机种子，保证实验结果可复现
np.random.seed(100)

# 创建学生成绩数据集（60条数据，3个班级，3门科目）
data = {
    '姓名': [f'学生{i+1}' for i in range(60)],
    '班级': np.random.choice(['一班', '二班', '三班'], size=60, p=[0.35, 0.35, 0.3]),
    '语文': np.random.randint(65,98,size = 60),  # 65-98分随机分布
    '数学': np.random.randint(60,100,size = 60),  # 60-100分随机分布
    '英语': np.random.randint(62,96,size = 60)  # 62-96分随机分布
}
df = pd.DataFrame(data)
# 查看数据集前5行和基本统计信息，验证数据有效性
# 补全代码
print(df.head(5))
print(df.describe())

# ...需要补全代码
#按班级分组计算各科平均分，生成分类对比所需的聚合数据：
# 按班级分组，计算各科平均分（仅保留数值列，结果保留2位小数）
grouped = df.groupby("班级")[["语文","数学","英语"]].mean().round(2)
show_gp = grouped.copy()
show_gp.columns = ["语文平均分","数学平均分","英语平均分"]
print("按班级分组计算各科平均分:\n",show_gp)

classes = grouped.index.tolist()
math_scores = grouped["数学"].values
english_scores = grouped["英语"].values
chinese_scores = grouped["语文"].values


# ...需要补全代码
#创建 2 行 2 列的子图布局，在同一画布中绘制班级平均分柱状图、数学成绩直方图、语数成绩散点图、各科成绩箱线图，并完成全量样式定制：
# 1. 创建画布和2行2列的子图矩阵，设置画布大小（宽16，高12），分辨率100
#补全代码
fig,axes = plt.subplots( 2,2, figsize = (16,12), dpi = 100)

# 解包子图，方便后续调用（ax1：柱状图，ax2：直方图，ax3：散点图，ax4：箱线图）
#补全代码
ax1, ax2, ax3, ax4 = axes.flatten()
# 2. 子图1：班级各科平均分柱状图（对比分类数据，展示班级差异）
#补全代码
x = np.arange(len(classes))
width = 0.25
cob1 = ax1.bar(x - width, chinese_scores,width, label = "语文", color = '#66bb6a')
cob2 = ax1.bar(x, math_scores,width, label = "数学", color = '#42a5f5')
cob3 = ax1.bar(x + width, english_scores,width, label = "英语", color = '#ffb74d')
ax1.set_title("班级各科平均分对比",fontsize = 14,pad = 15)
ax1.set_xticks(x)
ax1.set_xticklabels(classes)
ax1.set_ylabel("平均分")
ax1.bar_label(cob1,padding = 3, fmt = '%.1f')
ax1.bar_label(cob2,padding = 3, fmt = '%.1f')
ax1.bar_label(cob3,padding = 3, fmt = '%.1f')
ax1.legend()
ax1.grid(axis = 'y',ls = '--',alpha = 0.3)

# 3. 子图2：全班数学成绩直方图（展示数值分布，分析分数集中区间）
#补全代码
n, bins, patches = ax2.hist(df["数学"], bins = 10, color='#f06292',edgecolor='white', alpha=0.8)
math_mean = df['数学'].mean()
ax2.axvline(math_mean, color = 'red', ls = '--',label = f'平均分：{math_mean:.2f}')
ax2.set_title("数学成绩分布",fontsize = 14,pad = 15)
ax2.set_xlabel("分数区间")
ax2.set_ylabel("学生人数")
ax2.legend()

# 4. 子图3：语文-数学成绩散点图（分析变量关联，查看偏科情况）
#补全代码
colors_map = {"一班":'tomato','二班':'lightgreen','三班':'cornflowerblue'}
for cls in classes:
    subset = df[df['班级'] == cls] 
    ax3.scatter(subset['语文'], subset['数学'], color = colors_map[cls], alpha = 0.7, label = cls,s = 60, edgecolors = 'w')
z = np.polyfit(df['语文'], df['数学'], 1)
p = np.poly1d(z)
ax3.plot(df['语文'], p(df['语文']), "r--", alpha=0.6, label='趋势线')
ax3.set_title("语文-数学成绩散点图",fontsize = 14,pad = 15)
ax3.set_xlabel("语文成绩")
ax3.set_ylabel("数学成绩")
ax3.legend()
ax3.grid(ls = ':',alpha = 0.5)


# 5. 子图4：各科成绩箱线图（展示离散程度，检测异常值）
#补全代码
box = ax4.boxplot([df['语文'], df['数学'], df['英语']], 
                  tick_labels=['语文', '数学', '英语'], 
                  patch_artist=True, medianprops={'color': 'red', 'linewidth': 2})
for patch in box['boxes']:
    patch.set_facecolor('#b39ddb')
    patch.set_alpha(0.6)
ax4.set_title('各科成绩箱线图 (离散程度检测)', fontsize=14)
ax4.set_ylabel('分数')
ax4.grid(axis='y', ls='--', alpha=0.3)
# 6. 整体布局调整：避免子图重叠，设置画布总标题
#补全代码
plt.suptitle('学生成绩多维度可视化分析报告', fontsize=20, fontweight='bold', y=0.96)
plt.tight_layout(rect=[0, 0.05, 1, 0.94])
# 7. 保存图表（高清，无白边），并显示图表
#补全代码
plt.savefig('score_analysis_report.png', dpi=300, bbox_inches='tight')
plt.show()
# 8. 输出关键统计值，辅助结果分析
#补全代码
print("\n" + "="*40)
print("学生成绩关键统计摘要")
print("-" * 40)
print(f"全班数学最高分: {df['数学'].max()} | 最低分: {df['数学'].min()}")
print(f"语数成绩相关系数: {df['语文'].corr(df['数学']):.2f}")
print("结论建议: " + ("语文数学呈正相关" if df['语文'].corr(df['数学']) > 0.3 else "各学科独立性较强，需注意偏科现象"))
print("="*40)