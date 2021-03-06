/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class NSAffineTransform;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFTransform : NSObject <NSCopying> {
@private
	NSAffineTransform *m_world;	// 4 = 0x4
	CGPoint m_windowOrg;	// 8 = 0x8
	CGPoint m_windowExt;	// 16 = 0x10
	CGPoint m_viewportOrg;	// 24 = 0x18
	CGPoint m_viewportExt;	// 32 = 0x20
	NSAffineTransform *m_combinedTransform;	// 40 = 0x28
	int m_mapMode;	// 44 = 0x2c
	NSObject<MFDeviceDriver> *m_deviceDriver;	// 48 = 0x30
}
- (id)initWithDriver:(id)driver;	// 0x3444f789
- (CGPoint)DPtoLP:(CGPoint)lp;	// 0x345f2fc9
- (CGPoint)LPtoDP:(CGPoint)dp;	// 0x345f2f8d
- (id)copyWithZone:(NSZone *)zone;	// 0x3445b2f9
- (void)dealloc;	// 0x3445b639
- (int)getMapMode;	// 0x3445b5f1
- (id)getTransformMatrix;	// 0x3445b5a9
- (CGPoint)getViewportExtent;	// 0x3445b579
- (CGPoint)getViewportOrg;	// 0x3445b549
- (CGPoint)getWindowExtent;	// 0x3445b519
- (CGPoint)getWindowOrg;	// 0x3445b4e9
- (id)getWorldMatrix;	// 0x3445b4a1
- (BOOL)isUpsideDown;	// 0x345f3059
- (int)modifyWorldTransform:(const CGAffineTransform *)transform :(int)arg2;	// 0x34536ac5
- (int)offsetViewportOrg:(int)org :(int)arg2;	// 0x345f2e51
- (int)offsetWindowOrg:(int)org :(int)arg2;	// 0x345f2e99
- (int)scaleViewportExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x344cbb41
- (int)scaleWindowExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x345f2ee1
- (int)setMapMode:(int)mode;	// 0x34456d45
- (void)setTransformMatrix:(id)matrix;	// 0x3445b5b9
- (void)setViewportExt:(CGPoint)ext;	// 0x3445b591
- (int)setViewportExt:(int)ext :(int)arg2;	// 0x34456ead
- (void)setViewportOrg:(CGPoint)org;	// 0x3445b561
- (int)setViewportOrg:(int)org :(int)arg2;	// 0x34456e3d
- (void)setWindowExt:(CGPoint)ext;	// 0x3445b531
- (int)setWindowExt:(int)ext :(int)arg2;	// 0x34451d89
- (void)setWindowOrg:(CGPoint)org;	// 0x3445b501
- (int)setWindowOrg:(int)org :(int)arg2;	// 0x34451b55
- (void)setWorldMatrix:(id)matrix;	// 0x3445b4b1
- (int)setWorldTransform:(const CGAffineTransform *)transform;	// 0x3453a3d9
- (int)updateTransform;	// 0x34451b8d
@end

