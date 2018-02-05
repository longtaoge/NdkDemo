package com.aisino.taxcode;

public class skm {

	public static native String get_dzfp_skm(
            String nsrsbh,  //纳税号
            int nsrsbh_len, //纳税号长度
            String kprq,    //日期20171201093015(精确到秒)
            String lsh,     //流水号(也叫发票号 或者发票ID 长度必须为20位)
            int  je         //金额(以分为单位，例如开票金额2.38,应该乘100,变成238,int型)
	);


    static{
        System.loadLibrary("skm");
    }
    
 
}
