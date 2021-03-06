/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GEOSupportedTileSetsServerProxy.h"

@protocol GEOSupportedTileSetsServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface GEOSupportedTileSetsServerRemoteProxy : NSObject <GEOSupportedTileSetsServerProxy> {
	id<GEOSupportedTileSetsServerProxyDelegate> _delegate;	// 4 = 0x4
}
@property(assign, nonatomic) id<GEOSupportedTileSetsServerProxyDelegate> delegate;	// G=0x36726d55; S=0x36726d65; @synthesize=_delegate
- (void)_updateDidFail;	// 0x367266e1
// declared property getter: - (id)delegate;	// 0x36726d55
- (id)documentDataFromDisk;	// 0x367266b5
- (void)loadAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x36726a1d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36726d65
- (void)updateAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x36726a7d
- (void)updateDocument;	// 0x36726729
@end

