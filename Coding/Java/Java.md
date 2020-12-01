# Java学习笔记

## 学习情况

通过书本了解基本语法，未实践。

## 基本语法

### 代码块

`{int a}`

```java
break label;	//跳转到标记代码块结尾
label:{代码块;}	//必须包括break
```

### 数组

```java
//1动态创建
int s[] = new int[10];	
//静态创建
int[] s;
s = new int[]{1,3};
//2
int s[] = new int[10];
//3
int[] s = new int[10];
//返回数组元素个数
s.length
```

### 字符串

```java
String s = new String("Hi");
String s = "Hi";
```



### for循环

```java
for(int x:s)
```

### 可变长参数

`int..v`必须位于最后，通过`v[2]`调用

### 关键字

#### private

类内用，不能通过`a.b`访问

#### static

被所有实例共用，通过`类名.变量名`访问，而非`实例名.变量名`
同类中相同，修改一个，同类其他对象也改变

##### static方法

只能调用static方法、属性，没有this/super

##### static代码块

在类构造对象之前运行，只执行一次
非静态代码块，每创一个对象，执行一次

#### abstract

抽象方法：只声明，无内容
子类需重写，不能创建对象

#### final

防止重写、继承
设置常量（代码块，构造器中初始化）

## 面向对象

### 成员

成员包括方法、变量

### 创建对象

```java
Vehicle car1;	//引用变量
car1 = new Vehicle();	//创建对象
car2 = car1;	//两者指向同一对象
```

### 重载

重载必须参数种类或个数不同

### 继承

`class 子类 extends 超类`
子类无法访问超类的private变量，可用*访问器* (用方法返回对应值)
超类引用可以引用子类对象，跨类不行。但只能访问超类变量

#### object

object为所有类的超类

#### super

`super()`调用超类构造函数，必须在第一行
`super.member`用于子类和超类变量名相同时（`member`	默认是子类）
构造函数会按照

`a instanceof A`判断a是否为A的实例（包括超类）

#### @override 重写

#### 构造函数

构造函数会按照从超类到子类逐个调用
构造函数名相同时，超类被隐藏

### this

`this.属性`或`this.方法()`，this可省略
`this(...)`调用构造器，必须声明在首行

### 局部内部类

在方法、代码块、构造器中
`class A{class B}`
调外部类A.this.方法

static实例化	

`A.B a new A.B()`

非static实例化

`A a = new A();`
`A.B b = a.new B();`

### 匿名子类

`Person p = new Person(){..};`
创建一个**匿名子类**（Person的子类），对象为p

`method(new Person())`
Person类的**匿名对象**

`method(new Person(){...})`
**匿名子类**的**匿名对象**

### 接口

interface中定义全局静态变量、静态方法、默认方法、抽象方法
`class a implements b{}`
类可以实现多个接口，但必须实例化其中全部抽象方法
就扣可以多继承

### 重名方法

调的时子类重写父类的方法
虚拟方法调用
子类中的其他方法无法调用
编译看作，运行看右（方法）
只适用于方法，不适用于属性

## 其他

### 单元测试方法

`@test`

### 包装类

基本数据类型 <==> 类

自动装箱、拆箱

Interger in 1 = int 2;

`String.valueof()`转string型
`Interge.paseInt()`转int型