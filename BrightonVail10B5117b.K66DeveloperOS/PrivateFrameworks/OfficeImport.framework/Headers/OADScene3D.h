/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADCamera, OADLightRig, OADBackdrop;

@interface OADScene3D : NSObject <NSCopying> {
	OADCamera *mCamera;	// 4 = 0x4
	OADLightRig *mLightRig;	// 8 = 0x8
	OADBackdrop *mBackdrop;	// 12 = 0xc
}
@property(retain) id backdrop;	// G=0x34c2c911; S=0x34c2c921; converted property
@property(retain) id camera;	// G=0x34c2c8f1; S=0x34b3d4c9; converted property
@property(retain) id lightRig;	// G=0x34c2c901; S=0x34b3d7c1; converted property
+ (id)nullScene3D;	// 0x349f5739
- (id)init;	// 0x349f5781
// converted property getter: - (id)backdrop;	// 0x34c2c911
// converted property getter: - (id)camera;	// 0x34c2c8f1
- (id)copyWithZone:(NSZone *)zone;	// 0x34c2c84d
- (void)dealloc;	// 0x34b42809
- (unsigned)hash;	// 0x34c2c95d
- (BOOL)isEqual:(id)equal;	// 0x34c2c9b9
// converted property getter: - (id)lightRig;	// 0x34c2c901
// converted property setter: - (void)setBackdrop:(id)backdrop;	// 0x34c2c921
// converted property setter: - (void)setCamera:(id)camera;	// 0x34b3d4c9
// converted property setter: - (void)setLightRig:(id)rig;	// 0x34b3d7c1
@end

