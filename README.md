#### JNI /NDK 入门

JNI 即 Java Native Interface （Java 本地接口），为了 Java 方便调用 C、CPP 等本地代码所封装的一层接口。解决 Java 跨平台所带来的与本地交互不足等问题。NDK 是 Android 提供的一个工具集合，通过 NDK 可以在 Android 中更加方便的利用 JNI 来访问本地代码。

#### 配置 C/CPP 开发环境

选择 SublimeText3 作为 c/cpp 开发环境，具体配置过程如下所示：

* brew install gcc

* 打开Tools->Build System->New Build System，在新建的文件中输入以下内容

  ``` c
  {
  	"cmd" : ["gcc -o ${file_base_name} $file_name"],
      "shell" : true,
      "working_dir" : "$file_path",
      "selector": "source.c",
      "encoding":"utf-8",
      "variants" :
      [{
          "name" : "Run",
          "cmd" : "./${file_base_name}"
      }]
  }
  ```

* 输入文件名字，并保存，在 Build System 中选择保存的文件名称

* 使用control+B进行编译文件，使用control+shift+B运行编译好的文件

#### JNIDemo

JNI 开发第一例，主要熟悉一下 JNI 开发流程，主要步骤如下所示：

* 在 Java 文件中声明 native 方法
* 编译 Java 源文件得到 Class 文件，通过 javah 命令导出 JNI 头文件
* 实现 JNI 方法
* 编译 so 库并在 Java 中调用

