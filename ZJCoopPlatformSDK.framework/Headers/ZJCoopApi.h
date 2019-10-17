//
//  ZJCoopApi.h
//  zjdoctor
//
//  Created by 张润东 on 2019/9/17.
//  Copyright © 2019 世博. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZJCoopConst.h"

NS_ASSUME_NONNULL_BEGIN


typedef enum : NSUInteger {
    ZJ_Referral_UP,
    ZJ_Hospital_UP,
    ZJ_Referral_DOWN,
    ZJ_Hospital_DOWN,
}ZJTransType;



@interface ZJCoopApi : NSObject


@end

NS_ASSUME_NONNULL_END
