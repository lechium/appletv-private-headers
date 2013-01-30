/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"

@class NSDictionary;

@interface NSStringDrawingContext : NSObject {
	float _minimumScaleFactor;	// 4 = 0x4
	float _minimumTrackingAdjustment;	// 8 = 0x8
	float _actualScaleFactor;	// 12 = 0xc
	float _actualTrackingAdjustment;	// 16 = 0x10
	CGRect _totalBounds;	// 20 = 0x14
	NSDictionary *_linkAttributes;	// 36 = 0x24
	unsigned _numberOfLineFragments;	// 40 = 0x28
	unsigned _maximumNumberOfLines;	// 44 = 0x2c
	BOOL _wantsNumberOfLineFragments;	// 48 = 0x30
	BOOL _multilineTruncation;	// 49 = 0x31
	BOOL _wantsBaselineOffset;	// 50 = 0x32
	float _baselineOffset;	// 52 = 0x34
	BOOL _wantsScaledBaselineOffset;	// 56 = 0x38
	float _scaledBaselineOffset;	// 60 = 0x3c
	BOOL _wantsScaledLineHeight;	// 64 = 0x40
	float _scaledLineHeight;	// 68 = 0x44
}
@property(assign, nonatomic) float actualScaleFactor;	// G=0x32ca7461; S=0x32ca7471; @synthesize=_actualScaleFactor
@property(assign, nonatomic) float actualTrackingAdjustment;	// G=0x32ca7481; S=0x32ca7491; @synthesize=_actualTrackingAdjustment
@property(assign, nonatomic) float baselineOffset;	// G=0x32ca7581; S=0x32ca7591; @synthesize=_baselineOffset
@property(assign, nonatomic) unsigned maximumNumberOfLines;	// G=0x32ca7541; S=0x32ca7551; @synthesize=_maximumNumberOfLines
@property(assign, nonatomic) float minimumScaleFactor;	// G=0x32ca7421; S=0x32ca7431; @synthesize=_minimumScaleFactor
@property(assign, nonatomic) float minimumTrackingAdjustment;	// G=0x32ca7441; S=0x32ca7451; @synthesize=_minimumTrackingAdjustment
@property(assign, nonatomic) unsigned numberOfLineFragments;	// G=0x32ca7501; S=0x32ca7511; @synthesize=_numberOfLineFragments
@property(assign, nonatomic) float scaledBaselineOffset;	// G=0x32ca75c1; S=0x32ca75d1; @synthesize=_scaledBaselineOffset
@property(assign, nonatomic) float scaledLineHeight;	// G=0x32ca7601; S=0x32ca7611; @synthesize=_scaledLineHeight
@property(assign, nonatomic) CGRect totalBounds;	// G=0x32ca74a1; S=0x32ca74c5; @synthesize=_totalBounds
@property(assign, nonatomic) BOOL wantsBaselineOffset;	// G=0x32ca7561; S=0x32ca7571; @synthesize=_wantsBaselineOffset
@property(assign, nonatomic) BOOL wantsNumberOfLineFragments;	// G=0x32ca74e1; S=0x32ca74f1; @synthesize=_wantsNumberOfLineFragments
@property(assign, nonatomic) BOOL wantsScaledBaselineOffset;	// G=0x32ca75a1; S=0x32ca75b1; @synthesize=_wantsScaledBaselineOffset
@property(assign, nonatomic) BOOL wantsScaledLineHeight;	// G=0x32ca75e1; S=0x32ca75f1; @synthesize=_wantsScaledLineHeight
@property(assign, nonatomic) BOOL wrapsForTruncationMode;	// G=0x32ca7521; S=0x32ca7531; @synthesize=_multilineTruncation
// declared property getter: - (float)actualScaleFactor;	// 0x32ca7461
// declared property getter: - (float)actualTrackingAdjustment;	// 0x32ca7481
// declared property getter: - (float)baselineOffset;	// 0x32ca7581
- (id)copyWithZone:(NSZone *)zone;	// 0x32ca72b9
- (id)description;	// 0x32ca71b9
// declared property getter: - (unsigned)maximumNumberOfLines;	// 0x32ca7541
// declared property getter: - (float)minimumScaleFactor;	// 0x32ca7421
// declared property getter: - (float)minimumTrackingAdjustment;	// 0x32ca7441
// declared property getter: - (unsigned)numberOfLineFragments;	// 0x32ca7501
// declared property getter: - (float)scaledBaselineOffset;	// 0x32ca75c1
// declared property getter: - (float)scaledLineHeight;	// 0x32ca7601
// declared property setter: - (void)setActualScaleFactor:(float)factor;	// 0x32ca7471
// declared property setter: - (void)setActualTrackingAdjustment:(float)adjustment;	// 0x32ca7491
// declared property setter: - (void)setBaselineOffset:(float)offset;	// 0x32ca7591
// declared property setter: - (void)setMaximumNumberOfLines:(unsigned)lines;	// 0x32ca7551
// declared property setter: - (void)setMinimumScaleFactor:(float)factor;	// 0x32ca7431
// declared property setter: - (void)setMinimumTrackingAdjustment:(float)adjustment;	// 0x32ca7451
// declared property setter: - (void)setNumberOfLineFragments:(unsigned)lineFragments;	// 0x32ca7511
// declared property setter: - (void)setScaledBaselineOffset:(float)offset;	// 0x32ca75d1
// declared property setter: - (void)setScaledLineHeight:(float)height;	// 0x32ca7611
// declared property setter: - (void)setTotalBounds:(CGRect)bounds;	// 0x32ca74c5
// declared property setter: - (void)setWantsBaselineOffset:(BOOL)offset;	// 0x32ca7571
// declared property setter: - (void)setWantsNumberOfLineFragments:(BOOL)lineFragments;	// 0x32ca74f1
// declared property setter: - (void)setWantsScaledBaselineOffset:(BOOL)offset;	// 0x32ca75b1
// declared property setter: - (void)setWantsScaledLineHeight:(BOOL)height;	// 0x32ca75f1
// declared property setter: - (void)setWrapsForTruncationMode:(BOOL)truncationMode;	// 0x32ca7531
// declared property getter: - (CGRect)totalBounds;	// 0x32ca74a1
// declared property getter: - (BOOL)wantsBaselineOffset;	// 0x32ca7561
// declared property getter: - (BOOL)wantsNumberOfLineFragments;	// 0x32ca74e1
// declared property getter: - (BOOL)wantsScaledBaselineOffset;	// 0x32ca75a1
// declared property getter: - (BOOL)wantsScaledLineHeight;	// 0x32ca75e1
// declared property getter: - (BOOL)wrapsForTruncationMode;	// 0x32ca7521
@end
