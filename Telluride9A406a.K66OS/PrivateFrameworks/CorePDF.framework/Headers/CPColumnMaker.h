/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class NSMutableArray, CPZone;

@interface CPColumnMaker : NSObject {
	NSMutableArray *columns;	// 4 = 0x4
	CPZone *currentZone;	// 8 = 0x8
	NSMutableArray *allParagraphs;	// 12 = 0xc
	NSMutableArray *thinHorizontalShapes;	// 16 = 0x10
	NSMutableArray *otherShapes;	// 20 = 0x14
	NSMutableArray *images;	// 24 = 0x18
	NSMutableArray *paragraphWrappers;	// 28 = 0x1c
	CGRect pageBounds;	// 32 = 0x20
	float maxParagraphDistance;	// 48 = 0x30
}
@property(readonly, retain) NSMutableArray *columns;	// G=0x304eb061; converted property
@property(assign) CGRect pageBounds;	// G=0x304eb29d; S=0x304eb25d; @synthesize
- (id)init;	// 0x304eb1fd
- (void)anchorImages;	// 0x304ebc49
- (float)averageSpacing:(id)spacing;	// 0x304ec261
- (void)callOuts;	// 0x304ec701
- (BOOL)canSafelyAdd:(id)add to:(id)to;	// 0x304eb071
- (id)chunkAbove:(id)above in:(id)anIn;	// 0x304ed159
- (BOOL)closeImagesBetween:(id)between and:(id)anAnd bounds:(CGRect)bounds;	// 0x304ec349
- (BOOL)column:(id)column isLinkedBelowTo:(id)to;	// 0x304eb195
// converted property getter: - (id)columns;	// 0x304eb061
- (BOOL)cuttingShapeBetween:(id)between and:(id)anAnd;	// 0x304ed74d
- (void)dealloc;	// 0x304edc1d
- (void)intersectionCallout:(id)callout;	// 0x304ece4d
- (BOOL)intervalOverlapLeft:(float)left right:(float)right paragraphs:(id)paragraphs;	// 0x304edb51
- (void)makeColumnsFrom:(id)from zone:(id)zone;	// 0x304eb2c1
// declared property getter: - (CGRect)pageBounds;	// 0x304eb29d
- (BOOL)paragraph:(id)paragraph isAbove:(id)above;	// 0x304ed57d
- (BOOL)paragraph:(id)paragraph isBelow:(id)below;	// 0x304ed4f5
- (BOOL)paragraph:(id)paragraph isLinkedBelowTo:(id)to;	// 0x304eb0e5
- (BOOL)paragraph:(id)paragraph notOnSameShapeAs:(id)as;	// 0x304ed605
- (id)paragraphAbove:(id)above in:(id)anIn;	// 0x304ed2a1
- (id)paragraphBelow:(id)below in:(id)anIn;	// 0x304ed3c1
- (void)partitionShapes:(id)shapes;	// 0x304ed9a9
// declared property setter: - (void)setPageBounds:(CGRect)bounds;	// 0x304eb25d
- (void)splitColumns:(id)columns;	// 0x304ebee9
@end

