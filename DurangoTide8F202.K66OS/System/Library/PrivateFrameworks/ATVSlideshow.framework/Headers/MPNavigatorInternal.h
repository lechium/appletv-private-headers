/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MPNavigatorInternal : NSObject {
	NSString *startPlugID;	// 4 = 0x4
	float opacity;	// 8 = 0x8
	CGPoint position;	// 12 = 0xc
	float zPosition;	// 20 = 0x14
	CGSize size;	// 24 = 0x18
	float rotationAngle;	// 32 = 0x20
	float xRotationAngle;	// 36 = 0x24
	float yRotationAngle;	// 40 = 0x28
	int zIndex;	// 44 = 0x2c
	NSString *uuid;	// 48 = 0x30
	double numberOfLoops;	// 52 = 0x34
	double duration;	// 60 = 0x3c
	double timeIn;	// 68 = 0x44
	double phaseInDuration;	// 76 = 0x4c
	double phaseOutDuration;	// 84 = 0x54
}
@property(assign, nonatomic) double duration;	// G=0x31478d35; S=0x31478d4d; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x31478d05; S=0x31478d1d; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x31478ba9; S=0x31478bb9; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x31478d95; S=0x31478dad; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x31478dc5; S=0x31478ddd; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x31478bc9; S=0x31478be1; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x31478c49; S=0x31478c59; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x31478c19; S=0x31478c31; @synthesize
@property(retain, nonatomic) NSString *startPlugID;	// G=0x31478b6d; S=0x31478b7d; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x31478d65; S=0x31478d7d; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x31478cc9; S=0x31478cd9; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x31478c69; S=0x31478c79; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x31478c89; S=0x31478c99; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x31478ca9; S=0x31478cb9; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x31478bf9; S=0x31478c09; @synthesize
- (void)dealloc;	// 0x31478af5
// declared property getter: - (double)duration;	// 0x31478d35
- (void)finalize;	// 0x31478ac5
// declared property getter: - (double)numberOfLoops;	// 0x31478d05
// declared property getter: - (float)opacity;	// 0x31478ba9
// declared property getter: - (double)phaseInDuration;	// 0x31478d95
// declared property getter: - (double)phaseOutDuration;	// 0x31478dc5
// declared property getter: - (CGPoint)position;	// 0x31478bc9
// declared property getter: - (float)rotationAngle;	// 0x31478c49
// declared property setter: - (void)setDuration:(double)duration;	// 0x31478d4d
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x31478d1d
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x31478bb9
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x31478dad
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x31478ddd
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x31478be1
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x31478c59
// declared property setter: - (void)setSize:(CGSize)size;	// 0x31478c31
// declared property setter: - (void)setStartPlugID:(id)anId;	// 0x31478b7d
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x31478d7d
// declared property setter: - (void)setUuid:(id)uuid;	// 0x31478cd9
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x31478c79
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x31478c99
// declared property setter: - (void)setZIndex:(int)index;	// 0x31478cb9
// declared property setter: - (void)setZPosition:(float)position;	// 0x31478c09
// declared property getter: - (CGSize)size;	// 0x31478c19
// declared property getter: - (id)startPlugID;	// 0x31478b6d
// declared property getter: - (double)timeIn;	// 0x31478d65
// declared property getter: - (id)uuid;	// 0x31478cc9
// declared property getter: - (float)xRotationAngle;	// 0x31478c69
// declared property getter: - (float)yRotationAngle;	// 0x31478c89
// declared property getter: - (int)zIndex;	// 0x31478ca9
// declared property getter: - (float)zPosition;	// 0x31478bf9
@end

