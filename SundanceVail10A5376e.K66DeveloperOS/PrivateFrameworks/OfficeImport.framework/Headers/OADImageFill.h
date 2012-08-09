/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADFill.h"
#import "OfficeImport-Structs.h"

@class OADRelativeRect, OADBlipRef, OADImageFillTechnique;

@interface OADImageFill : OADFill {
	OADBlipRef *mBlipRef;	// 12 = 0xc
	BOOL mIsBlipRefOverridden;	// 16 = 0x10
	OADRelativeRect *mSourceRect;	// 20 = 0x14
	BOOL mIsSourceRectOverridden;	// 24 = 0x18
	long mDpi;	// 28 = 0x1c
	BOOL mIsDpiOverridden;	// 32 = 0x20
	BOOL mRotateWithShape;	// 33 = 0x21
	BOOL mIsRotateWithShapeOverridden;	// 34 = 0x22
	OADImageFillTechnique *mTechnique;	// 36 = 0x24
	BOOL mIsTechniqueOverridden;	// 40 = 0x28
}
@property(retain) id blipRef;	// G=0x36f75b5d; S=0x36f6272d; converted property
@property(assign) long dpi;	// G=0x37147d05; S=0x36f62855; converted property
@property(assign) BOOL rotateWithShape;	// G=0x37147d69; S=0x36f62875; converted property
@property(retain) id sourceRect;	// G=0x36f757fd; S=0x36f62809; converted property
@property(retain) id technique;	// G=0x37057891; S=0x36f62a4d; converted property
+ (id)defaultProperties;	// 0x36f625e5
- (id)initWithDefaults;	// 0x36f6262d
// converted property getter: - (id)blipRef;	// 0x36f75b5d
- (id)color;	// 0x37147c49
- (id)copyWithZone:(NSZone *)zone;	// 0x370bbd91
- (void)dealloc;	// 0x36f84d95
// converted property getter: - (long)dpi;	// 0x37147d05
- (unsigned)hash;	// 0x37147dcd
- (BOOL)isBlipRefOverridden;	// 0x36f75b29
- (BOOL)isDpiOverridden;	// 0x37147d35
- (BOOL)isEqual:(id)equal;	// 0x36f7a285
- (BOOL)isRotateWithShapeOverridden;	// 0x37147d99
- (BOOL)isSourceRectOverridden;	// 0x36f757c9
- (BOOL)isTechniqueOverridden;	// 0x370578c1
// converted property getter: - (BOOL)rotateWithShape;	// 0x37147d69
// converted property setter: - (void)setBlipRef:(id)ref;	// 0x36f6272d
// converted property setter: - (void)setDpi:(long)dpi;	// 0x36f62855
- (void)setParent:(id)parent;	// 0x36f62a99
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x36f62875
// converted property setter: - (void)setSourceRect:(id)rect;	// 0x36f62809
- (void)setStyleColor:(id)color;	// 0x370bc201
// converted property setter: - (void)setTechnique:(id)technique;	// 0x36f62a4d
// converted property getter: - (id)sourceRect;	// 0x36f757fd
// converted property getter: - (id)technique;	// 0x37057891
@end
