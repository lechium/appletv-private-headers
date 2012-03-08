/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextSelectionRect.h"

@class WebSelectionRect;

__attribute__((visibility("hidden")))
@interface UITextSelectionRectImpl : UITextSelectionRect {
@private
	WebSelectionRect *webRect;	// 4 = 0x4
}
@property(retain, nonatomic) WebSelectionRect *webRect;	// G=0x3320fba9; S=0x3320fbb9; @synthesize
+ (id)rectWithWebRect:(id)webRect;	// 0x3320f9e1
+ (id)rectsWithWebRects:(id)webRects;	// 0x3320fa29
- (id)initWithWebRect:(id)webRect;	// 0x3320f955
- (void)dealloc;	// 0x3320f99d
- (id)range;	// 0x3320fba5
- (CGRect)rect;	// 0x3320fb3d
// declared property setter: - (void)setWebRect:(id)rect;	// 0x3320fbb9
// declared property getter: - (id)webRect;	// 0x3320fba9
- (int)writingDirection;	// 0x3320fb7d
@end

