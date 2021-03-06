/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class OADBackdrop, OADLightRig, OADCamera;

__attribute__((visibility("hidden")))
@interface OADScene3D : NSObject <NSCopying> {
@private
	OADCamera *mCamera;	// 4 = 0x4
	OADLightRig *mLightRig;	// 8 = 0x8
	OADBackdrop *mBackdrop;	// 12 = 0xc
}
@property(retain) id backdrop;	// G=0x34595f3d; S=0x345960e5; converted property
@property(retain) id camera;	// G=0x34595f1d; S=0x3453b5e1; converted property
@property(retain) id lightRig;	// G=0x34595f2d; S=0x3453b8a9; converted property
+ (id)nullScene3D;	// 0x344adb09
- (id)init;	// 0x3453b1bd
// converted property getter: - (id)backdrop;	// 0x34595f3d
// converted property getter: - (id)camera;	// 0x34595f1d
- (id)copyWithZone:(NSZone *)zone;	// 0x3459611d
- (void)dealloc;	// 0x3453bec9
- (unsigned)hash;	// 0x34596089
- (BOOL)isEqual:(id)equal;	// 0x34595fa1
// converted property getter: - (id)lightRig;	// 0x34595f2d
// converted property setter: - (void)setBackdrop:(id)backdrop;	// 0x345960e5
// converted property setter: - (void)setCamera:(id)camera;	// 0x3453b5e1
// converted property setter: - (void)setLightRig:(id)rig;	// 0x3453b8a9
@end

