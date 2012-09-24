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
@property(assign, nonatomic) float actualScaleFactor;	// G=0x3466e461; S=0x3466e471; @synthesize=_actualScaleFactor
@property(assign, nonatomic) float actualTrackingAdjustment;	// G=0x3466e481; S=0x3466e491; @synthesize=_actualTrackingAdjustment
@property(assign, nonatomic) float baselineOffset;	// G=0x3466e581; S=0x3466e591; @synthesize=_baselineOffset
@property(assign, nonatomic) unsigned maximumNumberOfLines;	// G=0x3466e541; S=0x3466e551; @synthesize=_maximumNumberOfLines
@property(assign, nonatomic) float minimumScaleFactor;	// G=0x3466e421; S=0x3466e431; @synthesize=_minimumScaleFactor
@property(assign, nonatomic) float minimumTrackingAdjustment;	// G=0x3466e441; S=0x3466e451; @synthesize=_minimumTrackingAdjustment
@property(assign, nonatomic) unsigned numberOfLineFragments;	// G=0x3466e501; S=0x3466e511; @synthesize=_numberOfLineFragments
@property(assign, nonatomic) float scaledBaselineOffset;	// G=0x3466e5c1; S=0x3466e5d1; @synthesize=_scaledBaselineOffset
@property(assign, nonatomic) float scaledLineHeight;	// G=0x3466e601; S=0x3466e611; @synthesize=_scaledLineHeight
@property(assign, nonatomic) CGRect totalBounds;	// G=0x3466e4a1; S=0x3466e4c5; @synthesize=_totalBounds
@property(assign, nonatomic) BOOL wantsBaselineOffset;	// G=0x3466e561; S=0x3466e571; @synthesize=_wantsBaselineOffset
@property(assign, nonatomic) BOOL wantsNumberOfLineFragments;	// G=0x3466e4e1; S=0x3466e4f1; @synthesize=_wantsNumberOfLineFragments
@property(assign, nonatomic) BOOL wantsScaledBaselineOffset;	// G=0x3466e5a1; S=0x3466e5b1; @synthesize=_wantsScaledBaselineOffset
@property(assign, nonatomic) BOOL wantsScaledLineHeight;	// G=0x3466e5e1; S=0x3466e5f1; @synthesize=_wantsScaledLineHeight
@property(assign, nonatomic) BOOL wrapsForTruncationMode;	// G=0x3466e521; S=0x3466e531; @synthesize=_multilineTruncation
// declared property getter: - (float)actualScaleFactor;	// 0x3466e461
// declared property getter: - (float)actualTrackingAdjustment;	// 0x3466e481
// declared property getter: - (float)baselineOffset;	// 0x3466e581
- (id)copyWithZone:(NSZone *)zone;	// 0x3466e2b9
- (id)description;	// 0x3466e1b9
// declared property getter: - (unsigned)maximumNumberOfLines;	// 0x3466e541
// declared property getter: - (float)minimumScaleFactor;	// 0x3466e421
// declared property getter: - (float)minimumTrackingAdjustment;	// 0x3466e441
// declared property getter: - (unsigned)numberOfLineFragments;	// 0x3466e501
// declared property getter: - (float)scaledBaselineOffset;	// 0x3466e5c1
// declared property getter: - (float)scaledLineHeight;	// 0x3466e601
// declared property setter: - (void)setActualScaleFactor:(float)factor;	// 0x3466e471
// declared property setter: - (void)setActualTrackingAdjustment:(float)adjustment;	// 0x3466e491
// declared property setter: - (void)setBaselineOffset:(float)offset;	// 0x3466e591
// declared property setter: - (void)setMaximumNumberOfLines:(unsigned)lines;	// 0x3466e551
// declared property setter: - (void)setMinimumScaleFactor:(float)factor;	// 0x3466e431
// declared property setter: - (void)setMinimumTrackingAdjustment:(float)adjustment;	// 0x3466e451
// declared property setter: - (void)setNumberOfLineFragments:(unsigned)lineFragments;	// 0x3466e511
// declared property setter: - (void)setScaledBaselineOffset:(float)offset;	// 0x3466e5d1
// declared property setter: - (void)setScaledLineHeight:(float)height;	// 0x3466e611
// declared property setter: - (void)setTotalBounds:(CGRect)bounds;	// 0x3466e4c5
// declared property setter: - (void)setWantsBaselineOffset:(BOOL)offset;	// 0x3466e571
// declared property setter: - (void)setWantsNumberOfLineFragments:(BOOL)lineFragments;	// 0x3466e4f1
// declared property setter: - (void)setWantsScaledBaselineOffset:(BOOL)offset;	// 0x3466e5b1
// declared property setter: - (void)setWantsScaledLineHeight:(BOOL)height;	// 0x3466e5f1
// declared property setter: - (void)setWrapsForTruncationMode:(BOOL)truncationMode;	// 0x3466e531
// declared property getter: - (CGRect)totalBounds;	// 0x3466e4a1
// declared property getter: - (BOOL)wantsBaselineOffset;	// 0x3466e561
// declared property getter: - (BOOL)wantsNumberOfLineFragments;	// 0x3466e4e1
// declared property getter: - (BOOL)wantsScaledBaselineOffset;	// 0x3466e5a1
// declared property getter: - (BOOL)wantsScaledLineHeight;	// 0x3466e5e1
// declared property getter: - (BOOL)wrapsForTruncationMode;	// 0x3466e521
@end
