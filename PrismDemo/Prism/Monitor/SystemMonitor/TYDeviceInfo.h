//
//  TYDeviceInfo.h
//  PrismDemo
//
//  Created by tany on 2017/8/16.
//  Copyright © 2017年 tany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TYDeviceInfo : NSObject

+ (NSString *)getDeviceName;

+ (NSString *)getDeviceModel;

+ (NSString *)getSystemVersion;

+ (NSString *)getSystemName;

+ (NSDate *)getSystemStartUpTime;

+ (struct utsname)getSystemInfo;

@end
