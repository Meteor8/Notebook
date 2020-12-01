# FreeRTOS学习笔记

## 学习情况

基本了解，未使用

## 任务

![任务状态](res\任务状态.png)

```c
xTaskCreate();
xTaskDelete();
//任务函数、任务名字、任务句柄
//任务调度器
vTaskStartScheduler();
```

```c
vTaskSuspend();
vTaskResume();
//中断中恢复
xTaskResumeFromISR();
```

```c
portYIELD_ISR();
//关闭中断
portDISABLE_INTERUPTS()	;
```

```c
//临界区：不能被打断
taskENTER_CRITICAL();
//设置到哪个优先级不能被关闭
configMAX_SYSCALL_INTERUP_PRIORITY();
```

## 列表

![列表](res\列表.png)

```c
//列表
xList List_t
//列表项
xLIST_ITEM ListItem_t
//迷你列表项
xMINI_LIST_ITEM MiniListItem_t
```

```c
vListInitialise();
vListInitialisItem();
vListInsert();	//列表中的项由Value升序排列
vListInsertEnd();	//插在index前
uxListRemove();
listGET_OWNER_OF_NEXT_ENTRY()
```

## 队列

用于通信、任务间传递消息

```c
xQueueCreate();
xQueueSend();
xQueueReceive();
xQueuePeek();	//读取后删除消息
xQueueReceiveFromISR();
prvLockQueue();
```

## 信号量

用于两个任务同步

```c
//二值信号量
xSemaphoreCreateBinary();
//技术型信号量
xSemaphoreCreateCounting();	//释放+1，读取-1
//优先级反转：低级任务共用同一资源
//互斥信号量
xSemaphoreCreateMutex();
//递归互斥信号量
xSemaphoreCreateRecursiveMutex();	//可再次获取信号
xSemaphoreGive();
xSemaphoreTake();
```

## 事件标志组

多任务同步

```c
xEventGroupCreate();
xEventSetBIts();
xEventClearBits();
xEventGetBits();
xEventWaitBits();
```

## 任务通知

```c
xTaskNotify();	//带通知值，不保留用通知值
xTaskNotifyGive();
xTaskNotifyAndQuery();	////带通知值，保留用通知值
xTaskNotifyTake();
xTaskNotifyWait();
```

## 定时器

```c
xTimerReset();
xTimerCreate();
xTimerStart();
xTimerStop();
```

## 空闲任务

钩子函数（回调函数）

## 低功率Tickless

睡眠、停止、停机

## 其他API：信息状态、运行时间、查询

## 系统内核控制函数

