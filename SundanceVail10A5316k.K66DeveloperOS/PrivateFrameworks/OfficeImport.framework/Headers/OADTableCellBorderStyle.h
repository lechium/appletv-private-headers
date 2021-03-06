/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADStroke;

__attribute__((visibility("hidden")))
@interface OADTableCellBorderStyle : NSObject {
@private
	OADStroke *mLeftStroke;	// 4 = 0x4
	OADStroke *mRightStroke;	// 8 = 0x8
	OADStroke *mTopStroke;	// 12 = 0xc
	OADStroke *mBottomStroke;	// 16 = 0x10
	OADStroke *mHorzInsideStroke;	// 20 = 0x14
	OADStroke *mVertInsideStroke;	// 24 = 0x18
	OADStroke *mTopLeftToBottomRightStroke;	// 28 = 0x1c
	OADStroke *mBottomLeftToTopRightStroke;	// 32 = 0x20
}
@property(retain) id bottomLeftToTopRightStroke;	// G=0x31255c4d; S=0x31255c5d; converted property
@property(retain) id bottomStroke;	// G=0x311969c5; S=0x3113e681; converted property
@property(retain) id horzInsideStroke;	// G=0x311969d5; S=0x3113e6bd; converted property
@property(retain) id leftStroke;	// G=0x311969f5; S=0x3113e5cd; converted property
@property(retain) id rightStroke;	// G=0x31196a15; S=0x3113e609; converted property
@property(retain) id topLeftToBottomRightStroke;	// G=0x31255c01; S=0x31255c11; converted property
@property(retain) id topStroke;	// G=0x311969a5; S=0x3113e645; converted property
@property(retain) id vertInsideStroke;	// G=0x31196a25; S=0x3113e6f9; converted property
+ (id)defaultAxisParallelStroke;	// 0x31255c99
+ (id)defaultObliqueStroke;	// 0x31255cf5
+ (id)defaultStyle;	// 0x31255d11
- (void)applyOverridesFrom:(id)from;	// 0x31255fe9
// converted property getter: - (id)bottomLeftToTopRightStroke;	// 0x31255c4d
// converted property getter: - (id)bottomStroke;	// 0x311969c5
- (void)dealloc;	// 0x311464b9
// converted property getter: - (id)horzInsideStroke;	// 0x311969d5
// converted property getter: - (id)leftStroke;	// 0x311969f5
// converted property getter: - (id)rightStroke;	// 0x31196a15
// converted property setter: - (void)setBottomLeftToTopRightStroke:(id)topRightStroke;	// 0x31255c5d
// converted property setter: - (void)setBottomStroke:(id)stroke;	// 0x3113e681
// converted property setter: - (void)setHorzInsideStroke:(id)stroke;	// 0x3113e6bd
// converted property setter: - (void)setLeftStroke:(id)stroke;	// 0x3113e5cd
// converted property setter: - (void)setRightStroke:(id)stroke;	// 0x3113e609
// converted property setter: - (void)setTopLeftToBottomRightStroke:(id)bottomRightStroke;	// 0x31255c11
// converted property setter: - (void)setTopStroke:(id)stroke;	// 0x3113e645
// converted property setter: - (void)setVertInsideStroke:(id)stroke;	// 0x3113e6f9
- (id)shallowCopy;	// 0x31255e81
- (id)stroke:(int)stroke;	// 0x31255b69
// converted property getter: - (id)topLeftToBottomRightStroke;	// 0x31255c01
// converted property getter: - (id)topStroke;	// 0x311969a5
// converted property getter: - (id)vertInsideStroke;	// 0x31196a25
@end

