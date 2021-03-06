/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCarouselViewUIDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchCarouselViewUIDelegate : XXUnknownSuperclass <ATVCarouselViewUIDelegate> {
	NSArray *_positions;	// 4 = 0x4
	float _displacement;	// 8 = 0x8
}
@property(assign, nonatomic) float displacement;	// G=0x3c5aa9; S=0x3c5ab9; @synthesize=_displacement
@property(copy, nonatomic) NSArray *positions;	// G=0x3c5a85; S=0x3c5a99; @synthesize=_positions
- (void).cxx_destruct;	// 0x3c5ac9
- (id)carouselView:(id)view configurePerspectiveForContext:(id)context;	// 0x3c52c1
- (ATVCarouselViewItemsConfig)carouselView:(id)view itemsConfigForContext:(id)context;	// 0x3c49a1
- (id)carouselView:(id)view setPositionOfItem:(id)item toPositionAtIndex:(unsigned)index context:(id)context;	// 0x3c52c9
// declared property getter: - (float)displacement;	// 0x3c5aa9
// declared property getter: - (id)positions;	// 0x3c5a85
// declared property setter: - (void)setDisplacement:(float)displacement;	// 0x3c5ab9
// declared property setter: - (void)setPositions:(id)positions;	// 0x3c5a99
@end

