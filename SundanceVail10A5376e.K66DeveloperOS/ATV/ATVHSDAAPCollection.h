/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataCollection.h"

@class ATVHSDAAPAssetData;

__attribute__((visibility("hidden")))
@interface ATVHSDAAPCollection : ATVDataCollection {
	ATVHSDAAPAssetData *_itemData;	// 4 = 0x4
}
@property(retain, nonatomic) ATVHSDAAPAssetData *itemData;	// G=0xdefa1; S=0xdefb1; @synthesize=_itemData
- (id)initWithDataClient:(id)dataClient itemData:(id)data;	// 0xdeed5
- (id)concreteValueForProperty:(id)property;	// 0xdef61
- (void)dealloc;	// 0xdef1d
// declared property getter: - (id)itemData;	// 0xdefa1
// declared property setter: - (void)setItemData:(id)data;	// 0xdefb1
@end
