/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


@interface CMDiagramChevronMapper : CMDiagramShapeMapper {
	BOOL mHChevron;	// 112 = 0x70
}
- (id)_suggestedBoundsForNodeAtIndex:(unsigned)index;	// 0x33b18e59
- (void)mapAt:(id)at withState:(id)state;	// 0x33b18cd1
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x33b18fe9
- (void)setIsHChevron:(BOOL)chevron;	// 0x33b1a029
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x33b18de1
@end

