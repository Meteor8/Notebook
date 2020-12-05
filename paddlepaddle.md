# PaddlePaddle

文档

[快速上手-使用文档-PaddlePaddle深度学习平台](https://www.paddlepaddle.org.cn/documentation/docs/zh/beginners_guide/index_cn.html) 

目录

[Baidu AI Studio - 人工智能学习与实训社区](https://aistudio.baidu.com/aistudio/learnmap) 

python基础

[百度AI Studio课程_学习成就梦想，AI遇见未来_AI课程 - 百度AI Studio - 人工智能学习与实训社区 (baidu.com)](https://aistudio.baidu.com/aistudio/education/group/info/1224) 

数据准备和特征工程 

[百度AI Studio课程_学习成就梦想，AI遇见未来_AI课程 - 百度AI Studio - 人工智能学习与实训社区 (baidu.com)](https://aistudio.baidu.com/aistudio/education/group/info/1337) 

机器学习的思考故事 

[百度AI Studio课程_学习成就梦想，AI遇见未来_AI课程 - 百度AI Studio - 人工智能学习与实训社区 (baidu.com)](https://aistudio.baidu.com/aistudio/education/group/info/1138) 

百度架构师手把手带你深度学习 

[百度AI Studio课程_学习成就梦想，AI遇见未来_AI课程 - 百度AI Studio - 人工智能学习与实训社区 (baidu.com)](https://aistudio.baidu.com/aistudio/education/group/info/1297) 

## 数学基础

### 数据表示——标量、向量、矩阵和张量

向量的范数、常见的向量
常见的矩阵、矩阵的操作

### 优化的基础——导数及其应用

导数、泰勒公式
拉格朗日乘数法

#### 概率模型的基础——概率论

概率分布、边缘概率、条件概率
期望、方差和协方差 

## Linux命令

```bash
!ls /home
!ls ./
!ls  -l
!pwd
!cp test.txt ./test_copy.txt
!mv /home/aistudio/work/test_copy.txt /home/aistudio/data/
!rm /home/aistudio/data/test_copy.txt
```

### gzip

linux压缩文件中最常见的后缀名即为.gz，gzip是用来压缩和解压.gz文件的命令。

常用参数:

-d或--decompress或--uncompress：解压文件；
-r或--recursive：递归压缩指定文件夹下的文件（该文件夹下的所有文件被压缩成单独的.gz文件）；
-v或--verbose：显示指令执行过程。
注：gzip命令只能压缩单个文件，而不能把一个文件夹压缩成一个文件（与打包命令的区别）

```bash
!gzip /home/aistudio/work/test.txt
!gzip -d /home/aistudio/test.gz
```

### tar

tar本身是一个打包命令，用来打包或者解包后缀名为.tar。配合参数可同时实现打包和压缩。

常用参数:

-c或--create：建立新的备份文件； 
-x或--extract或--get：从备份文件中还原文件； 
-v：显示指令执行过程； 
-f或--file：指定备份文件； 
-C：指定目的目录； 
-z：通过gzip指令处理备份文件；
-j：通过bzip2指令处理备份文件。 

```bash
!tar -zcvf /home/aistudio/work/test.tar.gz /home/aistudio/work/test.txt	
!tar -zxvf /home/aistudio/work/test.tar.gz
```

### zip/unzip

zip命令和unzip命令用在在Linux上处理.zip的压缩文件。

常用参数

zip:

-v：显示指令执行过程；
-m：不保留原文件；
-r：递归处理。

unzip:

-v：显示指令执行过程；
-d：解压到指定目录。

```bash
!zip -r /home/aistudio/work/test.zip /home/aistudio/work/test.txt
!unzip  /home/aistudio/work/test.zip 
```

## Python库

### Numpy

```python
import numpy as np
#创建数组
np.array()
np.zeros()
np.ones()
np.empty()
np.arange(10, 31, 5)
```

```python
#数组维度
print(array.ndim)
#数组形状
print(array.shape)
#数组元素个数
print(array.size)
#数组元素类型
print(array.dtype)
```

```python
#矩阵乘法
np.dot(arr3,arr4)
```

### Pandas

#### Series

是一种类似于一维数组的对象，它由一维数组（各种numpy数据类型）以及一组与之相关的数据标签（即索引）组成。可理解为带标签的一维数组

```python
import pandas as pd
s = pd.Series(['a','b','c','d','e'],index=[100,200,100,400,500])
pd.Series({'b': 1, 'a': 0, 'c': 2})
```

#### DataFrame

是一个表格型的数据结构，类似于Excel或sql表
DataFrame既有行索引也有列索引，它可以被看做由Series组成的字典（共用同一个索引）
**由几个行向量组成**

```python
data = {'state': ['Ohio', 'Ohio', 'Ohio', 'Nevada', 'Nevada'], 'year': [2000, 2001, 2002, 2001, 2002], 'pop': [1.5, 1.7, 3.6, 2.4, 2.9]}
frame = pd.DataFrame(data)
```

```python
#'debt'列乘'pop'列生成新列'new'
frame2['new'] = frame2['debt' ]* frame2['pop'] 
```

### PIL

```python
from PIL import Image
plt.imshow(img)  
plt.show(img)
```

```python
img.rotate(45) 
img1.crop((126,0,381,249))
img2.resize((int(width*0.6),int(height*0.6)),Image.ANTIALIAS)
img3.transpose(Image.FLIP_LEFT_RIGHT)
```

### Matplotlib

```python
import matplotlib.pyplot as plt
plt.figure(figsize=(7,5))
plt.plot(x,y)
plt.xlabel('x',fontsize=20)
plt.ylabel('y',fontsize=20)
plt.show()
```

```python
#散点图
plt.scatter(dots1,dots2,c='red',alpha=0.5) 
#条形图
plt.bar(x,y,facecolor='#9999ff',edgecolor='white')
```

## Jupyter

Magic命令

```python
%lsmagic
%%timeit
#显示matplotlib图片
%matplotlib inline
%config InlineBackend.figure_format = 'retina'
#设置环境变量
#CPU环境启动请务必执行该指令
%set_env CPU_NUM=1 
#运行Py文件
%run
#导出cell内容/显示外部脚本的内容
%%writefile
%pycat:
```

## Paddlehub

```python
#CPU环境启动请务必执行该指令
%set_env CPU_NUM=1 
```

## EasyDL

### 创建模型

### 创建数据集

### 数据标注

框选、标签、自动标注

### 模型训练

### 发布模型