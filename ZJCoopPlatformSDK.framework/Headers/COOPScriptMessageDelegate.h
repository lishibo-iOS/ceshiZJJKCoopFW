//
//  WeakScriptMessageDelegate.h
//  WKWebViewDemo
//
//  Created by zjjk on 2018/6/11.
//  Copyright © 2018年 zjjk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@interface COOPScriptMessageDelegate : NSObject <WKScriptMessageHandler>

@property (nonatomic, assign) id<WKScriptMessageHandler> scriptDelegate;

+ (instancetype)scriptWithDelegate:(id<WKScriptMessageHandler>)delegate;

//- (instancetype)initWithDelegate:(id<WKScriptMessageHandler>)scriptDelegate;

@end
