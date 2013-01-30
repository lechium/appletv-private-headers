/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuController.h"
#import "ATVAPPasswordEntryDelegate.h"
#import "BRMenuListItemProvider.h"

@class BRAirportNetwork;

__attribute__((visibility("hidden")))
@interface ATVAPWEPPasswordMenuController : BRMenuController <BRMenuListItemProvider, ATVAPPasswordEntryDelegate> {
	BRAirportNetwork *_network;	// 144 = 0x90
	long _passwordType;	// 148 = 0x94
	id<ATVAPPasswordEntryDelegate> _delegate;	// 152 = 0x98
}
- (id)initForNetwork:(id)network notifying:(id)notifying;	// 0x2171f5
- (void)dealloc;	// 0x2173a9
- (float)heightForRow:(long)row;	// 0x21753d
- (long)itemCount;	// 0x217535
- (id)itemForRow:(long)row;	// 0x217491
- (void)itemSelected:(long)selected;	// 0x2173f5
- (void)passwordEntered:(id)entered forNetwork:(id)network;	// 0x217545
- (BOOL)rowSelectable:(long)selectable;	// 0x217541
- (id)titleForRow:(long)row;	// 0x217539
@end
