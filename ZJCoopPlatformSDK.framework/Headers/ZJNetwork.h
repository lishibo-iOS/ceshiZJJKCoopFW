//
//  ZJNetwork.h
//  chat-demo
//
//  Created by 张润东 on 2019/9/6.
//  Copyright © 2019 张润东. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface ZJNetwork : NSObject <NSURLSessionDelegate>

+ (ZJNetwork *)sharedInstance;

/**带body的网络请求*/
-(void)postWithBody:(NSMutableDictionary*)params
             urlStr:(NSString *)urlStr
            success:(void (^)(id res))res
            failure:(void (^)(id error))errorInfo;
@end

NS_ASSUME_NONNULL_END
