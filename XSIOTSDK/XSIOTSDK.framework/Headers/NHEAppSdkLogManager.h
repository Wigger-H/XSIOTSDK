//
//  NHEAppSdkLogManager.h
//  IOTSDKFramework
//
//  Created by huangwei on 2023/3/13.
//  Copyright © 2023 arcsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NHEAppSdkLogManager : NSObject

@property (nonatomic, assign) BOOL collectAppSdkLogEnable; // 收集AppSDK日志开关 YES:开 NO:关

+ (instancetype)sharedInstance;

- (void)collectAppSdkLogWithLine:(NSUInteger)line method:(NSString *)methodName format:(NSString *)format;

@end

NS_ASSUME_NONNULL_END
