#wf_check

##用途

作业demo，以作弊的方式输出正确答案。
用于向学生提供正确的目录结构、文件命名、命令行参数示例。
假装这是一位同学提交的作业。

##执行

以下运行效果是在bash下截取的，在windows下也符合作业要求。但是，(1)由命令行参数指定文件名与(2)由控制台输入文件，*不可*混淆。

以-s simple.txt作为命令行参数，执行wf得到如下结果。

```
$ ./wf -s simple.txt
Total 17
      2 the
      2 face
      1 rose
      1 quick
      1 over
      1 lazy
      1 jumps
      1 fox
      1 dog
      1 desk!
      1 brown
      1 bee
      1 bed
      1 bag
      1 a
```

##原理

C++代码*并未*对词频计数，而是根据文件名输出答案，答案来自类似以下执行的结果。

```
$ ./demo.sh -s simple.txt
Total 17
      2 the
      2 face
      1 rose
      1 quick
      1 over
      1 lazy
      1 jumps
      1 fox
      1 dog
      1 desk!
      1 brown
      1 bee
      1 bed
      1 bag
      1 a
```