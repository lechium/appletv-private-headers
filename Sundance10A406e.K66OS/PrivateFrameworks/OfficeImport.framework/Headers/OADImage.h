/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADGraphic.h"

@class OADMovie, OADShapeGeometry, OADOle;

@interface OADImage : OADGraphic {
	OADShapeGeometry *mGeometry;	// 28 = 0x1c
	OADOle *mOle;	// 32 = 0x20
	OADMovie *mMovie;	// 36 = 0x24
}
@property(retain) id geometry;	// G=0x350a6985; S=0x34f44dcd; converted property
@property(retain) id movie;	// G=0x34ed2631; S=0x3502459d; converted property
@property(retain) id ole;	// G=0x34f45cf9; S=0x34fa285d; converted property
- (id)init;	// 0x34e7a61d
- (id)initWithBlipRef:(id)blipRef;	// 0x350a68b1
- (id)createImageFill;	// 0x350a6995
- (void)createPictureFramePresetGeometry;	// 0x350a6b09
- (void)dealloc;	// 0x34ee1f1d
// converted property getter: - (id)geometry;	// 0x350a6985
- (id)imageProperties;	// 0x34ebf5d1
// converted property getter: - (id)movie;	// 0x34ed2631
// converted property getter: - (id)ole;	// 0x34f45cf9
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x34f44dcd
// converted property setter: - (void)setMovie:(id)movie;	// 0x3502459d
// converted property setter: - (void)setOle:(id)ole;	// 0x34fa285d
- (void)setParentTextListStyle:(id)style;	// 0x34ec48c5
@end

