/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTextControl.h"


@interface BRAlignmentAdjustingTextControl : BRTextControl {
@private
	int _singleLineAlignment;	// 52 = 0x34
	int _multiLineAlignment;	// 56 = 0x38
}
@property(assign) int multiLineAlignment;	// G=0x302c61e5; S=0x302c61f5; @synthesize=_multiLineAlignment
@property(assign) int singleLineAlignment;	// G=0x302c61c5; S=0x302c61d5; @synthesize=_singleLineAlignment
- (id)init;	// 0x302c5ef1
- (void)_updateAttributes;	// 0x302c5f41
- (void)layoutSubcontrols;	// 0x302c613d
// declared property getter: - (int)multiLineAlignment;	// 0x302c61e5
- (void)setAttributedString:(id)string;	// 0x302c60f9
// declared property setter: - (void)setMultiLineAlignment:(int)alignment;	// 0x302c61f5
// declared property setter: - (void)setSingleLineAlignment:(int)alignment;	// 0x302c61d5
// declared property getter: - (int)singleLineAlignment;	// 0x302c61c5
@end

