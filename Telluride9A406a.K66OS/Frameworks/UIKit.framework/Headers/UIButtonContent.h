/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class UIImage, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
@private
	NSString *title;	// 4 = 0x4
	UIImage *image;	// 8 = 0x8
	UIImage *background;	// 12 = 0xc
	UIColor *titleColor;	// 16 = 0x10
	UIColor *shadowColor;	// 20 = 0x14
}
@property(retain, nonatomic) UIImage *background;	// G=0x35691abd; S=0x356ca605; @synthesize
@property(retain, nonatomic) UIImage *image;	// G=0x35691b25; S=0x35690e69; @synthesize
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x3569b959; @dynamic
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x3569bcfd; S=0x356c146d; @synthesize
@property(retain, nonatomic) NSString *title;	// G=0x35692035; S=0x35690d01; @synthesize
@property(retain, nonatomic) UIColor *titleColor;	// G=0x3569bc35; S=0x356c1295; @synthesize
- (id)initWithCoder:(id)coder;	// 0x358df1dd
// declared property getter: - (id)background;	// 0x35691abd
- (id)copyWithZone:(NSZone *)zone;	// 0x358df0e1
- (void)dealloc;	// 0x356ca629
- (id)description;	// 0x358df40d
- (void)encodeWithCoder:(id)coder;	// 0x358df321
// declared property getter: - (id)image;	// 0x35691b25
// declared property getter: - (BOOL)isEmpty;	// 0x3569b959
// declared property setter: - (void)setBackground:(id)background;	// 0x356ca605
// declared property setter: - (void)setImage:(id)image;	// 0x35690e69
// declared property setter: - (void)setShadowColor:(id)color;	// 0x356c146d
// declared property setter: - (void)setTitle:(id)title;	// 0x35690d01
// declared property setter: - (void)setTitleColor:(id)color;	// 0x356c1295
// declared property getter: - (id)shadowColor;	// 0x3569bcfd
// declared property getter: - (id)title;	// 0x35692035
// declared property getter: - (id)titleColor;	// 0x3569bc35
@end

