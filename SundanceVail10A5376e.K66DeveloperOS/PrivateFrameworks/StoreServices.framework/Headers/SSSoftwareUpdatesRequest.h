/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class SSSoftwareUpdatesContext;
@protocol SSSoftwareUpdatesRequestDelegate;

@interface SSSoftwareUpdatesRequest : SSRequest {
	SSSoftwareUpdatesContext *_context;	// 28 = 0x1c
}
@property(assign, nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSSoftwareUpdatesContext *updateQueueContext;	// G=0x32cc13f9; 
- (id)initWithUpdateQueueContext:(id)updateQueueContext;	// 0x32cc10dd
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x32cc16b5
- (id)copyXPCEncoding;	// 0x32cc1681
- (void)dealloc;	// 0x32cc1131
- (BOOL)start;	// 0x32cc1431
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x32cc1609
- (void)startWithUpdatesResponseBlock:(id)updatesResponseBlock;	// 0x32cc117d
// declared property getter: - (id)updateQueueContext;	// 0x32cc13f9
@end
