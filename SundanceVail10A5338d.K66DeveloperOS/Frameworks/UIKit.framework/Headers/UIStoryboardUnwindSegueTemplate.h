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
@property(copy, nonatomic) NSString *action;	// G=0x3104cef1; S=0x3104cf05; @synthesize=_action
- (id)initWithCoder:(id)coder;	// 0x3104cb51
- (void)_perform:(id)perform;	// 0x3104ccf9
- (id)_unwindExecutorForTarget:(id)target;	// 0x3104ccad
- (id)_unwindTargetForSelector:(SEL)selector withSender:(id)sender;	// 0x3104cc21
// declared property getter: - (id)action;	// 0x3104cef1
- (void)dealloc;	// 0x3104cb05
- (void)encodeWithCoder:(id)coder;	// 0x3104cbc1
// declared property setter: - (void)setAction:(id)action;	// 0x3104cf05
@end

