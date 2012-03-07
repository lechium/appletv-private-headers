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
@property(assign, nonatomic) id<GEOSupportedTileSetsServerProxyDelegate> delegate;	// G=0x32c8ed55; S=0x32c8ed65; @synthesize=_delegate
- (void)_updateDidFail;	// 0x32c8e6e1
// declared property getter: - (id)delegate;	// 0x32c8ed55
- (id)documentDataFromDisk;	// 0x32c8e6b5
- (void)loadAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x32c8ea1d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32c8ed65
- (void)updateAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x32c8ea7d
- (void)updateDocument;	// 0x32c8e729
@end
