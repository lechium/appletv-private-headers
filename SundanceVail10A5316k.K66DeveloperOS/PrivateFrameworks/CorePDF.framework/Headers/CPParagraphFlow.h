/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class CPParagraph, NSMutableArray;

@interface CPParagraphFlow : NSObject {
	CPParagraph *paragraph;	// 4 = 0x4
	float fLeft;	// 8 = 0x8
	float fRight;	// 12 = 0xc
	float fTop;	// 16 = 0x10
	float fBottom;	// 20 = 0x14
	NSMutableArray *paragraphsAbove;	// 24 = 0x18
	NSMutableArray *paragraphsBelow;	// 28 = 0x1c
	NSMutableArray *paragraphsLeft;	// 32 = 0x20
	NSMutableArray *paragraphsRight;	// 36 = 0x24
	BOOL placed;	// 40 = 0x28
	BOOL adjacentToCallout;	// 41 = 0x29
	int calloutType;	// 44 = 0x2c
	CPParagraph *nextInColumn;	// 48 = 0x30
}
@property(assign) int calloutType;	// G=0x33a5af69; S=0x33a5af7d; @synthesize
@property(assign) float fBottom;	// G=0x33a5af0d; S=0x33a5af21; @synthesize
@property(assign) float fLeft;	// G=0x33a5aeb5; S=0x33a5aec9; @synthesize
@property(assign) float fRight;	// G=0x33a5aee1; S=0x33a5aef5; @synthesize
@property(assign, nonatomic) CPParagraph *nextInColumn;	// G=0x33a5af95; S=0x33a5afa5; @synthesize
@property(retain, nonatomic) CPParagraph *paragraph;	// G=0x33a5ae81; S=0x33a5ae91; @synthesize
@property(readonly, retain) NSMutableArray *paragraphsAbove;	// G=0x33a59775; converted property
@property(readonly, retain) NSMutableArray *paragraphsBelow;	// G=0x33a59785; converted property
@property(readonly, retain) NSMutableArray *paragraphsLeft;	// G=0x33a59795; converted property
@property(readonly, retain) NSMutableArray *paragraphsRight;	// G=0x33a597a5; converted property
@property(assign) BOOL placed;	// G=0x33a5af39; S=0x33a5af51; @synthesize
- (id)initWithParagraph:(id)paragraph;	// 0x33a58e11
- (float)area;	// 0x33a5acc9
- (CGRect)belowBounds;	// 0x33a5aa09
- (id)belowTwoSides:(unsigned)sides;	// 0x33a5a2e9
// declared property getter: - (int)calloutType;	// 0x33a5af69
- (float)dAbove;	// 0x33a5ac09
- (float)dBelow;	// 0x33a5ab49
- (void)dealloc;	// 0x33a58f5d
- (id)description;	// 0x33a59011
// declared property getter: - (float)fBottom;	// 0x33a5af0d
// declared property getter: - (float)fLeft;	// 0x33a5aeb5
// declared property getter: - (float)fRight;	// 0x33a5aee1
- (id)ignoreCallouts:(unsigned)callouts;	// 0x33a59f4d
- (int)inOrder;	// 0x33a5ad25
- (int)inOrder:(BOOL)order;	// 0x33a5ad4d
- (BOOL)intervalOverlapLeft:(float)left right:(float)right paragraphs:(id)paragraphs;	// 0x33a59209
- (BOOL)intervalOverlapLeft:(float)left right:(float)right rects:(id)rects;	// 0x33a59141
- (BOOL)intervalOverlapTop:(float)top bottom:(float)bottom paragraphs:(id)paragraphs;	// 0x33a592cd
- (int)leftOrder;	// 0x33a5ae31
// declared property getter: - (id)nextInColumn;	// 0x33a5af95
- (id)nextParagraphInColumn:(id)column;	// 0x33a5a2f1
- (int)outOrder;	// 0x33a5ae09
// declared property getter: - (id)paragraph;	// 0x33a5ae81
// converted property getter: - (id)paragraphsAbove;	// 0x33a59775
// converted property getter: - (id)paragraphsBelow;	// 0x33a59785
// converted property getter: - (id)paragraphsLeft;	// 0x33a59795
// converted property getter: - (id)paragraphsRight;	// 0x33a597a5
// declared property getter: - (BOOL)placed;	// 0x33a5af39
- (void)removeFromAbove:(id)above;	// 0x33a5a6e9
- (void)removeFromBelow:(id)below;	// 0x33a5a6c9
- (void)replaceAbove:(id)above withOneOf:(id)of;	// 0x33a5a889
- (void)replaceBelow:(id)below withOneOf:(id)of;	// 0x33a5a709
- (int)rightOrder;	// 0x33a5ae59
// declared property setter: - (void)setCalloutType:(int)type;	// 0x33a5af7d
// declared property setter: - (void)setFBottom:(float)bottom;	// 0x33a5af21
// declared property setter: - (void)setFLeft:(float)left;	// 0x33a5aec9
// declared property setter: - (void)setFRight:(float)right;	// 0x33a5aef5
// declared property setter: - (void)setNextInColumn:(id)column;	// 0x33a5afa5
// declared property setter: - (void)setParagraph:(id)paragraph;	// 0x33a5ae91
- (void)setParagraphsAboveIn:(id)anIn;	// 0x33a59391
- (void)setParagraphsBelowIn:(id)anIn;	// 0x33a597b5
- (void)setParagraphsLeftIn:(id)anIn;	// 0x33a59a61
- (void)setParagraphsRightIn:(id)anIn;	// 0x33a59c99
// declared property setter: - (void)setPlaced:(BOOL)placed;	// 0x33a5af51
- (id)simpleRule:(unsigned)rule;	// 0x33a59ef1
- (int)topDescending:(id)descending;	// 0x33a590dd
- (id)twoSides:(unsigned)sides;	// 0x33a5a125
@end
