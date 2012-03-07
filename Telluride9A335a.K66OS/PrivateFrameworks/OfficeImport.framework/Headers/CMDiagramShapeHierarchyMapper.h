/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramShapeMapper.h"
#import "OfficeImport-Structs.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper {
@private
	NSMutableDictionary *mNodeInfoMap;	// 112 = 0x70
	BOOL mIsLayered;	// 116 = 0x74
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x3532a7c9
- (CGRect)boundsForNode:(id)node;	// 0x3532ba69
- (void)createInfoForNode:(id)node depth:(int)depth;	// 0x3532ac71
- (void)dealloc;	// 0x3532c5a5
- (id)infoForNode:(id)node;	// 0x3532b461
- (void)mapAt:(id)at withState:(id)state;	// 0x3532a8f5
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x3532c5a1
- (void)mapLayerNodes:(id)nodes at:(id)at scale:(float)scale offsetX:(float)x offsetY:(float)y withState:(id)state;	// 0x3532eaf9
- (CGRect)mapLogicalBoundsWithXRanges:(const ODIHRangeVector *)xranges;	// 0x3532b749
- (void)mapNode:(id)node at:(id)at scale:(float)scale offsetX:(float)x offsetY:(float)y withState:(id)state;	// 0x3532baf5
- (ODIHRangeVector *)mapRangesForNode:(id)node;	// 0x3532ae41
- (void)setAbsolutePositionOfNode:(id)node parentRow:(int)row parentXOffset:(float)offset index:(int)index;	// 0x3532b871
- (void)setUpLayers;	// 0x3532a891
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x3532b9e5
@end
