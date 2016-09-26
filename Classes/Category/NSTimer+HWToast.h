//
//  NSTimer+HWTOast.h
//  HWToast
//
//  Created by why on 7/22/15.
//  Copyright (c) 2015 why. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSTimer (HWToast)

+ (NSTimer *)scheduledTimerWithTimeInterval:(NSTimeInterval)inTimeInterval block:(void (^)())inBlock repeats:(BOOL)inRepeats;

@end

NS_ASSUME_NONNULL_END
