/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataCollection.h"

@class ATVHSDAAPAssetData;

__attribute__((visibility("hidden")))
@interface ATVHSDPAPCollection : ATVDataCollection {
	ATVHSDAAPAssetData *_itemData;	// 4 = 0x4
}
@property(retain, nonatomic) ATVHSDAAPAssetData *itemData;	// G=0xeb66d; S=0xeb67d; @synthesize=_itemData
- (id)initWithDataClient:(id)dataClient itemData:(id)data;	// 0xeb565
- (id)concreteValueForProperty:(id)property;	// 0xeb5f1
- (void)dealloc;	// 0xeb5ad
// declared property getter: - (id)itemData;	// 0xeb66d
// declared property setter: - (void)setItemData:(id)data;	// 0xeb67d
@end
