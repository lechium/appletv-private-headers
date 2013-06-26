/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollView.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface _UIEmojiScrollView : UIScrollView {
	double _delay;	// 464 = 0x1d0
	BOOL _canDragToScroll;	// 472 = 0x1d8
}
@property(assign) double delay;	// G=0x2f6e1865; S=0x2f6e1899; @synthesize=_delay
- (id)initWithFrame:(CGRect)frame;	// 0x2f6e1705
- (void)_lookForScrolling;	// 0x2f6e17e5
- (void)_stopLookingForScrolling;	// 0x2f6e17d1
- (double)_touchDelayForScrollDetection;	// 0x2f6e1789
// declared property getter: - (double)delay;	// 0x2f6e1865
- (void)setContentOffset:(CGPoint)offset;	// 0x2f6e17a1
// declared property setter: - (void)setDelay:(double)delay;	// 0x2f6e1899
- (BOOL)touchesShouldBegin:(id)touches withEvent:(id)event inContentView:(id)contentView;	// 0x2f6e183d
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x2f6e1855
@end
