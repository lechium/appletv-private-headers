/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiImageView : UIView {
@private
	NSString *_emojiString;	// 48 = 0x30
}
@property(retain, nonatomic) NSString *emojiString;	// G=0x33152231; S=0x33152241; 
- (id)initWithFrame:(CGRect)frame emojiString:(id)string;	// 0x33152169
- (void)dealloc;	// 0x331521ed
- (void)drawRect:(CGRect)rect;	// 0x33152295
// declared property getter: - (id)emojiString;	// 0x33152231
// declared property setter: - (void)setEmojiString:(id)string;	// 0x33152241
@end

