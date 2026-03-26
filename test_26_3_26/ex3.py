import pandas as pd
import numpy as np

# ...需要补全代码

# ① 创建含缺失值的DataFrame
product_data = {
    "商品名称": ["苹果", "香蕉", "橘子", "西瓜", "葡萄", "柠檬"],
    "价格": [5.5, 3.2, np.nan, 15.0, 8.8, 4.5],  # 包含1个缺失值
    "销量": [100, 150, 200, np.nan, 80, 120],   # 包含1个缺失值
    "类别": ["水果", "水果", "水果", "瓜类", "水果", "水果"]
}
df_product = pd.DataFrame(product_data)

# ② 缺失值用均值填充
df_product["价格"] = df_product["价格"].fillna(df_product["价格"].mean())
df_product["销量"] = df_product["销量"].fillna(df_product["销量"].mean())
# 补全代码
# ③ 新增销售额列，按类别分组统计
# 补全代码
df_product["销售额"] = df_product["价格"] * df_product["销量"]

grouped_1 = df_product.groupby("类别")["销售额"].sum()
grouped_2 = df_product.groupby("类别")["销量"].mean()
ret = pd.concat([grouped_1,grouped_2],axis = 1)
ret.columns = ["总销售额","平均销量"]
print(ret)
