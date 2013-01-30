/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMetadataObject.h"
#import "AVFoundation-Structs.h"

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject {
	AVMetadataFaceObjectInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign) int faceID;	// G=0x302ef5c9; 
@property(readonly, assign) BOOL hasRollAngle;	// G=0x302ef5e9; 
@property(readonly, assign) BOOL hasYawAngle;	// G=0x302ef68d; 
@property(readonly, assign) float rollAngle;	// G=0x302ef60d; 
@property(readonly, assign) float yawAngle;	// G=0x302ef6b1; 
+ (id)derivedFaceObjectFromFaceObject:(id)faceObject withBounds:(CGRect)bounds yaw:(float)yaw roll:(float)roll;	// 0x302eee25
+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)figEmbeddedCaptureDeviceFaceDictionary input:(id)input;	// 0x302eedd9
- (id)initDerivedFaceObjectFromFaceObject:(id)faceObject withBounds:(CGRect)bounds yaw:(float)yaw roll:(float)roll;	// 0x302ef171
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)figEmbeddedCaptureDeviceFaceDictionary input:(id)input;	// 0x302eee95
- (void)dealloc;	// 0x302ef3fd
- (id)description;	// 0x302ef449
// declared property getter: - (int)faceID;	// 0x302ef5c9
// declared property getter: - (BOOL)hasRollAngle;	// 0x302ef5e9
// declared property getter: - (BOOL)hasYawAngle;	// 0x302ef68d
- (id)originalFaceObject;	// 0x302ef731
// declared property getter: - (float)rollAngle;	// 0x302ef60d
// declared property getter: - (float)yawAngle;	// 0x302ef6b1
@end
