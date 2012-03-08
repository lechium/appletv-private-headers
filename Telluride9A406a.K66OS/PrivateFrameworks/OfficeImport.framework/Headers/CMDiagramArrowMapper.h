/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramShapeMapper.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CMDiagramArrowMapper : CMDiagramShapeMapper {
@private
	BOOL mIsVertical;	// 112 = 0x70
	BOOL mIsOutward;	// 113 = 0x71
	float mRadius;	// 116 = 0x74
}
+ (void)initialize;	// 0x32a109bd
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x32a10a35
- (CGRect)circumscribedBounds;	// 0x32a10bf9
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x32a10cd1
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x32a113a1
- (CGSize)textSizeForShapeSize:(CGSize)shapeSize;	// 0x32a1145d
@end

