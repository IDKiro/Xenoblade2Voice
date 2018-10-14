# 异度神剑2战斗后对话查询工具

## Introduction

根据选择的人物筛选并播放相关角色的战斗后语音

![](/image/main.gif)

## Update

version 1.1:

1. DLC 内容（暂不包括黄金国）
2. 优化切换语言和清除选择的方式
3. 更换编译方式，缩小程序体积，支持32位系统

Version 1.0: 

1. 自定义标题栏
2. bug 修复

## Usage

在发布应用页面进行下载，分别下载可执行文件、资源文件压缩包：

[https://github.com/IDKiro/Xenoblade2Voice/releases](https://github.com/IDKiro/Xenoblade2Voice/releases)

下载后将可执行文件(.exe)和资源文件(asset文件夹)放在同一目录下即可打开可执行文件(.exe)进行使用：

![](/image/file.png)

## Feature

1. 切换中文/日文
2. 悬停在选项上可直接显示另一语言的文本
3. 点击角色头像选择最多三个角色
4. 点击已选人物头像取消选择
5. 筛选选择角色的相关对话组
6. 播放对话组内的所有对话并显示相应的文本
7. 双击文本可以播放该文本的语音
8. 支持常见的播放器操作

## Instruction

#### 如何筛选对话组：

1. 程序运行后会自动加载所有可选角色的头像和名字，点击角色头像便可以进行筛选
2. 筛选后和该角色无相关对话的角色会消失，对话组列表则会同时筛选只与当前选择角色有关的对话组
3. 对话组最多有三个角色参与，筛选也最多可选择三个角色，筛选选中的角色会根据选择顺序显示在对话组列表上方
4. 点击已选择人物的头像可以移除该角色的选择，恢复选择前的状态

#### 播放相关的操作：

1. 选择对话组以后默认按对话组内语音顺序播放语音
2. 点击循环模式切换按钮切换至列表循环和单语音循环
3. 可以单击上一首、播放\暂停、下一首按钮进行常用的播放器操作，播放进度条支持拖动，音量支持拖动调整和静音

#### 语言相关：

1. 可以点击滑块按钮切换中文\日文，切换以后界面上的文字会自动更改语言
2. 悬停在角色、对话组、语音文本上时可以显示另一种语言的文本

#### 其他：

1. 悬停在标题上可以查看本程序的staff

## Development:

Qt 5.9.3

Visual Studio 2017

TIP: 提供了 VS 和 QTCreator 的工程文件，QTCreator 的编译结果出现乱码是因为 `mainwindow.cpp` 为 unicode 编码，自行转换为 UTF8 即可在 QTCreator 上编译。

## Developer

#### 数据挖掘:

@Moosehunter(Xenoblade Subreddit Discord)

#### 对话听写与翻译:

@vinsanityvc(NGA)

@takamana(stage1st)

#### 游戏内对话确认协助:

@天天の幻想(Baidu Tieba: 异度之刃)

@nanami_c(Baidu Tieba: 异度之刃)

@黑礼帽的誓言(Baidu Tieba: 异度之刃)

#### 主程序:

@IDKiro(NS in ZJU QQ Group)

#### 特别感谢:

@TheKjozk(YouTube)

Monolith Soft & Nintendo
