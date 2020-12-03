# MySQL学习笔记

## 学习情况

基本掌握

## 基础知识

### 数据库

数据库是一些关联表的集合。

### 数据表

表是数据的矩阵。在一个数据库中的表看起来像一个简单的电子表格。

### 主键

主键是唯一的。一个数据表中只能包含一个主键。你可以使用主键来查询数据。

### 外键

外键：外键用于关联两个表。

## 基础语法

不区分大小写

### 数据库操作

```mysql
#显示所有数据库
show databases;
#删除数据库
drop database; 
#创建test数据库
create database test;		
#使用test数据库
use test;		
#显示当前数据库的数据表
show tables;		
```

### 数据表操作

```mysql
#创建数据表
create table profile1(name VARCHAR(20), birth date);
create table pofile1(
	id int not null AUTO_INCREMENT,
    title varchar(100) not null,
    author carchar(40) not null,
    date date,
    primary key (id)
)ENGINE=InnoDB default charset=utf8;
#查看数据表结构
desc profile1;
show columns from profile1;
```

```mysql
#查询数据表
select * from profile1;
```

```mysql
#插入数据记录
insert into profile1 values(‘mike’,’1999-12-21’);	
```

```mysql
#更新数据
update profile1 set birth = ‘19990-02-02’ where name = ‘mike’; 
```

```mysql
#删除数据
delete from profile1 where name = ‘mike’;
```

```mysql
#删除表头
alter table profile1 drop name;	
alter table profile1 add name varchar(10) first;
alter table profile1 modify name varchar(15);
alter table profile1 change name names varchar(20);
alter table profile1 alter name set default unknown;
alter table profile1 rename to profile2;
```

### 关键字

#### WHERE

#### and/or

#### BINARY 

区分大小写

#### LIKE 

子句中使用百分号 %字符来表示任意字符。如果没有使用百分号 %, LIKE 子句与等号 = 的效果是一样的

#### UNION 语句

用于将不同表中相同列中查询的数据展示出来；（不包括重复数据）

#### UNION ALL 语句

用于将不同表中相同列中查询的数据展示出来；（包括重复数据）

#### ORDER BY ...ASC/DESC

#### GROUP BY ... WITH ROLLUP

#### INNER JOIN

![1606963957568](C:\Users\dong\AppData\Local\Temp\1606963957568.png)

#### NULL 

NULL与任何其它值的比较（即使是 NULL）永远返回 NULL

#### REGEXP 

正则表达式

