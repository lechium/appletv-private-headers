/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate {
	NSString *_action;	// 24 = 0x18
}
@property(copy, nonatomic) NSString *action;	// G=0x2f90737d; S=0x2f907391; @synthesize=_action
- (id)initWithCoder:(id)coder;	// 0x2f906f4d
- (void)_perform:(id)perform;	// 0x2f907181
- (id)_unwindExecutorForTarget:(id)target;	// 0x2f90711d
- (id)_unwindTargetForSelector:(SEL)selector withSender:(id)sender;	// 0x2f90701d
// declared property getter: - (id)action;	// 0x2f90737d
- (void)dealloc;	// 0x2f906f01
- (void)encodeWithCoder:(id)coder;	// 0x2f906fbd
// declared property setter: - (void)setAction:(id)action;	// 0x2f907391
@end

