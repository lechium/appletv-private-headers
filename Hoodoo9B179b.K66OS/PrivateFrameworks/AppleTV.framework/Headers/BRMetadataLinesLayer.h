/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMetadataContainer.h"
#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray;

@interface BRMetadataLinesLayer : BRControl <BRMetadataContainer> {
@private
	CGSize _sizeThatFits;	// 48 = 0x30
	float _lineHeight;	// 56 = 0x38
	BOOL _delimeterDisabled;	// 60 = 0x3c
	NSArray *_lineLayers;	// 64 = 0x40
	NSArray *_values;	// 68 = 0x44
	NSArray *_labels;	// 72 = 0x48
	float _extraLineHeight;	// 76 = 0x4c
	BOOL _useMultiLineMetadata;	// 80 = 0x50
}
@property(assign, nonatomic) BOOL delimeterDisabled;	// G=0x302b0835; S=0x302b0845; @synthesize=_delimeterDisabled
@property(assign, nonatomic) float extraLineHeight;	// G=0x302b08f1; S=0x302b0901; @synthesize=_extraLineHeight
@property(retain, nonatomic) NSArray *labels;	// G=0x302b08bd; S=0x302b08cd; @synthesize=_labels
@property(retain, nonatomic) NSArray *lineLayers;	// G=0x302b0855; S=0x302b0865; @synthesize=_lineLayers
@property(assign, nonatomic) BOOL useMultiLineMetadata;	// G=0x302b0911; S=0x302b0921; @synthesize=_useMultiLineMetadata
@property(retain, nonatomic) NSArray *values;	// G=0x302b0889; S=0x302b0899; @synthesize=_values
- (id)init;	// 0x302b0465
- (void)_buildLineLayersForValues:(id)values andLabels:(id)labels usingIndexes:(id)indexes;	// 0x302b0c29
- (void)_layoutLines;	// 0x302b0f75
- (void)_setLineHeightUsingValues:(id)values andLabels:(id)labels;	// 0x302b0931
- (id)_visibleMetadataIndexesForHeight:(float)height andValues:(id)values;	// 0x302b0ae1
- (float)_widthOfWidestLabel;	// 0x302b1189
- (id)accessibilityLabel;	// 0x302b1291
- (void)dealloc;	// 0x302b04c9
// declared property getter: - (BOOL)delimeterDisabled;	// 0x302b0835
// declared property getter: - (float)extraLineHeight;	// 0x302b08f1
// declared property getter: - (id)labels;	// 0x302b08bd
- (void)layoutSubcontrols;	// 0x302b06e1
// declared property getter: - (id)lineLayers;	// 0x302b0855
// declared property setter: - (void)setDelimeterDisabled:(BOOL)disabled;	// 0x302b0845
// declared property setter: - (void)setExtraLineHeight:(float)height;	// 0x302b0901
// declared property setter: - (void)setLabels:(id)labels;	// 0x302b08cd
// declared property setter: - (void)setLineLayers:(id)layers;	// 0x302b0865
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x302b053d
- (void)setMetadata:(id)metadata withLabels:(id)labels frameWidth:(float)width maxHeight:(float)height;	// 0x302b05c5
// declared property setter: - (void)setUseMultiLineMetadata:(BOOL)metadata;	// 0x302b0921
// declared property setter: - (void)setValues:(id)values;	// 0x302b0899
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x302b06c5
// declared property getter: - (BOOL)useMultiLineMetadata;	// 0x302b0911
// declared property getter: - (id)values;	// 0x302b0889
@end

