package com.yang.www.utils;


public class AppUtils {

    static {
        System.loadLibrary("hellojni");
    }

    public static native String getStringFromJni();
}
