//
//  HWToastTool+Permanent.h
//  HWToast
//
//  Created by why on 7/22/15.
//  Copyright (c) 2015 why. All rights reserved.
//

#import "HWToastTool.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWToastTool (Permanent)

+(void)showPermanentToastWithText:(NSString*)text inView:(UIView*)baseView;

+(void)dismissAllToast;

@end

NS_ASSUME_NONNULL_END
