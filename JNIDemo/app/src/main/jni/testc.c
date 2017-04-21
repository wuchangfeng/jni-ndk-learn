//
// Created by allenwu on 2017/4/20.
//
//引入上面生成的头文件，并实现头文件中声明的方法
#include "com_allenwu_jnidemo_MainActivity.h"
JNIEXPORT jstring JNICALL Java_com_allenwu_jnidemo_MainActivity_getStringFromNative
        (JNIEnv *env, jobject obj){
    char *str="String from native C";
    return (*env)->NewStringUTF(env, str);
}
