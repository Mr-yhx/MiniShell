### Mini Shell 需求分析

**于俊泊、韩程祥、邓国权**
#### Shell 主程序
1.	程序需不断读取用户的输入命令
2.	对于输入的命令进行解释，将命令名与参数分割
3.	对命令名进行检查，是否是所支持的命令
4.	若支持则跳转对应命令的检查语句或者执行，否则提示不支持
5.	每个命令自己负责检查所传递的参数是否合法
6.	若参数正确则执行，否则提示参数不合法
7.	除错误提示外的其他命令执行期间或执行结果的输出全部由对应命令实现
8.	本程序至少完成cd pwd ls mv cp rm diff cat who mkdir

主程序输入格式： 命令 [参数1] [参数2]……
整个命令按空格分割，分多次读入，主程序仅读入第一个空格前的部分，用以判断命令是否合法，合法则将后续的部分转交给对应命令读取，否则提示错误并无视后续输入

#### cd指令
输入格式：cd [目标路径]
1.	获取目标路径
2.	初步检查路径合法性
3.	尝试进入目标路径
4.	若目标路径存在则成功进入
5.	若目标路径不存则提示错误
6.	结束
#### pwd指令
1.	此命令没有输入参数
2.	获取当前所在的路径并打印

#### ls指令
输入格式：ls [目标路径1] [目标路径2]…
1.	此命令可输入多个参数
2.	对每个参数执行下述同一操作
3.	初步检查目标路径的合法性
4.	打开每个路径，获得其目录下的所有文件信息
5.	打印获得的文件信息
#### mv指令
输入格式：mv [源文件] [目标文件]
1.	读取源文件和目标文件参数
2.	检查源文件是否存在以及是否是文件
3.	检查目标路径是否是目录
4.	若是目录则名字不变移动到对应目录下
5.	若目标路径最终指向不存在，则将最后一部分作为新文件名，去掉该名字后作为目标路径
6.	检查修改后的目标路径
7.	正确则进行移动，否则提示错误（或创建不存在的文件夹）
#### cp指令
输入格式：cp [源文件] [目标文件]
1.	读取源文件与目标文件参数
2.	检查源文件是否存在或是否是文件
3.	检查目标文件是否是目录
4.	若是目录则名字不变复制到对应目录下
5.	若目标路径最终指向不存在，则将最后一部分作为新文件名，去掉该名字后作为目标路径
6.	检查修改后的目标路径
7.	正确则进行复制，否则提示错误（或创建不存在的文件夹）
#### rm指令
输入格式：rm [目标文件]
1.	读取目标文件
2.	判断目标文件是否存在或是否是路径
3.	若不是路径则提示确认信息并执行删除
4.	若是路径则询问是否递归删除（或提示无法删除路径）
#### diff指令
输入格式：diff [源文件] [目标文件]
1.	读取源文件参数与目标文件参数
2.	检查源文件与目标文件是否存在并判断文件类型
3.	对于目录或不存在的文件提示错误
4.	对于非文本文件对其二进制信息进行对比并提示是否相同
5.	对于文本文件则读取其每一行并对比，输出不同的行数与改行信息
#### cat指令
输入格式：cat [目标文件]
1.	读取目标文件参数
2.	检查目标文件是否存在并判断目标文件类型
3.	对于非文本文件提示无法执行
4.	对于文本文件则读取其内容并打印
#### who指令
输入格式：who
1.	此命令无参数输入
2.	打印当前使用用户的相关信息
#### mkdir指令
输入格式：mkdir [目标路径]
1.	读取目标路径参数
2.	初步检查路径格式
3.	尝试进入目标路径上级路径
4.	判断目标路径是否已经存在
5.	若存在则提示错误信息
6.	如进入失败提示错误信息
7.	创建目标路径

