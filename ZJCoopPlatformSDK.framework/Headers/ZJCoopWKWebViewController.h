//
//  ZJCoopWKWebViewController.h
//  zjdoctor
//
//  Created by 张润东 on 2019/9/18.
//  Copyright © 2019 世博. All rights reserved.
//

#import <WebKit/WebKit.h>
#import "COOPScriptMessageDelegate.h"
#import "ZJCOOPBaseController.h"
NS_ASSUME_NONNULL_BEGIN

@interface ZJCoopWKWebViewController : ZJCOOPBaseController
@property (nonatomic, strong) WKWebView *webView;
@property (nonatomic, strong) NSString *urlString;
@property (nonatomic, assign) BOOL closeDirect;//是否允许直接返回上个原生界面
@property (nonatomic, strong) UIBarButtonItem *backBtn;

- (void)backNative;//返回事件
- (void)closeNative;//关闭webviewVC，返回根视图控制器
#pragma mark - 通用js交互方法
- (void)inputValueJSWithJSString:(NSString *)jsString;
- (void)setupWKWebView;
@end

NS_ASSUME_NONNULL_END
