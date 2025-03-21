//
//  HWToast.h
//  DuDuChat
//
//  Created by why on 7/1/15.
//  Copyright (c) 2015 PalmWin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWToastMaker.h"
#import "HWToastView.h"

#import "HWToastTool.h"
#import "HWToastTool+Permanent.h"
#import "UIView+HWToast.h"
#import "NSString+HWToast.h"
#import "NSTimer+HWToast.h"
#import "HWTextToastView.h"
#import "HWPieChartToastView.h"
#import "HWLoadingToastView.h"
#import "HWPieChartProgressView.h"
#import "HWActivityIndicatorView.h"

NS_ASSUME_NONNULL_BEGIN

@interface HWToast : NSObject

/**
 *  Show toast with HWToastMaker. You can set the parent view and the content view in HWToastMaker.
 *
 *  @param block scope within which you can set up the toast view.
 *
 *  @return The toast view.
 */
+(HWToastView*)showToastWithMaker:(void(^)(HWToastMaker *maker))block;

/**
 *  Dismiss the toast view.
 *
 *  @param toastView the toast view to dismiss
 *  @param animated  whether the dismiss should be animated
 */
+(void)dismissToast:(UIView *)toastView animated:(BOOL)animated;


@end

NS_ASSUME_NONNULL_END
