//
//  SZBluetoothManager.h
//  SZBleSDK
//
//  Created by 侯艳静 on 2017/12/28.
//  Copyright © 2017年 houyanjing. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SZBleDelegate<NSObject>

-(void)openSuccecc:(NSDictionary *)dic;

-(void)GPRSBackgroundOpenDoor:(NSDictionary *)dic;

-(void)BLEListOpenDoor:(NSDictionary *)dic;

-(void)aboutOpenDoorHistory:(NSString *)str;

@end

@interface SZBluetoothManager : NSObject
/*
 *当前开门返回的数据信息
 */
@property (nonatomic, strong) NSString * message;
/*
 *开门数据回调
 */
@property (nonatomic, weak) id<SZBleDelegate>delegate;
/*
 *蓝牙开锁SDK管理
 */
+(SZBluetoothManager *)shareManager;

- (void)aboutKeyList:(NSArray *)arr;

-(void)opendoor:(NSDictionary *)dic;
//开门记录
-(void)opendoorHistory:(NSString *)str;
//蓝牙列表开门 所搜索到的蓝牙设备
-(void)aboutBLEListOpenDoor:(NSDictionary *)dic;
//通过选中列表值开门
-(void)aboutBLEListPer:(NSString *)str andUpload:(BOOL)isUpload;
//自动开锁开关
-(void)lockSwitch:(BOOL)isTrue;
//uploadDeviceTimeWithName:
-(void)uploadDeviceTimeWithName:(NSDictionary *)device_name;

-(BOOL)szsaveUserPlot_id:(NSString *)plot_id;

@end
