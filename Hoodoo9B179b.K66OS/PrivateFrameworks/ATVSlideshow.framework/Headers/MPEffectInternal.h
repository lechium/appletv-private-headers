/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MPEffectInternal : NSObject {
	float opacity;	// 4 = 0x4
	CGPoint position;	// 8 = 0x8
	float zPosition;	// 16 = 0x10
	CGSize size;	// 20 = 0x14
	float rotationAngle;	// 28 = 0x1c
	float xRotationAngle;	// 32 = 0x20
	float yRotationAngle;	// 36 = 0x24
	float scale;	// 40 = 0x28
	double timeIn;	// 44 = 0x2c
	double phaseInDuration;	// 52 = 0x34
	double phaseOutDuration;	// 60 = 0x3c
	double mainDuration;	// 68 = 0x44
	NSString *effectID;	// 76 = 0x4c
	NSString *presetID;	// 80 = 0x50
	int audioPriority;	// 84 = 0x54
	int randomSeed;	// 88 = 0x58
	NSString *uuid;	// 92 = 0x5c
	int liveIndex;	// 96 = 0x60
	BOOL cleaningUp;	// 100 = 0x64
}
@property(assign, nonatomic) int audioPriority;	// G=0x3547751d; S=0x3547752d; @synthesize
@property(assign, nonatomic) BOOL cleaningUp;	// G=0x354775d1; S=0x354775e1; @synthesize
@property(copy, nonatomic) NSString *effectID;	// G=0x354774b5; S=0x354774c5; @synthesize
@property(assign, nonatomic) int liveIndex;	// G=0x354775b1; S=0x354775c1; @synthesize
@property(assign, nonatomic) double mainDuration;	// G=0x35477489; S=0x354774a1; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x35477305; S=0x35477315; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x35477431; S=0x35477449; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x3547745d; S=0x35477475; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x35477325; S=0x35477341; @synthesize
@property(copy, nonatomic) NSString *presetID;	// G=0x354774e9; S=0x354774f9; @synthesize
@property(assign, nonatomic) int randomSeed;	// G=0x3547753d; S=0x3547754d; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x354773a5; S=0x354773b5; @synthesize
@property(assign, nonatomic) float scale;	// G=0x35477591; S=0x354775a1; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x35477375; S=0x35477391; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x35477405; S=0x3547741d; @synthesize
@property(copy, nonatomic) NSString *uuid;	// G=0x3547755d; S=0x3547756d; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x354773c5; S=0x354773d5; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x354773e5; S=0x354773f5; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x35477355; S=0x35477365; @synthesize
- (id)init;	// 0x35477215
// declared property getter: - (int)audioPriority;	// 0x3547751d
// declared property getter: - (BOOL)cleaningUp;	// 0x354775d1
- (void)dealloc;	// 0x35477271
// declared property getter: - (id)effectID;	// 0x354774b5
// declared property getter: - (int)liveIndex;	// 0x354775b1
// declared property getter: - (double)mainDuration;	// 0x35477489
// declared property getter: - (float)opacity;	// 0x35477305
// declared property getter: - (double)phaseInDuration;	// 0x35477431
// declared property getter: - (double)phaseOutDuration;	// 0x3547745d
// declared property getter: - (CGPoint)position;	// 0x35477325
// declared property getter: - (id)presetID;	// 0x354774e9
// declared property getter: - (int)randomSeed;	// 0x3547753d
// declared property getter: - (float)rotationAngle;	// 0x354773a5
// declared property getter: - (float)scale;	// 0x35477591
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x3547752d
// declared property setter: - (void)setCleaningUp:(BOOL)up;	// 0x354775e1
// declared property setter: - (void)setEffectID:(id)anId;	// 0x354774c5
// declared property setter: - (void)setLiveIndex:(int)index;	// 0x354775c1
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x354774a1
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x35477315
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x35477449
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x35477475
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x35477341
// declared property setter: - (void)setPresetID:(id)anId;	// 0x354774f9
// declared property setter: - (void)setRandomSeed:(int)seed;	// 0x3547754d
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x354773b5
// declared property setter: - (void)setScale:(float)scale;	// 0x354775a1
// declared property setter: - (void)setSize:(CGSize)size;	// 0x35477391
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x3547741d
// declared property setter: - (void)setUuid:(id)uuid;	// 0x3547756d
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x354773d5
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x354773f5
// declared property setter: - (void)setZPosition:(float)position;	// 0x35477365
// declared property getter: - (CGSize)size;	// 0x35477375
// declared property getter: - (double)timeIn;	// 0x35477405
// declared property getter: - (id)uuid;	// 0x3547755d
// declared property getter: - (float)xRotationAngle;	// 0x354773c5
// declared property getter: - (float)yRotationAngle;	// 0x354773e5
// declared property getter: - (float)zPosition;	// 0x35477355
@end

