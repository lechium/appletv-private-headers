/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, NSArray, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuItemElement : ATVFeedElement {
	NSString *_label;	// 4 = 0x4
	NSString *_label2;	// 8 = 0x8
	NSString *_rightLabel;	// 12 = 0xc
	ATVFeedImageElement *_image;	// 16 = 0x10
	ATVFeedImageElement *_defaultImage;	// 20 = 0x14
	ATVFeedElement *_preview;	// 24 = 0x18
	NSArray *_accessories;	// 28 = 0x1c
	int _ordinal;	// 32 = 0x20
	int _maxOrdinalDigits;	// 36 = 0x24
	BOOL _dimmed;	// 40 = 0x28
}
@property(retain, nonatomic) NSArray *accessories;	// G=0x15d4a5; S=0x15d4b5; @synthesize=_accessories
@property(retain, nonatomic) ATVFeedImageElement *defaultImage;	// G=0x15d465; S=0x15d475; @synthesize=_defaultImage
@property(assign, nonatomic) BOOL dimmed;	// G=0x15d505; S=0x15d515; @synthesize=_dimmed
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x15d445; S=0x15d455; @synthesize=_image
@property(copy, nonatomic) NSString *label;	// G=0x15d3d9; S=0x15d3ed; @synthesize=_label
@property(copy, nonatomic) NSString *label2;	// G=0x15d3fd; S=0x15d411; @synthesize=_label2
@property(assign, nonatomic) int maxOrdinalDigits;	// G=0x15d4e5; S=0x15d4f5; @synthesize=_maxOrdinalDigits
@property(assign, nonatomic) int ordinal;	// G=0x15d4c5; S=0x15d4d5; @synthesize=_ordinal
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x15d485; S=0x15d495; @synthesize=_preview
@property(copy, nonatomic) NSString *rightLabel;	// G=0x15d421; S=0x15d435; @synthesize=_rightLabel
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15cef9
// declared property getter: - (id)accessories;	// 0x15d4a5
- (void)dealloc;	// 0x15d311
// declared property getter: - (id)defaultImage;	// 0x15d465
// declared property getter: - (BOOL)dimmed;	// 0x15d505
// declared property getter: - (id)image;	// 0x15d445
// declared property getter: - (id)label;	// 0x15d3d9
// declared property getter: - (id)label2;	// 0x15d3fd
// declared property getter: - (int)maxOrdinalDigits;	// 0x15d4e5
// declared property getter: - (int)ordinal;	// 0x15d4c5
// declared property getter: - (id)preview;	// 0x15d485
// declared property getter: - (id)rightLabel;	// 0x15d421
// declared property setter: - (void)setAccessories:(id)accessories;	// 0x15d4b5
// declared property setter: - (void)setDefaultImage:(id)image;	// 0x15d475
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x15d515
// declared property setter: - (void)setImage:(id)image;	// 0x15d455
// declared property setter: - (void)setLabel2:(id)a2;	// 0x15d411
// declared property setter: - (void)setLabel:(id)label;	// 0x15d3ed
// declared property setter: - (void)setMaxOrdinalDigits:(int)digits;	// 0x15d4f5
// declared property setter: - (void)setOrdinal:(int)ordinal;	// 0x15d4d5
// declared property setter: - (void)setPreview:(id)preview;	// 0x15d495
// declared property setter: - (void)setRightLabel:(id)label;	// 0x15d435
@end

