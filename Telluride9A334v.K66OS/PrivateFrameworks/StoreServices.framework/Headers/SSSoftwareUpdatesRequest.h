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
@private
	SSSoftwareUpdatesContext *_context;	// 36 = 0x24
}
@property(assign, nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSSoftwareUpdatesContext *updateQueueContext;	// G=0x324e1129; 
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324e1081
- (id)initWithUpdateQueueContext:(id)updateQueueContext;	// 0x324e0f69
- (void)_sendResponseToDelegate:(id)delegate;	// 0x324e129d
- (id)copyPropertyListEncoding;	// 0x324e1009
- (void)dealloc;	// 0x324e0fbd
- (id)handleFailureResponse:(id)response;	// 0x324e1161
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x324e1209
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x324e1275
// declared property getter: - (id)updateQueueContext;	// 0x324e1129
@end

