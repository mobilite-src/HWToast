//
//  HWActivityIndicatorView.h
//  DuDuChat
//
//  Created by why on 7/3/15.
//  Copyright (c) 2015 PalmWin. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HWActivityIndicatorView : UIView

@property (nonatomic) UIActivityIndicatorViewStyle activityIndicatorViewStyle;

- (void)startAnimating;

@end

NS_ASSUME_NONNULL_END
