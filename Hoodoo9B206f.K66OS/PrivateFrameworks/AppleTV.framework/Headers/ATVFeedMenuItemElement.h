/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSArray, ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuItemElement : ATVFeedElement {
@private
	NSString *_label;	// 28 = 0x1c
	NSString *_label2;	// 32 = 0x20
	NSString *_rightLabel;	// 36 = 0x24
	ATVFeedImageElement *_image;	// 40 = 0x28
	ATVFeedImageElement *_defaultImage;	// 44 = 0x2c
	ATVFeedElement *_preview;	// 48 = 0x30
	NSArray *_accessories;	// 52 = 0x34
	int _ordinal;	// 56 = 0x38
	int _maxOrdinalDigits;	// 60 = 0x3c
}
@property(retain, nonatomic) NSArray *accessories;	// G=0x36793a09; S=0x36793a19; @synthesize=_accessories
@property(retain, nonatomic) ATVFeedImageElement *defaultImage;	// G=0x367939a1; S=0x367939b1; @synthesize=_defaultImage
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x3679396d; S=0x3679397d; @synthesize=_image
@property(copy, nonatomic) NSString *label;	// G=0x367938d1; S=0x367938e1; @synthesize=_label
@property(copy, nonatomic) NSString *label2;	// G=0x36793905; S=0x36793915; @synthesize=_label2
@property(assign, nonatomic) int maxOrdinalDigits;	// G=0x36793a5d; S=0x36793a6d; @synthesize=_maxOrdinalDigits
@property(assign, nonatomic) int ordinal;	// G=0x36793a3d; S=0x36793a4d; @synthesize=_ordinal
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x367939d5; S=0x367939e5; @synthesize=_preview
@property(copy, nonatomic) NSString *rightLabel;	// G=0x36793939; S=0x36793949; @synthesize=_rightLabel
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x36793449
// declared property getter: - (id)accessories;	// 0x36793a09
- (void)dealloc;	// 0x3679380d
// declared property getter: - (id)defaultImage;	// 0x367939a1
// declared property getter: - (id)image;	// 0x3679396d
// declared property getter: - (id)label;	// 0x367938d1
// declared property getter: - (id)label2;	// 0x36793905
// declared property getter: - (int)maxOrdinalDigits;	// 0x36793a5d
// declared property getter: - (int)ordinal;	// 0x36793a3d
// declared property getter: - (id)preview;	// 0x367939d5
// declared property getter: - (id)rightLabel;	// 0x36793939
// declared property setter: - (void)setAccessories:(id)accessories;	// 0x36793a19
// declared property setter: - (void)setDefaultImage:(id)image;	// 0x367939b1
// declared property setter: - (void)setImage:(id)image;	// 0x3679397d
// declared property setter: - (void)setLabel2:(id)a2;	// 0x36793915
// declared property setter: - (void)setLabel:(id)label;	// 0x367938e1
// declared property setter: - (void)setMaxOrdinalDigits:(int)digits;	// 0x36793a6d
// declared property setter: - (void)setOrdinal:(int)ordinal;	// 0x36793a4d
// declared property setter: - (void)setPreview:(id)preview;	// 0x367939e5
// declared property setter: - (void)setRightLabel:(id)label;	// 0x36793949
@end

