/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataItem.h"

@class ATVHSDAAPAssetData;

__attribute__((visibility("hidden")))
@interface ATVHSDAAPItem : ATVDataItem {
	ATVHSDAAPAssetData *_itemData;	// 4 = 0x4
}
@property(retain, nonatomic) ATVHSDAAPAssetData *itemData;	// G=0xdb6b1; S=0xdb6c1; @synthesize=_itemData
- (id)initWithDataClient:(id)dataClient itemData:(id)data;	// 0xdb4e5
- (id)concreteValueForProperty:(id)property;	// 0xdb5f9
- (void)dealloc;	// 0xdb52d
- (unsigned)hash;	// 0xdb5c1
- (BOOL)isEqual:(id)equal;	// 0xdb571
// declared property getter: - (id)itemData;	// 0xdb6b1
// declared property setter: - (void)setItemData:(id)data;	// 0xdb6c1
@end

