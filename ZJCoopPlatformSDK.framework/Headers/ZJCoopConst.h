//
//  ZJCoopConst.h
//  zjdoctor
//
//  Created by 张润东 on 2019/9/17.
//  Copyright © 2019 世博. All rights reserved.
//

#ifndef ZJCoopConst_h
#define ZJCoopConst_h
//key
static NSString*  const HTTP_COOP_Native_key =  @"HTTP_COOP_Native_key";  //设置环境key
static NSString*  const HTTP_COOP_H5_key =  @"HTTP_COOP_H5_key";  //设置环境key
static NSString*  const HTTP_COOP_THIRD_key =  @"HTTP_COOP_THIRD_key";  //设置环境key
//业务平台 原生域名url
static NSString* const HTTP_COOP_Native_pro =  @"https://p-gateway.hbzjjk.com";  //正式
static NSString* const HTTP_COOP_Native_test =  @"http://test-gateway.hbzjjk.com";  //测试
static NSString* const HTTP_COOP_Native_dev =  @"http://192.168.1.211:10430";  //开发
//协作平台 三方接口域名url
static NSString* const HTTP_COOP_Third_pro =  @"https://coop.hbzjjk.com";  //正式
static NSString* const HTTP_COOP_Third_test =  @"https://demo-coop.hbzjjk.com";  //测试
static NSString* const HTTP_COOP_Third_dev =  @"https://dev-coop.hbzjjk.com";  //开发
//协作平台 H5网页前缀
static NSString* const HTTP_COOP_H5_pro =  @"https://coopmobile.hbzjjk.com/#";  //正式
static NSString* const HTTP_COOP_H5_test =  @"http://192.168.1.211:10892/#";  //测试
static NSString* const HTTP_COOP_H5_dev =  @"http://192.168.1.211:10891/#";  //开发

//static NSString* const HTTP_COOP_H5_localTest =  @"HTTP_COOP_H5_localTest";  //本地测试协作平台urlkey




//接口 url
static NSString* const API_COOP_ThirdLogin =  @"/user/auth/authorize";  //门诊上转 （发起/查记录）

static NSString* const H5_Referral_UP =  @"/referral/out-patient-up-referral";  //门诊上转 （发起/查记录）
static NSString* const H5_Hospitalization_UP  = @"/referral/hospitalization-up-referral";  //住院上转（发起/查记录）
static NSString* const H5_Referral_DOWN  = @"/referral/out-patient-down-referral";  //门诊下转（发起/查记录）
static NSString* const H5_Hospitalization_DOWN =  @"/referral/hospitalization-down-referral";  //住院下转（发起/查记录）


static NSString* const H5_ApplycCollaborationFUNC =  @"/remote-collaboration/apply-collaboration";  // 发起协作申请
static NSString* const H5_AcceptWorkSTATION =  @"/remote-collaboration/accept-work-station";  //上级接收工作台
static NSString* const H5_ApplyWorkSTATION =  @"/remote-collaboration/apply-work-station";  //下级申请工作台
static NSString* const H5_CoopListDetailURL_completed=  @"/remote-collaboration/apply-work-station";  //申请记录协作记录不传type




//消息中间页面
static NSString* const CONST_COOP_JumpPage =  @"/jump-page";  //消息中间页面   参数 originUrl ，id

//常量
static NSString* const CONST_COOP_THIRD_KeyForToken =  @"COOP_THIRD_KeyForToken";  //存三方token的key
static NSString* const CONST_COOP_THIRD_OrgCode =  @"CONST_COOP_THIRD_OrgCode";  //存三方orgCode
static NSString* const CONST_COOP_UserIdKey =  @"CONST_COOP_UserIdKey";  //存登录者业务的userId




#endif /* ZJCoopConst_h */
