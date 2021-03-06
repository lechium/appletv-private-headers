/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class NSString, CMDrawingContext, ODDPoint, OADOrientedBounds;

@interface CMDiagramPointMapper : CMMapper {
	ODDPoint *mPoint;	// 8 = 0x8
	CMDrawingContext *mDrawingContext;	// 12 = 0xc
	OADOrientedBounds *mOrientedBounds;	// 16 = 0x10
	NSString *mPresentationName;	// 20 = 0x14
}
@property(retain) id presentationName;	// G=0x349645f1; S=0x349c570d; converted property
- (id)initWithPoint:(id)point drawingContext:(id)context orientedBounds:(id)bounds parent:(id)parent;	// 0x34963919
- (void)applyDiagramStyleToShapeProperties;	// 0x34964359
- (id)baseTextListStyleWithBounds:(id)bounds isCentered:(BOOL)centered;	// 0x349654a1
- (float)defaultFontSize;	// 0x349656cd
- (id)diagram;	// 0x34964551
- (id)fill;	// 0x34964e15
- (void)mapAt:(id)at withState:(id)state;	// 0x349641f1
- (void)mapChildrenTextAt:(id)at style:(id)style level:(int)level withState:(id)state;	// 0x349971f1
- (void)mapChlidrenAt:(id)at withState:(id)state;	// 0x34965a7d
- (void)mapPointTextAt:(id)at style:(id)style level:(int)level withState:(id)state;	// 0x34965769
- (void)mapSiblingTextAt:(id)at style:(id)style level:(int)level withState:(id)state;	// 0x349970a5
- (void)mapStyledRectangle:(CGRect)rectangle at:(id)at withState:(id)state;	// 0x34964c91
- (void)mapTextAt:(id)at withBounds:(id)bounds isCentered:(BOOL)centered includeChildren:(BOOL)children withState:(id)state;	// 0x34965281
- (id)plainText;	// 0x34963da9
// converted property getter: - (id)presentationName;	// 0x349645f1
- (id)presentationWithName:(id)name;	// 0x34963c01
- (void)renderShapeAsBackgroundInBounds:(id)bounds;	// 0x34964c8d
// converted property setter: - (void)setPresentationName:(id)name;	// 0x349c570d
- (id)shapeStyle;	// 0x34964411
- (id)stroke;	// 0x34964f21
- (id)styleMatrix;	// 0x34964b09
- (id)transformForPresentationWithName:(id)name;	// 0x34963a59
- (id)transformPresentationName;	// 0x34963a55
@end

