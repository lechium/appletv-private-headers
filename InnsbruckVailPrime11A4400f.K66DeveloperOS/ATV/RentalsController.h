/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"


__attribute__((visibility("hidden")))
@interface RentalsController : BRDataQueryController {
}
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x284aa5
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x284fa5
- (id)errorForNoContent;	// 0x284efd
- (id)indexPathForDataItem:(void *)dataItem;	// 0x284f1d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x285541
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x285ddd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x285ce5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x2854f5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x28504d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x285505
- (id)newDataQuery;	// 0x284b15
- (long)numberOfSectionsInList:(id)list;	// 0x285501
@end
