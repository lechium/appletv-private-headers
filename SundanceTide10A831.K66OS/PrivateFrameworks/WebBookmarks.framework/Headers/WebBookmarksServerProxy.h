/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"
#import "WebBookmarksClientProtocol.h"

@class XPCProxy;
@protocol WebBookmarksClientDelegateProtocol, WebBookmarksServerProtocol;

@interface WebBookmarksServerProxy : NSObject <WebBookmarksClientProtocol, XPCProxyTarget> {
	id<WebBookmarksClientDelegateProtocol> _delegate;	// 4 = 0x4
	XPCProxy<WebBookmarksServerProtocol> *_serverProxy;	// 8 = 0x8
}
@property(assign, nonatomic) id<WebBookmarksClientDelegateProtocol> delegate;	// G=0x31465225; S=0x31464eb9; @synthesize=_delegate
- (id)init;	// 0x31464c49
- (void)addReadingListItems:(id)items;	// 0x31464efd
- (void)clearAllCloudTabDevices;	// 0x31464f3d
- (void)clearTabsForCurrentDevice;	// 0x31464f5d
- (void)dealloc;	// 0x31464de1
// declared property getter: - (id)delegate;	// 0x31465225
- (void)didFinishFetching;	// 0x3146513d
- (void)didStartFetchingReadingListItem:(id)item;	// 0x31465035
- (void)didStopFetchingReadingListItem:(id)item;	// 0x3146508d
- (void)didToggleCloudTabs:(BOOL)tabs terminateAfterUpdating:(BOOL)updating;	// 0x31464f7d
- (void)didTogglePrivateBrowsing:(BOOL)browsing;	// 0x31464fe9
- (void)didUpdateReadingListFetchingProgress:(id)progress;	// 0x314650e5
- (void)invalidate;	// 0x31464e41
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x3146515d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31464eb9
- (void)startReadingListFetcher;	// 0x31464f1d
@end
