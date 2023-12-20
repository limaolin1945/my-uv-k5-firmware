//
// Created by RUPC on 2023/11/30.
//

#ifndef UV_K5_FIRMWARE_CUSTOM_0_17_CHINESE_H
#define UV_K5_FIRMWARE_CUSTOM_0_17_CHINESE_H
#include "font.h"
#if ENABLE_CHINESE_FULL!=4
#define 步进频率 "\x01\x02\x03\x04"
#define 接收数字亚音 "\x05\x06\x07\x08\x09\x0B"
#define 接收模拟亚音 "\x05\x06\x0C\x0D\x09\x0B"
#define 发送数字亚音 "\x0E\x0F\x07\x08\x09\x0B"
#define 发送模拟亚音 "\x0E\x0F\x0C\x0D\x09\x0B"
#define 频差方向 "\x03\x10\x11\x12"
#define 频差频率 "\x03\x10\x03\x04"
#define 加密 "\x13\x14"
#define 遇忙禁发 "\x15\x16\x17\x0E"
#define 压扩 "\x18\x19"
#define 存置信道 "\x1A\x1B\x1C\x1D"
#define 删除信道 "\x1E\x1F\x1C\x1D"
#define 命名信道 "\x7F\x80\x1C\x1D"
#define 信道扫描列表 "\x1C\x1D\x81\x82\x83\x84"
#define 扫描列表1 "\x81\x82\x83\x84\x31"
#define 扫描列表2 "\x81\x82\x83\x84\x32"
#define 搜索恢复模式 "\x85\x86\x87\x88\x0C\x89"
#define 发送超时 "\x0E\x0F\x8A\x8B"
#define 省电模式 "\x8C\x8D\x0C\x89"
#define 麦克风增益 "\x8E\x8F\x90\x91\x92"
#define 信道显示模式 "\x1C\x1D\x93\x94\x0C\x89"
#define 自动背光 "\x95\x96\x97\x98"
#define 背光亮度 "\x97\x98\x99\x9A"
#define 首尾音 "\x9B\x9C\x0B"
#define MDC_ID "\x4D\x44\x43\x20\x49\x44"
#define 尾音消除 "\x9C\x0B\x9D\x1F"
#define 过中继尾音消除 "\x9E\x9F\xA0\x9C\x0B\x9D\x1F"
#define 按键即呼 "\xA1\xA2\xA3\xA4"
#define DTMF_ID "\x44\x54\x4D\x46\x20\x49\x44"
#define DTMF上线码 "\x44\x54\x4D\x46\xA5\xA6\xA7"
#define DTMF下线码 "\x44\x54\x4D\x46\xA8\xA6\xA7"
#define DTMF发送 "\x44\x54\x4D\x46\x0E\x0F"
#define DTMF侧音 "\x44\x54\x4D\x46\xA9\x0B"
#define DTMF响应 "\x44\x54\x4D\x46\xAA\xAB"
#define DTMF复位 "\x44\x54\x4D\x46\x88\xAC"
#define DTMF预载波 "\x44\x54\x4D\x46\xAD\xAE\xAF"
#define DTMF联系人 "\x44\x54\x4D\x46\xB0\xB1\xB2"
#define DTMF显示 "\x44\x54\x4D\x46\x93\x94"
#define AM自动增益 "\x41\x4D\x95\x96\x91\x92"
#define 收发模式 "\x06\x0E\x0C\x89"
#define 静噪等级 "\xB3\xB4\xB5\xB6"


//隐藏菜单
#define 频段解锁 "\x03\xB7\xB8\xB9"
#define 两百M发射 "\x32\x30\x30\x4D\x0E\xBA"
#define 三百五十M发射 "\x33\x35\x30\x4D\x0E\xBA"
#define 五百M发射 "\x35\x30\x30\x4D\x0E\xBA"
#define 三百五十M接收 "\x33\x35\x30\x4D\x05\x06"
#define 电池调压 "\x8D\xBB\xBC\x18"
#define 电池大小 "\x8D\xBB\xBD\xBE"
#define 参数复位 "\xBF\x07\x88\xAC"

//子菜单
#define 发送等于接收 "\x0E\x0F\x3D\x05\x06"
#define 发送等于接收加偏移 "\x0E\x0F\x3D\n\x05\x06\x2B\xC0\xC1"
#define 发送等于接收减偏移 "\x0E\x0F\x3D\n\x05\x06\x2D\xC0\xC1"
#define 关闭 "\xC2\xC3"
#define 开启 "\xC4\xC5"
#define 一级 "\x31\x20\xB6"
#define 二级 "\x32\x20\xB6"
#define 三级 "\x33\x20\xB6"
#define 四级 "\x34\x20\xB6"
#define 三十秒 "\x33\x30\x20\xC6"
#define 一分 "\x31\x20\xC7"
#define 两分 "\x32\x20\xC7"
#define 三分 "\x33\x20\xC7"
#define 四分 "\x34\x20\xC7"
#define 五分 "\x35\x20\xC7"
#define 六分 "\x36\x20\xC7"
#define 七分 "\x37\x20\xC7"
#define 八分 "\x38\x20\xC7"
#define 九分 "\x39\x20\xC7"
#define 十五分 "\x31\x35\x20\xC7"
#define 主信道接收发射 "\xC8\x1C\x1D\n\x05\x06\x0E\xBA"
#define 双信道接收 "\xC9\x1C\x1D\n\x05\x06"
#define 主信道发射副信道接收 "\xC8\x1C\x1D\x0E\xBA\n\xCA\x1C\x1D\x05\x06"
#define 主信道发射双信道接收 "\xC8\x1C\x1D\x0E\xBA\n\xC9\x1C\x1D\x05\x06"
#define 遇信号5秒后搜索 "\x15\x1C\xCB\n\x35\xC6\xCC\x85\x86"
#define 信号停止后搜索 "\x1C\xCB\xCD\xCE\xCC\n\x85\x86"
#define 遇信号后停止搜索 "\x15\x1C\xCB\xCC\n\xCD\xCE\x85\x86"
#define 频率 "\x03\x04"
#define 信道号 "\x1C\x1D\xCB"
#define 名称 "\x80\xCF"
#define 名称加频率 "\x80\xCF\x2B\n\x03\x04"
#define 不响应 "\xD0\xAA\xAB"
#define 本地响铃 "\xD1\xD2\xAA\xD3"
#define 回复响应 "\xD4\x88\xAA\xAB"
#define 本地响铃回复响应 "\xD1\xD2\xAA\xD3\n\xD4\x88\xAA\xAB"
#define 不发送 "\xD0\x0E\x0F"
#define 上线码 "\xA5\xA6\xA7"
#define 下线码 "\xA8\xA6\xA7"
#define 上线加下线码 "\xA5\xA6\x2B\xA8\xA6\xA7"
#define Quindar码 "\x51\x75\x69\x6E\x64\x61\x72\xA7"
#define 关闭 "\xC2\xC3"
#define ROGER尾音 "\x52\x4F\x47\x45\x52\x9C\x0B"
#define MDC尾音 "\x4D\x44\x43\x9C\x0B"
#define MDC首音 "\x4D\x44\x43\x9B\x0B"
#define MDC首尾音 "\x4D\x44\x43\x9B\x9C\x0B"
#define MDC首音加ROGER "\x4D\x44\x43\x9B\x0B\x2B\n\x52\x4F\x47\x45\x52"
#define 除信道参数 "\x1F\x1C\x1D\xBF\x07"
#define 全部参数 "\xD5\xD6\xBF\x07"
#define 禁用全部 "\x17\xD7\xD5\xD6"
#define 解锁全部 "\xB8\xB9\xD5\xD6"
#define 五秒 "\x35\x20\xC6"
#define 十秒 "\x31\x30\x20\xC6"
#define 二十秒 "\x32\x30\x20\xC6"
#define 发送时 "\x0E\x0F\x8B"
#define 接收时 "\x05\x06\x8B"
#define 发送接收时 "\x0E\x0F\x2F\x05\x06\x8B"

//ui/menu.c
#define 列表 "\x83\x84"

#define 全部 "\xD5\xD6"
#define 扫描 "\x81\x82"

//ui/main.c
#define 低电压 "\xD8\x8D\x18"
#define 长按井键解锁 "\xD9\xA1\x20\x23\x20\xA2\xB8\xB9"
#define 遇忙 "\x15\x16"
#define 禁止发射 "\x17\xCE\x0E\xBA"
#define 发送超时 "\x0E\x0F\x8A\x8B"
#define 高电压 "\xDA\x8D\x18"

//ui/helper.c
#define 按EXIT键 "\xA1\x20\x45\x58\x49\x54\x20\xA2"
#define 全部按键 "\xD5\xD6\xA1\xA2"

//ui/welcome
#define 解锁 "\xB8\xB9"
//ui/scanner.c
#define 模拟亚音 "\x0C\x0D\x09\x0B"
#define 数字亚音 "\x07\x08\x09\x0B"
#define 频率 "\x03\x04"
#define 存置问 "\x1A\x1B\x3F"
#define 存置了 "\x1A\x1B\x3A"
#define 扫描 "\x81\x82"

//ui/fmradio.c
#define 删除问 "\x1E\x1F?"

#elif ENABLE_CHINESE_FULL==4
#define 步进频率 "\x83\xA4\x83\x06\x93\xFB\x8F\xDC"
#define 接收数字亚音 "\x8E\x16\x82\xDA\x95\x03\x82\xB8\x81\xD0\x89\xF6"
#define 接收模拟亚音 "\x8E\x16\x82\xDA\x95\xCB\x83\x44\x81\xD0\x89\xF6"
#define 发送数字亚音 "\x81\x98\x8A\x0B\x95\x03\x82\xB8\x81\xD0\x89\xF6"
#define 发送模拟亚音 "\x81\x98\x8A\x0B\x95\xCB\x83\x44\x81\xD0\x89\xF6"
#define 频差方向 "\x93\xFB\x8A\x04\x80\xB9\x82\x5B"
#define 频差频率 "\x93\xFB\x8A\x04\x93\xFB\x8F\xDC"
#define 加密 "\x81\x93\x90\x50"
#define 遇忙禁发 "\x91\x99\x82\xB3\x93\xBB\x81\x98"
#define 压扩 "\x81\xE0\x81\xBE"
#define 存置信道 "\x89\x76\x81\xE7\x89\x7F\x92\xB5"
#define 删除信道 "\x84\x42\x8A\xAC\x89\x7F\x92\xB5"
#define 命名信道 "\x86\x9D\x82\x81\x89\x7F\x92\xB5"
#define 信道扫描列表 "\x89\x7F\x92\xB5\x81\xC1\x8D\xEC\x81\xF2\x85\x2B"
#define 扫描列表1 "\x81\xC1\x8D\xEC\x81\xF2\x85\x2B\x31"
#define 扫描列表2 "\x81\xC1\x8D\xEC\x81\xF2\x85\x2B\x32"
#define 搜索恢复模式 "\x90\xEA\x8B\x80\x8A\x5C\x89\x61\x95\xCB\x81\xA8"
#define 发送超时 "\x81\x98\x8A\x0B\x90\xDA\x83\xAE"
#define 省电模式 "\x88\xC8\x81\x1A\x95\xCB\x81\xA8"
#define 麦克风增益 "\x83\x01\x83\x6C\x80\xAD\x97\x39\x8D\x18"
#define 信道显示模式 "\x89\x7F\x92\xB5\x88\xDC\x80\xDE\x95\xCB\x81\xA8"
#define 自动背光 "\x82\x58\x81\xAD\x88\xBF\x82\x05"
#define 背光亮度 "\x88\xBF\x82\x05\x89\xE0\x89\xE2"
#define 首尾音 "\x8A\x13\x84\xDC\x89\xF6"
#define MDC_ID "\x4D\x44\x43\x20\x49\x44"
#define 尾音消除 "\x84\xDC\x89\xF6\x8D\x37\x8A\xAC"
#define 过中继尾音消除 "\x81\xD9\x80\x7F\x8D\xD4\x84\xDC\x89\xF6\x8D\x37\x8A\xAC"
#define 按键即呼 "\x88\x1B\x94\x79\x84\xD7\x86\x19"
#define DTMF_ID "\x44\x54\x4D\x46\x20\x49\x44"
#define DTMF上线码 "\x44\x54\x4D\x46\x80\x28\x87\xB3\x85\xC9"
#define DTMF下线码 "\x44\x54\x4D\x46\x80\x20\x87\xB3\x85\xC9"
#define DTMF发送 "\x44\x54\x4D\x46\x81\x98\x8A\x0B"
#define DTMF侧音 "\x44\x54\x4D\x46\x86\x79\x89\xF6"
#define DTMF响应 "\x44\x54\x4D\x46\x89\x0E\x84\x65"
#define DTMF复位 "\x44\x54\x4D\x46\x89\x61\x84\x16"
#define DTMF预载波 "\x44\x54\x4D\x46\x8D\xC6\x8B\x07\x87\x34"
#define DTMF联系人 "\x44\x54\x4D\x46\x91\x08\x84\x55\x80\x09"
#define DTMF显示 "\x44\x54\x4D\x46\x88\xDC\x80\xDE"
#define AM自动增益 "\x41\x4D\x82\x58\x81\xAD\x97\x39\x8D\x18"
#define 收发模式 "\x82\xDA\x81\x98\x95\xCB\x81\xA8"
#define 静噪等级 "\x95\x7C\x98\xDE\x92\x2A\x82\xF7"
#define 频段解锁 "\x93\xFB\x89\x67\x94\xD5\x91\xF9"
#define 两百M发射 "\x32\x30\x30\x4D\x81\x98\x8C\x7C"
#define 三百五十M发射 "\x33\x35\x30\x4D\x81\x98\x8C\x7C"
#define 五百M发射 "\x35\x30\x30\x4D\x81\x98\x8C\x7C"
#define 三百五十M接收 "\x33\x35\x30\x4D\x8E\x16\x82\xDA"
#define 电池调压 "\x81\x1A\x82\xAD\x8D\x92\x81\xE0"
#define 电池大小 "\x81\x1A\x82\xAD\x80\x23\x80\x29"
#define 参数复位 "\x87\xB0\x95\x03\x89\x61\x84\x16"
#define 发送等于接收 "\x81\x98\x8A\x0B\x3D\x8E\x16\x82\xDA"
#define 发送等于接收加偏移 "\x81\x98\x8A\x0B\x3D\n\x8E\x16\x82\xDA\x2B\x8F\x71\x8F\x48"
#define 发送等于接收减偏移 "\x81\x98\x8A\x0B\x3D\n\x8E\x16\x82\xDA\x2D\x8F\x71\x8F\x48"
#define 关闭 "\x82\xA0\x82\x9B"
#define 开启 "\x80\x55\x84\xC0"
#define 一级 "\x31\x20\x82\xF7"
#define 二级 "\x32\x20\x82\xF7"
#define 三级 "\x33\x20\x82\xF7"
#define 四级 "\x34\x20\x82\xF7"
#define 三十秒 "\x33\x30\x20\x89\x5A"
#define 一分 "\x31\x20\x80\xA6"
#define 两分 "\x32\x20\x80\xA6"
#define 三分 "\x33\x20\x80\xA6"
#define 四分 "\x34\x20\x80\xA6"
#define 五分 "\x35\x20\x80\xA6"
#define 六分 "\x36\x20\x80\xA6"
#define 七分 "\x37\x20\x80\xA6"
#define 八分 "\x38\x20\x80\xA6"
#define 九分 "\x39\x20\x80\xA6"
#define 十五分 "\x31\x35\x20\x80\xA6"
#define 主信道接收发射 "\x81\x62\x89\x7F\x92\xB5\n\x8E\x16\x82\xDA\x81\x98\x8C\x7C"
#define 双信道接收 "\x80\xD6\x89\x7F\x92\xB5\n\x8E\x16\x82\xDA"
#define 主信道发射副信道接收 "\x81\x62\x89\x7F\x92\xB5\x81\x98\x8C\x7C\n\x8E\x7E\x89\x7F\x92\xB5\x8E\x16\x82\xDA"
#define 主信道发射双信道接收 "\x81\x62\x89\x7F\x92\xB5\x81\x98\x8C\x7C\n\x80\xD6\x89\x7F\x92\xB5\x8E\x16\x82\xDA"
#define 遇信号5秒后搜索 "\x91\x99\x89\x7F\x81\x19\n\x35\x89\x5A\x82\x5E\x90\xEA\x8B\x80"
#define 信号停止后搜索 "\x89\x7F\x81\x19\x8F\x6F\x80\x7B\x82\x5E\n\x90\xEA\x8B\x80"
#define 遇信号后停止搜索 "\x91\x99\x89\x7F\x81\x19\x82\x5E\n\x8F\x6F\x80\x7B\x90\xEA\x8B\x80"
#define 频率 "\x93\xFB\x8F\xDC"
#define 信道号 "\x89\x7F\x92\xB5\x81\x19"
#define 名称 "\x82\x81\x8C\x4A"
#define 名称加频率 "\x82\x81\x8C\x4A\x2B\n\x93\xFB\x8F\xDC"
#define 不响应 "\x80\x67\x89\x0E\x84\x65"
#define 本地响铃 "\x80\xF3\x81\xC4\x89\x0E\x8C\x29"
#define 回复响应 "\x82\x1D\x89\x61\x89\x0E\x84\x65"
#define 本地响铃回复响应 "\x80\xF3\x81\xC4\x89\x0E\x8C\x29\n\x82\x1D\x89\x61\x89\x0E\x84\x65"
#define 不发送 "\x80\x67\x81\x98\x8A\x0B"
#define 上线码 "\x80\x28\x87\xB3\x85\xC9"
#define 下线码 "\x80\x20\x87\xB3\x85\xC9"
#define 上线加下线码 "\x80\x28\x87\xB3\x2B\x80\x20\x87\xB3\x85\xC9"
#define Quindar码 "\x51\x75\x69\x6E\x64\x61\x72\x85\xC9"
#define 关闭 "\x82\xA0\x82\x9B"
#define ROGER尾音 "\x52\x4F\x47\x45\x52\x84\xDC\x89\xF6"
#define MDC尾音 "\x4D\x44\x43\x84\xDC\x89\xF6"
#define MDC首音 "\x4D\x44\x43\x8A\x13\x89\xF6"
#define MDC首尾音 "\x4D\x44\x43\x8A\x13\x84\xDC\x89\xF6"
#define MDC首音加ROGER "\x4D\x44\x43\x8A\x13\x89\xF6+\n\x52\x4F\x47\x45\x52"
#define 除信道参数 "\x8A\xAC\x89\x7F\x92\xB5\x87\xB0\x95\x03"
#define 全部参数 "\x82\x62\x8D\x03\x87\xB0\x95\x03"
#define 禁用全部 "\x93\xBB\x81\x4E\x82\x62\x8D\x03"
#define 解锁全部 "\x94\xD5\x91\xF9\x82\x62\x8D\x03"
#define 五秒 "\x35\x20\x89\x5A"
#define 十秒 "\x31\x30\x20\x89\x5A"
#define 二十秒 "\x32\x30\x20\x89\x5A"
#define 发送时 "\x81\x98\x8A\x0B\x83\xAE"
#define 接收时 "\x8E\x16\x82\xDA\x83\xAE"
#define 发送接收时 "\x81\x98\x8A\x0B\x2F\x8E\x16\x82\xDA\x83\xAE"
#define 全部 "\x82\x62\x8D\x03"
#define 扫描 "\x81\xC1\x8D\xEC"
#define 低电压 "\x84\x11\x81\x1A\x81\xE0"
#define 长按井键解锁 "\x80\x8D\x88\x1B\x20\x23\x20\x94\x79\x94\xD5\x91\xF9"
#define 遇忙 "\x91\x99\x82\xB3"
#define 禁止发射 "\x93\xBB\x80\x7B\x81\x98\x8C\x7C"
#define 发送超时 "\x81\x98\x8A\x0B\x90\xDA\x83\xAE"
#define 高电压 "\x8C\xDC\x81\x1A\x81\xE0"
#define 按EXIT键 "\x88\x1B\x20\x45\x58\x49\x54\x20\x94\x79"
#define 全部按键 "\x82\x62\x8D\x03\x88\x1B\x94\x79"
#define 解锁 "\x94\xD5\x91\xF9"
#define 存置问 "\x89\x76\x81\xE7\x3F"
#define 存置了 "\x89\x76\x81\xE7\x3A"
#define 扫描 "\x81\xC1\x8D\xEC"
#define 删除问 "\x84\x42\x8A\xAC\x3F"
#define 列表 "\x81\xF2\x85\x2B"
#define 模拟亚音 "\x95\xCB\x83\x44\x81\xD0\x89\xF6"
#define 数字亚音 "\x95\x03\x82\xB8\x81\xD0\x89\xF6"


#endif
#endif //UV_K5_FIRMWARE_CUSTOM_0_17_CHINESE_H
