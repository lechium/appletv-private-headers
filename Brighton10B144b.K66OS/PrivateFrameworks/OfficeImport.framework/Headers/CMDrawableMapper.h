/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class NSData, OADDrawable, CMDrawableStyle, NSString, OADOrientedBounds;

@interface CMDrawableMapper : CMMapper {
	OADDrawable *mDrawable;	// 8 = 0x8
	CMDrawableStyle *mStyle;	// 12 = 0xc
	NSData *mImageBinaryData;	// 16 = 0x10
	NSString *mName;	// 20 = 0x14
	NSString *mExtension;	// 24 = 0x18
	int mResourceType;	// 28 = 0x1c
	NSString *mSourcePath;	// 32 = 0x20
	CGRect mBox;	// 36 = 0x24
	float mRotation;	// 52 = 0x34
	BOOL mIsSupported;	// 56 = 0x38
	BOOL mIsCropped;	// 57 = 0x39
	CGRect mUncroppedBox;	// 60 = 0x3c
	OADOrientedBounds *mOrientedBounds;	// 76 = 0x4c
}
@property(assign) float rotation;	// G=0x349dcb2d; S=0x349dcb3d; converted property
- (id)initWithOadDrawable:(id)oadDrawable parent:(id)parent;	// 0x348789cd
- (id)initWithParent:(id)parent;	// 0x34960999
- (id).cxx_construct;	// 0x348789c9
- (id)blipAtIndex:(unsigned)index;	// 0x348c8e01
- (CGRect)box;	// 0x348c0cf1
- (void)calculateUncroppedBox:(id)box;	// 0x348fe3fd
- (id)convertMetafileToPdf;	// 0x348c9011
- (void)dealloc;	// 0x3487a1f5
- (BOOL)isCropped;	// 0x348fe5e1
- (void)mapBounds;	// 0x349dcb55
- (void)mapDrawingContext:(id)context at:(id)at relative:(BOOL)relative withState:(id)state;	// 0x349dcb59
- (void)mapImageBinaryData;	// 0x349dcb51
- (void)mapShapeGraphicsAt:(id)at withState:(id)state;	// 0x348bf86d
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x349dccfd
// converted property getter: - (float)rotation;	// 0x349dcb2d
- (id)saveResourceAndReturnPath:(id)path withType:(int)type;	// 0x348c0c6d
- (void)setBoundingBox;	// 0x349dcb4d
// converted property setter: - (void)setRotation:(float)rotation;	// 0x349dcb3d
- (void)setWithOadImage:(id)oadImage;	// 0x348c8bf5
- (CGRect)shapeTextBoxRect;	// 0x348c70c9
- (CGRect)uncroppedBox;	// 0x349b4ab5
@end

