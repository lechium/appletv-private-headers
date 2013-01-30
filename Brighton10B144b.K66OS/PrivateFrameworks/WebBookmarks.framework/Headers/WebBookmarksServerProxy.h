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
@property(assign, nonatomic) id<WebBookmarksClientDelegateProtocol> delegate;	// G=0x35c45225; S=0x35c44eb9; @synthesize=_delegate
- (id)init;	// 0x35c44c49
- (void)addReadingListItems:(id)items;	// 0x35c44efd
- (void)clearAllCloudTabDevices;	// 0x35c44f3d
- (void)clearTabsForCurrentDevice;	// 0x35c44f5d
- (void)dealloc;	// 0x35c44de1
// declared property getter: - (id)delegate;	// 0x35c45225
- (void)didFinishFetching;	// 0x35c4513d
- (void)didStartFetchingReadingListItem:(id)item;	// 0x35c45035
- (void)didStopFetchingReadingListItem:(id)item;	// 0x35c4508d
- (void)didToggleCloudTabs:(BOOL)tabs terminateAfterUpdating:(BOOL)updating;	// 0x35c44f7d
- (void)didTogglePrivateBrowsing:(BOOL)browsing;	// 0x35c44fe9
- (void)didUpdateReadingListFetchingProgress:(id)progress;	// 0x35c450e5
- (void)invalidate;	// 0x35c44e41
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x35c4515d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35c44eb9
- (void)startReadingListFetcher;	// 0x35c44f1d
@end
