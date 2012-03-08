/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library
#import "SpringBoardUI-Structs.h"

@class UIColor, NSString, UIFont;

@interface SBTextDisplayView : UIView {
	NSString *_text;	// 48 = 0x30
	UIFont *_font;	// 52 = 0x34
	UIColor *_fontColor;	// 56 = 0x38
}
- (id)initWithWidth:(float)width font:(id)font fontColor:(id)color;	// 0x361179c5
- (id)_scriptingInfo;	// 0x36117a65
- (void)_updateText;	// 0x36117c6d
- (void)dealloc;	// 0x36117d15
- (void)drawRect:(CGRect)rect;	// 0x36117ac5
- (void)setFont:(id)font;	// 0x36117bbd
- (void)setFontColor:(id)color;	// 0x36117b65
- (void)setText:(id)text;	// 0x36117c15
@end

