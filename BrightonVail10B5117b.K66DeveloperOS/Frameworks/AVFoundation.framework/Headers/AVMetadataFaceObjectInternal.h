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
@property(assign) int faceID;	// G=0x302eecd1; S=0x302eece5; @synthesize
@property(assign) BOOL hasRollAngle;	// G=0x302eecfd; S=0x302eed15; @synthesize
@property(assign) BOOL hasYawAngle;	// G=0x302eed59; S=0x302eed71; @synthesize
@property(retain) AVMetadataFaceObject *originalFaceObject;	// G=0x302eedb5; S=0x302eedc9; @synthesize
@property(assign) float rollAngle;	// G=0x302eed2d; S=0x302eed41; @synthesize
@property(assign) float yawAngle;	// G=0x302eed89; S=0x302eed9d; @synthesize
- (void)dealloc;	// 0x302eec85
// declared property getter: - (int)faceID;	// 0x302eecd1
// declared property getter: - (BOOL)hasRollAngle;	// 0x302eecfd
// declared property getter: - (BOOL)hasYawAngle;	// 0x302eed59
// declared property getter: - (id)originalFaceObject;	// 0x302eedb5
// declared property getter: - (float)rollAngle;	// 0x302eed2d
// declared property setter: - (void)setFaceID:(int)anId;	// 0x302eece5
// declared property setter: - (void)setHasRollAngle:(BOOL)angle;	// 0x302eed15
// declared property setter: - (void)setHasYawAngle:(BOOL)angle;	// 0x302eed71
// declared property setter: - (void)setOriginalFaceObject:(id)object;	// 0x302eedc9
// declared property setter: - (void)setRollAngle:(float)angle;	// 0x302eed41
// declared property setter: - (void)setYawAngle:(float)angle;	// 0x302eed9d
// declared property getter: - (float)yawAngle;	// 0x302eed89
@end
