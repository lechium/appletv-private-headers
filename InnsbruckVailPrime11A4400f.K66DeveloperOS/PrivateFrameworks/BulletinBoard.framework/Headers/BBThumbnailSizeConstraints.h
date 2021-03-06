/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import </libobjc.A.h>
#import "NSCoding.h"


@interface BBThumbnailSizeConstraints : NSObject <NSCoding> {
	int _constraintType;	// 4 = 0x4
	float _fixedWidth;	// 8 = 0x8
	float _fixedHeight;	// 12 = 0xc
	float _fixedDimension;	// 16 = 0x10
	float _minAspectRatio;	// 20 = 0x14
	float _maxAspectRatio;	// 24 = 0x18
	float _thumbnailScale;	// 28 = 0x1c
}
@property(assign, nonatomic) int constraintType;	// G=0x3023ce15; S=0x3023ce25; @synthesize=_constraintType
@property(assign, nonatomic) float fixedDimension;	// G=0x3023ce75; S=0x3023ce85; @synthesize=_fixedDimension
@property(assign, nonatomic) float fixedHeight;	// G=0x3023ce55; S=0x3023ce65; @synthesize=_fixedHeight
@property(assign, nonatomic) float fixedWidth;	// G=0x3023ce35; S=0x3023ce45; @synthesize=_fixedWidth
@property(assign, nonatomic) float maxAspectRatio;	// G=0x3023ceb5; S=0x3023cec5; @synthesize=_maxAspectRatio
@property(assign, nonatomic) float minAspectRatio;	// G=0x3023ce95; S=0x3023cea5; @synthesize=_minAspectRatio
@property(assign, nonatomic) float thumbnailScale;	// G=0x3023ced5; S=0x3023cee5; @synthesize=_thumbnailScale
- (id)initWithCoder:(id)coder;	// 0x3023c9d1
- (BOOL)areReasonable;	// 0x3023cc59
// declared property getter: - (int)constraintType;	// 0x3023ce15
- (void)encodeWithCoder:(id)coder;	// 0x3023cb29
// declared property getter: - (float)fixedDimension;	// 0x3023ce75
// declared property getter: - (float)fixedHeight;	// 0x3023ce55
// declared property getter: - (float)fixedWidth;	// 0x3023ce35
// declared property getter: - (float)maxAspectRatio;	// 0x3023ceb5
// declared property getter: - (float)minAspectRatio;	// 0x3023ce95
// declared property setter: - (void)setConstraintType:(int)type;	// 0x3023ce25
// declared property setter: - (void)setFixedDimension:(float)dimension;	// 0x3023ce85
// declared property setter: - (void)setFixedHeight:(float)height;	// 0x3023ce65
// declared property setter: - (void)setFixedWidth:(float)width;	// 0x3023ce45
// declared property setter: - (void)setMaxAspectRatio:(float)ratio;	// 0x3023cec5
// declared property setter: - (void)setMinAspectRatio:(float)ratio;	// 0x3023cea5
// declared property setter: - (void)setThumbnailScale:(float)scale;	// 0x3023cee5
// declared property getter: - (float)thumbnailScale;	// 0x3023ced5
@end

