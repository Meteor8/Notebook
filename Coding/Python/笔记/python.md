## 闭包

内函数队外函数变量的引用
return一个内部函数

## 多线程

```python
t = threading.Thread(f)
t.start()
t.join
```

```python
q = Queue()
q.put
q.get
```

```python
l =threading.Lock()	//一次只允许一个西安城操作
l.lock - l.acquire
```

## 装饰器

扩展函数f2
装饰器带参，多一层嵌套包装
被装饰函数带参，最内层函数传参

```python
@f1
def f2
f2
//f1(f2)()
```

