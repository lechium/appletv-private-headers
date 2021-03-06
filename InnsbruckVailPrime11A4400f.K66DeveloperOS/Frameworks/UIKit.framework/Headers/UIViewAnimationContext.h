/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIViewAnimationContext : NSObject {
	NSArray *_viewAnimations;	// 4 = 0x4
	int _animationCount;	// 8 = 0x8
	id _completionHandler;	// 12 = 0xc
}
@property(assign, nonatomic) int animationCount;	// G=0x2f465465; S=0x2f465475; @synthesize=_animationCount
@property(readonly, assign, nonatomic) id completionHandler;	// G=0x2f465639; @synthesize=_completionHandler
@property(retain, nonatomic) NSArray *viewAnimations;	// G=0x2f4655e1; S=0x2f417fdd; @synthesize=_viewAnimations
- (id)initWithCompletionHandler:(id)completionHandler;	// 0x2f417f89
// declared property getter: - (int)animationCount;	// 0x2f465465
// declared property getter: - (id)completionHandler;	// 0x2f465639
- (void)dealloc;	// 0x2f465649
// declared property setter: - (void)setAnimationCount:(int)count;	// 0x2f465475
// declared property setter: - (void)setViewAnimations:(id)animations;	// 0x2f417fdd
// declared property getter: - (id)viewAnimations;	// 0x2f4655e1
@end

