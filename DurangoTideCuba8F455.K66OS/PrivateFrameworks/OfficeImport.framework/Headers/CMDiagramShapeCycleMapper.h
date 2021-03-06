/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


__attribute__((visibility("hidden")))
@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper {
@private
	float mScale;	// 112 = 0x70
	BOOL mCircularArrows;	// 116 = 0x74
	int mDiagramType;	// 120 = 0x78
	int mArrowShapeType;	// 124 = 0x7c
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x32ca87a1
- (CGRect)circumscribedBounds;	// 0x32ca88f1
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x32ca8bb5
- (void)mapTransitionArrowsAt:(id)at index:(unsigned)index withState:(id)state;	// 0x32cb44ad
- (void)mapTransitionPointAt:(id)at index:(unsigned)index withState:(id)state;	// 0x32ca9419
- (CGRect)nodeBoundsWithIndex:(unsigned)index;	// 0x32ca8fad
- (CGSize)nodeSize;	// 0x32ca8a99
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x32ca8edd
@end

