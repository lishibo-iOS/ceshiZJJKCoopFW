//
//  ZJCoopManager.h
//  ZJCoopPlatformSDK
//
//  Created by 张润东 on 2019/10/16.
//  Copyright © 2019 张润东. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZJCoopApi.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ZJCoopDelegate <NSObject>
@required
/**
各种操作的回调
 @param type 0登录结果回调  1获取三方orgCode回调  2收到视频呼叫回调  3未成功登录信息
 @param success 成功
 @param params 回调参数 如果需要的话
 */
-(void)coopResponseWithType:(NSInteger)type success:(BOOL)success params:(NSDictionary*)params;
@end


@interface ZJCoopManager : NSObject
@property(nonatomic, weak) id<ZJCoopDelegate> delegate;

@property(nonatomic, strong) NSString* sdkErrorInfo;

+(ZJCoopManager*)shareManager;
/**
 设置环境:0正式 1测试 2开发
 @param evn 环境
 */
-(BOOL)setEnv:(NSInteger)evn;
/**
 获取三方机构code
 @param orgCode 获取到机构才可以登录平台
 */
-(void)getThirdOrgCode:(NSString*)orgCode;
/**
 登录协作平台
 @param clientId 客户端id
 @param secret 客户端secret
 @param doctorId 登录用户业务userId
 @param doctorName 登录人姓名
 @param idCard 登录人身份证号码
 @param thirdOrgCode 第三方orgCode
 @param deptCode 业务科室codede
 */
-(void)signInPlatformWithClientId:(NSString*)clientId appSecret:(NSString*)secret doctorId:(NSString*)doctorId  doctorName:(NSString*)doctorName userIdCard:(NSString*)idCard  thirdOrgCode:(NSString*)thirdOrgCode deptCode:(NSString*)deptCode;

/**
 退出协作平台
 */
-(void)signOutPlatform;
/**
判断协作平台是否登录状态
 */
-(BOOL)isLogin;

/**
 发起门诊/住院的上/下转 或 协作申请
 @param type 转诊类型
 @param isCoop 若是协作申请 type失效
 @param name 转诊人姓名
 @param gender 性别 1男 2女
 @param age 年龄 传数字
 @param mobile 手机号码
 @param idCard 身份证号
 @param orgCode 发起方机构code
 @param orgName 发起方机构name
 */
-(void)startApplyWithTransType:(ZJTransType)type orCoop:(BOOL)isCoop userName:(NSString*)name gender:(NSString*)gender age:(NSString*)age mobile:(NSString*)mobile idCard:(NSString*)idCard orgCode:(NSString*)orgCode orgName:(NSString*)orgName;


/**
 工作台-点击详情
 @param applyId 申请单id
 @param isApply YES申请方/接诊方
 */
-(void)loadCoopWorkStationWithApplyId:(NSString*)applyId isApply:(BOOL)isApply;


/**
 消息跳转  协作remote 转诊referral 协同coordination
 */
/**
 协作记录
 @param applyId 申请id
 */
-(void)loadCoopRecord:(NSString*)applyId;
/**
 查看住院/门诊的 上转/下转记录
 @param recordId 记录id
 */
-(void)loadReferralRecord:(NSString*)recordId;

/**
 医技协同记录
 @param recordId 记录id
 */
-(void)loadCoordinationRecord:(NSString*)recordId;

/**
 通用 加载url 可以是全路径也可以相对路径
 */
-(void)loadWithBusinessUrl:(NSString*)url;
/**
 发起医技协同
 @param type 类型
 @param name 用户姓名
 @param gender 性别
 @param age 年龄
 @param mobile 手机号
 @param idCard 身份证
 @param orgCode 机构code
 @param orgName 机构名称
 */
-(void)startCoordinationWithEventType:(NSString*)type userName:(NSString*)name gender:(NSString*)gender age:(NSString*)age mobile:(NSString*)mobile idCard:(NSString*)idCard orgCode:(NSString*)orgCode orgName:(NSString*)orgName;
@end

NS_ASSUME_NONNULL_END
