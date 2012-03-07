/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextPosition.h"

@class WebVisiblePosition;

__attribute__((visibility("hidden")))
@interface UITextPositionImpl : UITextPosition {
@private
	WebVisiblePosition *_webVisiblePosition;	// 4 = 0x4
}
@property(retain, nonatomic) WebVisiblePosition *webVisiblePosition;	// G=0x30157951; S=0x30157869; @synthesize=_webVisiblePosition
+ (id)wrapWebVisiblePosition:(id)position;	// 0x301afbf5
- (void)dealloc;	// 0x3015c149
- (id)description;	// 0x302f08f9
- (BOOL)isEqual:(id)equal;	// 0x302edb5d
// declared property setter: - (void)setWebVisiblePosition:(id)position;	// 0x30157869
// declared property getter: - (id)webVisiblePosition;	// 0x30157951
@end
