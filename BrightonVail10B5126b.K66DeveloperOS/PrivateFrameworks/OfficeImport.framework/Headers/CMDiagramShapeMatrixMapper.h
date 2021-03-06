/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper {
	int mColumnCount;	// 112 = 0x70
	int mRowCount;	// 116 = 0x74
	float mRectWidth;	// 120 = 0x78
	float mRectHeight;	// 124 = 0x7c
	BOOL mHasArrows;	// 128 = 0x80
	BOOL mIsSnake;	// 129 = 0x81
	BOOL mIsHorizontal;	// 130 = 0x82
	BOOL mIsLinear;	// 131 = 0x83
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x34961481
- (CGRect)circumscribedBounds;	// 0x349618dd
- (int)columnCount;	// 0x34961731
- (double)gapRatio;	// 0x349625d1
- (CGSize)gapSize;	// 0x34962509
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x34961f59
- (void)setColumnsAndRowsCount;	// 0x349616c9
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x34962995
@end

