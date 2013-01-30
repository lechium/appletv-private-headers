/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSAttributedString, UIColor, UIImage, _UIGraphicsLetterpressStyle;

__attribute__((visibility("hidden")))
@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
	NSString *title;	// 4 = 0x4
	NSAttributedString *attributedTitle;	// 8 = 0x8
	UIImage *image;	// 12 = 0xc
	UIImage *background;	// 16 = 0x10
	UIColor *titleColor;	// 20 = 0x14
	UIColor *shadowColor;	// 24 = 0x18
}
@property(retain, nonatomic) NSAttributedString *attributedTitle;	// G=0x34562885; S=0x346bf211; @synthesize
@property(retain, nonatomic) UIImage *background;	// G=0x345622b9; S=0x34564b0d; @synthesize
@property(retain, nonatomic) UIImage *image;	// G=0x34564d25; S=0x34552ac9; @synthesize
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x34552ad9; @dynamic
@property(retain, nonatomic) _UIGraphicsLetterpressStyle *letterpressStyle;	// G=0x345b27fd; S=0x347c0351; 
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x345b27a5; S=0x34561e01; @synthesize
@property(retain, nonatomic) NSString *title;	// G=0x3456282d; S=0x34552a1d; @synthesize
@property(retain, nonatomic) UIColor *titleColor;	// G=0x345b274d; S=0x34561cd1; @synthesize
- (id)initWithCoder:(id)coder;	// 0x346dd201
// declared property getter: - (id)attributedTitle;	// 0x34562885
// declared property getter: - (id)background;	// 0x345622b9
- (id)copyWithZone:(NSZone *)zone;	// 0x347c0115
- (void)dealloc;	// 0x34564b1d
- (id)description;	// 0x347c0361
- (void)encodeWithCoder:(id)coder;	// 0x347c0239
// declared property getter: - (id)image;	// 0x34564d25
// declared property getter: - (BOOL)isEmpty;	// 0x34552ad9
// declared property getter: - (id)letterpressStyle;	// 0x345b27fd
// declared property setter: - (void)setAttributedTitle:(id)title;	// 0x346bf211
// declared property setter: - (void)setBackground:(id)background;	// 0x34564b0d
// declared property setter: - (void)setImage:(id)image;	// 0x34552ac9
// declared property setter: - (void)setLetterpressStyle:(id)style;	// 0x347c0351
// declared property setter: - (void)setShadowColor:(id)color;	// 0x34561e01
// declared property setter: - (void)setTitle:(id)title;	// 0x34552a1d
// declared property setter: - (void)setTitleColor:(id)color;	// 0x34561cd1
// declared property getter: - (id)shadowColor;	// 0x345b27a5
// declared property getter: - (id)title;	// 0x3456282d
// declared property getter: - (id)titleColor;	// 0x345b274d
@end
