/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


__attribute__((visibility("hidden")))
@interface CMDiagramArrowMapper : CMDiagramShapeMapper {
@private
	BOOL mIsVertical;	// 112 = 0x70
	BOOL mIsOutward;	// 113 = 0x71
	float mRadius;	// 116 = 0x74
}
+ (void)initialize;	// 0x31a8f75d
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x31a8f7f9
- (CGRect)circumscribedBounds;	// 0x31a8f9c1
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x31a8fa81
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x31a90129
- (CGSize)textSizeForShapeSize:(CGSize)shapeSize;	// 0x31a901e9
@end

