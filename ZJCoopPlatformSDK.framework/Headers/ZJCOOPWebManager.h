//
//  ZJCOOPWebManager.h
//  zjdoctor
//
//  Created by 张润东 on 2019/9/18.
//  Copyright © 2019 世博. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZJCOOPWebManager : NSObject
#pragma mark - 单例
+ (instancetype)sharedInstance;
#pragma mark - 处理h5交互跳转逻辑
- (void)dealWithWebViewVC:(UIViewController *)webVC infoDict:(NSDictionary *)infoDict;

@end

NS_ASSUME_NONNULL_END
