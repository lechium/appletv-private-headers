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
@property(retain) id presentationName;	// G=0x34fbd5f1; S=0x3501e70d; converted property
- (id)initWithPoint:(id)point drawingContext:(id)context orientedBounds:(id)bounds parent:(id)parent;	// 0x34fbc919
- (void)applyDiagramStyleToShapeProperties;	// 0x34fbd359
- (id)baseTextListStyleWithBounds:(id)bounds isCentered:(BOOL)centered;	// 0x34fbe4a1
- (float)defaultFontSize;	// 0x34fbe6cd
- (id)diagram;	// 0x34fbd551
- (id)fill;	// 0x34fbde15
- (void)mapAt:(id)at withState:(id)state;	// 0x34fbd1f1
- (void)mapChildrenTextAt:(id)at style:(id)style level:(int)level withState:(id)state;	// 0x34ff01f1
- (void)mapChlidrenAt:(id)at withState:(id)state;	// 0x34fbea7d
- (void)mapPointTextAt:(id)at style:(id)style level:(int)level withState:(id)state;	// 0x34fbe769
- (void)mapSiblingTextAt:(id)at style:(id)style level:(int)level withState:(id)state;	// 0x34ff00a5
- (void)mapStyledRectangle:(CGRect)rectangle at:(id)at withState:(id)state;	// 0x34fbdc91
- (void)mapTextAt:(id)at withBounds:(id)bounds isCentered:(BOOL)centered includeChildren:(BOOL)children withState:(id)state;	// 0x34fbe281
- (id)plainText;	// 0x34fbcda9
// converted property getter: - (id)presentationName;	// 0x34fbd5f1
- (id)presentationWithName:(id)name;	// 0x34fbcc01
- (void)renderShapeAsBackgroundInBounds:(id)bounds;	// 0x34fbdc8d
// converted property setter: - (void)setPresentationName:(id)name;	// 0x3501e70d
- (id)shapeStyle;	// 0x34fbd411
- (id)stroke;	// 0x34fbdf21
- (id)styleMatrix;	// 0x34fbdb09
- (id)transformForPresentationWithName:(id)name;	// 0x34fbca59
- (id)transformPresentationName;	// 0x34fbca55
@end

