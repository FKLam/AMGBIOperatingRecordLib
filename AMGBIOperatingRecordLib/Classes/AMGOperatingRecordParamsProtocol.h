//
//  AMGOperatingRecordParamsProtocol.h
//  AMGParallelCar
//
//  Created by amglfk on 2017/8/11.
//  Copyright © 2017年 Aomygod. All rights reserved.
//  BI埋点控制器需要返回参数的协议

#ifndef AMGOperatingRecordParamsProtocol_h
#define AMGOperatingRecordParamsProtocol_h

// BI埋点返回参数规则
/** Url参数key */
#define kAMGOperatingRecordParamsKeyUrl @"OperatingRecordParams_keyUrl"
/** id参数key */
#define kAMGOperatingRecordParamsKeyId @"OperatingRecordParams_keyId"
/** type参数key */
#define kAMGOperatingRecordParamsKeyType @"OperatingRecordParams_keyType"

@protocol AMGOperatingRecordParamsProtocol <NSObject>

@optional
/**
 *  页面埋点需要返回参数的方法(返回参数规则)
 *  @param  reurn   NSDictionary
 */
- (NSDictionary *)operationRecordParams;

@end

#endif /* AMGOperatingRecordParamsProtocol_h */
