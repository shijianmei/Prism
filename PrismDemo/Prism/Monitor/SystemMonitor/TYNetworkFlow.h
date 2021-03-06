//
//  TYNetworkFlow.h
//  PrismDemo
//
//  Created by tany on 2017/8/11.
//  Copyright © 2017年 tany. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef struct {
    unsigned int wifiSent;
    unsigned int wifiReceived;
    unsigned int cellularSent;
    unsigned int cellularReceived;
    unsigned int totalSent;
    unsigned int totalReceived;
}ty_flow_IOBytes;

@interface TYNetworkFlow : NSObject

+(ty_flow_IOBytes)getFlowIOBytes;

// ip address
+ (NSString *)getWifiIPAddress;
+ (NSString *)getCellularIPAddress;
+ (NSDictionary *)getIPAddresses;

+ (NSString *)getIPAddress:(BOOL)preferIPv4;

@end
