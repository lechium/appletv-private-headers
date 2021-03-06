/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIFont, NSString;

__attribute__((visibility("hidden")))
@interface InlineCandidateCell : UIView {
	NSString *_candidate;	// 84 = 0x54
	unsigned _index;	// 88 = 0x58
	UIFont *_font;	// 92 = 0x5c
	CGSize _stringImageSize;	// 96 = 0x60
	BOOL _highlighted;	// 104 = 0x68
	id _target;	// 108 = 0x6c
	SEL _action;	// 112 = 0x70
	BOOL _lastItem;	// 116 = 0x74
	BOOL _dontDrawRightEdge;	// 117 = 0x75
}
@property(readonly, assign) unsigned index;	// G=0x347dccd9; converted property
@property(readonly, assign) CGSize stringImageSize;	// G=0x347dccc1; converted property
- (id)initWithCandidate:(id)candidate andIndex:(unsigned)index withFontSize:(float)fontSize target:(id)target action:(SEL)action;	// 0x347dcb19
- (void)dealloc;	// 0x347dcc75
- (void)dontDrawRightEdge:(BOOL)edge;	// 0x347dcce9
- (void)drawRect:(CGRect)rect;	// 0x347dcd35
// converted property getter: - (unsigned)index;	// 0x347dccd9
- (void)setHighlighted:(BOOL)highlighted;	// 0x347dcd09
- (void)setLastItem:(BOOL)item;	// 0x347dccf9
// converted property getter: - (CGSize)stringImageSize;	// 0x347dccc1
@end

