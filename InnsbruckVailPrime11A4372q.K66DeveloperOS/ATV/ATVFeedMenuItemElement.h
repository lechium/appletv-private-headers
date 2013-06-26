/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class UIColor, NSString, ATVFeedImageElement, NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuItemElement : ATVFeedElement {
	BOOL _dimmed;	// 4 = 0x4
	NSString *_label;	// 8 = 0x8
	NSString *_label2;	// 12 = 0xc
	NSString *_rightLabel;	// 16 = 0x10
	ATVFeedImageElement *_image;	// 20 = 0x14
	ATVFeedImageElement *_defaultImage;	// 24 = 0x18
	ATVFeedElement *_preview;	// 28 = 0x1c
	NSArray *_accessories;	// 32 = 0x20
	int _ordinal;	// 36 = 0x24
	int _maxOrdinalDigits;	// 40 = 0x28
	int _progressPercentage;	// 44 = 0x2c
	NSDictionary *_styleKeyValues;	// 48 = 0x30
}
@property(retain, nonatomic) NSArray *accessories;	// G=0x12b859; S=0x12b869; @synthesize=_accessories
@property(retain, nonatomic) ATVFeedImageElement *defaultImage;	// G=0x12b7e9; S=0x12b7f9; @synthesize=_defaultImage
@property(assign, nonatomic) BOOL dimmed;	// G=0x12b8f1; S=0x12b901; @synthesize=_dimmed
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x12b7b1; S=0x12b7c1; @synthesize=_image
@property(copy, nonatomic) NSString *label;	// G=0x12b745; S=0x12b759; @synthesize=_label
@property(copy, nonatomic) NSString *label2;	// G=0x12b769; S=0x12b77d; @synthesize=_label2
@property(readonly, assign, nonatomic) UIColor *labelColor;	// G=0x12b69d; 
@property(readonly, assign, nonatomic) UIColor *labelColor2;	// G=0x12b6f1; 
@property(assign, nonatomic) int maxOrdinalDigits;	// G=0x12b8b1; S=0x12b8c1; @synthesize=_maxOrdinalDigits
@property(assign, nonatomic) int ordinal;	// G=0x12b891; S=0x12b8a1; @synthesize=_ordinal
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x12b821; S=0x12b831; @synthesize=_preview
@property(assign, nonatomic) int progressPercentage;	// G=0x12b8d1; S=0x12b8e1; @synthesize=_progressPercentage
@property(copy, nonatomic) NSString *rightLabel;	// G=0x12b78d; S=0x12b7a1; @synthesize=_rightLabel
@property(retain, nonatomic) NSDictionary *styleKeyValues;	// G=0x12b911; S=0x12b921; @synthesize=_styleKeyValues
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x12afc5
- (void).cxx_destruct;	// 0x12b949
// declared property getter: - (id)accessories;	// 0x12b859
// declared property getter: - (id)defaultImage;	// 0x12b7e9
// declared property getter: - (BOOL)dimmed;	// 0x12b8f1
// declared property getter: - (id)image;	// 0x12b7b1
// declared property getter: - (id)label;	// 0x12b745
// declared property getter: - (id)label2;	// 0x12b769
// declared property getter: - (id)labelColor;	// 0x12b69d
// declared property getter: - (id)labelColor2;	// 0x12b6f1
// declared property getter: - (int)maxOrdinalDigits;	// 0x12b8b1
// declared property getter: - (int)ordinal;	// 0x12b891
// declared property getter: - (id)preview;	// 0x12b821
// declared property getter: - (int)progressPercentage;	// 0x12b8d1
// declared property getter: - (id)rightLabel;	// 0x12b78d
// declared property setter: - (void)setAccessories:(id)accessories;	// 0x12b869
// declared property setter: - (void)setDefaultImage:(id)image;	// 0x12b7f9
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x12b901
// declared property setter: - (void)setImage:(id)image;	// 0x12b7c1
// declared property setter: - (void)setLabel2:(id)a2;	// 0x12b77d
// declared property setter: - (void)setLabel:(id)label;	// 0x12b759
// declared property setter: - (void)setMaxOrdinalDigits:(int)digits;	// 0x12b8c1
// declared property setter: - (void)setOrdinal:(int)ordinal;	// 0x12b8a1
// declared property setter: - (void)setPreview:(id)preview;	// 0x12b831
// declared property setter: - (void)setProgressPercentage:(int)percentage;	// 0x12b8e1
// declared property setter: - (void)setRightLabel:(id)label;	// 0x12b7a1
// declared property setter: - (void)setStyleKeyValues:(id)values;	// 0x12b921
// declared property getter: - (id)styleKeyValues;	// 0x12b911
@end
