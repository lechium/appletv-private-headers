/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAnimation.h"


__attribute__((visibility("hidden")))
@interface UIScrollViewScrollAnimation : UIAnimation {
@private
	CGPoint _originalOffset;	// 44 = 0x2c
	CGPoint _targetOffset;	// 52 = 0x34
	float _accuracy;	// 60 = 0x3c
	BOOL _adjustsForContentOffsetDelta;	// 64 = 0x40
}
- (void)adjustForContentOffsetDelta:(CGPoint)contentOffsetDelta;	// 0x3023ac39
- (void)dealloc;	// 0x302059ed
- (void)setProgress:(float)progress;	// 0x30205655
@end

