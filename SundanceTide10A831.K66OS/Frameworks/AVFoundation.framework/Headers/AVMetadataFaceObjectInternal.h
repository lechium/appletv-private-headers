/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVMetadataFaceObject;

@interface AVMetadataFaceObjectInternal : NSObject {
	int faceID;	// 4 = 0x4
	BOOL hasRollAngle;	// 8 = 0x8
	float rollAngle;	// 12 = 0xc
	BOOL hasYawAngle;	// 16 = 0x10
	float yawAngle;	// 20 = 0x14
	AVMetadataFaceObject *originalFaceObject;	// 24 = 0x18
}
@property(assign) int faceID;	// G=0x34265bc9; S=0x34265bdd; @synthesize
@property(assign) BOOL hasRollAngle;	// G=0x34265bf5; S=0x34265c0d; @synthesize
@property(assign) BOOL hasYawAngle;	// G=0x34265c51; S=0x34265c69; @synthesize
@property(retain) AVMetadataFaceObject *originalFaceObject;	// G=0x34265cad; S=0x34265cc1; @synthesize
@property(assign) float rollAngle;	// G=0x34265c25; S=0x34265c39; @synthesize
@property(assign) float yawAngle;	// G=0x34265c81; S=0x34265c95; @synthesize
- (void)dealloc;	// 0x34265b7d
// declared property getter: - (int)faceID;	// 0x34265bc9
// declared property getter: - (BOOL)hasRollAngle;	// 0x34265bf5
// declared property getter: - (BOOL)hasYawAngle;	// 0x34265c51
// declared property getter: - (id)originalFaceObject;	// 0x34265cad
// declared property getter: - (float)rollAngle;	// 0x34265c25
// declared property setter: - (void)setFaceID:(int)anId;	// 0x34265bdd
// declared property setter: - (void)setHasRollAngle:(BOOL)angle;	// 0x34265c0d
// declared property setter: - (void)setHasYawAngle:(BOOL)angle;	// 0x34265c69
// declared property setter: - (void)setOriginalFaceObject:(id)object;	// 0x34265cc1
// declared property setter: - (void)setRollAngle:(float)angle;	// 0x34265c39
// declared property setter: - (void)setYawAngle:(float)angle;	// 0x34265c95
// declared property getter: - (float)yawAngle;	// 0x34265c81
@end
