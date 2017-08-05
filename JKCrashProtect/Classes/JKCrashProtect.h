//
//  JKCrashProtect.h
//  Pods
//
//  Created by Jack on 17/4/28.
//
//

#import <Foundation/Foundation.h>


@interface JKCrashProtect : NSObject

@property (nonatomic,copy) NSString *crashMessages;

/**
 注册JKCrashProtect的crash防护功能
 */
+ (void)registerJKCrashProtect;

/**
 收集crash信息的方法
这个方法需要通过category进行重写，方便在发送给后台的时候携带者更多的信息，比如机型，时间，版本号，操作系统等等信息
 @param crashMessage 收集到的crash信息
 */
- (void)JKCrashProtectCollectCrashMessages;

@end
