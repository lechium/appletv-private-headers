/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MPLayerInternal : NSObject {
	double numberOfLoops;	// 4 = 0x4
	float opacity;	// 12 = 0xc
	CGPoint position;	// 16 = 0x10
	float zPosition;	// 24 = 0x18
	CGSize size;	// 28 = 0x1c
	float rotationAngle;	// 36 = 0x24
	float xRotationAngle;	// 40 = 0x28
	float yRotationAngle;	// 44 = 0x2c
	double timeIn;	// 48 = 0x30
	double duration;	// 56 = 0x38
	double phaseInDuration;	// 64 = 0x40
	double phaseOutDuration;	// 72 = 0x48
	NSString *title;	// 80 = 0x50
	BOOL isAudioLayer;	// 84 = 0x54
	int audioPriority;	// 88 = 0x58
	double durationPadding;	// 92 = 0x5c
	NSString *layerID;	// 100 = 0x64
	int zIndex;	// 104 = 0x68
	NSString *uuid;	// 108 = 0x6c
}
@property(assign, nonatomic) int audioPriority;	// G=0x31477199; S=0x314771a9; @synthesize
@property(assign, nonatomic) double duration;	// G=0x3147708d; S=0x314770a5; @synthesize
@property(assign, nonatomic) double durationPadding;	// G=0x314771b9; S=0x314771d1; @synthesize
@property(assign, nonatomic) BOOL isAudioLayer;	// G=0x31477179; S=0x31477189; @synthesize
@property(retain, nonatomic) NSString *layerID;	// G=0x314771e9; S=0x314771f9; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x31476f2d; S=0x31476f45; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x31476f5d; S=0x31476f6d; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x314770bd; S=0x314770d5; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x314770ed; S=0x31477105; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x31476f7d; S=0x31476f95; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x31476ffd; S=0x3147700d; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x31476fcd; S=0x31476fe5; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x3147705d; S=0x31477075; @synthesize
@property(retain, nonatomic) NSString *title;	// G=0x3147713d; S=0x3147714d; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x31477225; S=0x31477235; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x3147701d; S=0x3147702d; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x3147703d; S=0x3147704d; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x3147711d; S=0x3147712d; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x31476fad; S=0x31476fbd; @synthesize
// declared property getter: - (int)audioPriority;	// 0x31477199
- (void)dealloc;	// 0x31476e99
// declared property getter: - (double)duration;	// 0x3147708d
// declared property getter: - (double)durationPadding;	// 0x314771b9
// declared property getter: - (BOOL)isAudioLayer;	// 0x31477179
// declared property getter: - (id)layerID;	// 0x314771e9
// declared property getter: - (double)numberOfLoops;	// 0x31476f2d
// declared property getter: - (float)opacity;	// 0x31476f5d
// declared property getter: - (double)phaseInDuration;	// 0x314770bd
// declared property getter: - (double)phaseOutDuration;	// 0x314770ed
// declared property getter: - (CGPoint)position;	// 0x31476f7d
// declared property getter: - (float)rotationAngle;	// 0x31476ffd
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x314771a9
// declared property setter: - (void)setDuration:(double)duration;	// 0x314770a5
// declared property setter: - (void)setDurationPadding:(double)padding;	// 0x314771d1
// declared property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x31477189
// declared property setter: - (void)setLayerID:(id)anId;	// 0x314771f9
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x31476f45
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x31476f6d
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x314770d5
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x31477105
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x31476f95
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x3147700d
// declared property setter: - (void)setSize:(CGSize)size;	// 0x31476fe5
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x31477075
// declared property setter: - (void)setTitle:(id)title;	// 0x3147714d
// declared property setter: - (void)setUuid:(id)uuid;	// 0x31477235
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x3147702d
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x3147704d
// declared property setter: - (void)setZIndex:(int)index;	// 0x3147712d
// declared property setter: - (void)setZPosition:(float)position;	// 0x31476fbd
// declared property getter: - (CGSize)size;	// 0x31476fcd
// declared property getter: - (double)timeIn;	// 0x3147705d
// declared property getter: - (id)title;	// 0x3147713d
// declared property getter: - (id)uuid;	// 0x31477225
// declared property getter: - (float)xRotationAngle;	// 0x3147701d
// declared property getter: - (float)yRotationAngle;	// 0x3147703d
// declared property getter: - (int)zIndex;	// 0x3147711d
// declared property getter: - (float)zPosition;	// 0x31476fad
@end

