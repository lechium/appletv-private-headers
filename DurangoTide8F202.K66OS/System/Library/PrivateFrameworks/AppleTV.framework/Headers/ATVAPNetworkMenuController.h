/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVAPTestResultDelegate.h"
#import "ATVAPPasswordEntryDelegate.h"
#import "BRMenuListItemProvider.h"
#import <BRMenuController.h> // Unknown library
#import "BRTextFieldDelegate.h"

@class BRAirportNetworksProvider, NSArray, NSString, BRAirportNetwork;
@protocol ATVAPNetworkSelectionDelegate;

@interface ATVAPNetworkMenuController : BRMenuController <ATVAPTestResultDelegate, ATVAPPasswordEntryDelegate, BRTextFieldDelegate, BRMenuListItemProvider> {
@private
	id<ATVAPNetworkSelectionDelegate> _delegate;	// 104 = 0x68
	NSArray *_networks;	// 108 = 0x6c
	BRAirportNetwork *_selectedNetwork;	// 112 = 0x70
	NSString *_otherNetworkName;	// 116 = 0x74
	NSString *_attemptedPassword;	// 120 = 0x78
	BOOL _isCollectingNetworks;	// 124 = 0x7c
	BRAirportNetworksProvider *_networksProvider;	// 128 = 0x80
}
- (id)initWithNotifying:(id)notifying;	// 0x336c74ed
- (void)_associateWithNetworkCompleted:(id)networkCompleted;	// 0x336c7985
- (void)_collectPasswordForNetwork:(id)network;	// 0x336c6e41
- (void)_collectWirelessNetworks;	// 0x336c6fcd
- (void)_networkHasBeenCollected:(id)collected;	// 0x336c6a8d
- (void)_networkStateChanged:(id)changed;	// 0x336c66f9
- (void)_networksHaveBeenCollected:(id)collected;	// 0x336c6ba1
- (void)_removeDirectedScanControllerIfPresent;	// 0x336c6a31
- (void)_selectNetwork:(id)network usingPassword:(id)password;	// 0x336c6d41
- (void)_showFailedNetworkConnection:(id)connection error:(id)error;	// 0x336c7269
- (void)_updateMenuWidth;	// 0x336c77ad
- (void)dealloc;	// 0x336c7105
- (float)heightForRow:(long)row;	// 0x336c66f1
- (long)itemCount;	// 0x336c6775
- (id)itemForRow:(long)row;	// 0x336c6799
- (void)itemSelected:(long)selected;	// 0x336c7045
- (id)otherNetworkListItem;	// 0x336c7439
- (void)passwordEntered:(id)entered forNetwork:(id)network;	// 0x336c699d
- (BOOL)rowSelectable:(long)selectable;	// 0x336c66f5
- (void)testCompleted:(BOOL)completed;	// 0x336c69f5
- (void)textDidChange:(id)text;	// 0x336c66ed
- (void)textDidEndEditing:(id)text;	// 0x336c6851
- (id)titleForRow:(long)row;	// 0x336c71d1
@end

