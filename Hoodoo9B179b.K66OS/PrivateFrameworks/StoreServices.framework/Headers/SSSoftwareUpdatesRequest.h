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
@property(readonly, assign) SSSoftwareUpdatesContext *updateQueueContext;	// G=0x33c8ebf5; 
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x33c8eb4d
- (id)initWithUpdateQueueContext:(id)updateQueueContext;	// 0x33c8ea35
- (void)_sendResponseToDelegate:(id)delegate;	// 0x33c8ed69
- (id)copyPropertyListEncoding;	// 0x33c8ead5
- (void)dealloc;	// 0x33c8ea89
- (id)handleFailureResponse:(id)response;	// 0x33c8ec2d
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x33c8ecd5
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x33c8ed41
// declared property getter: - (id)updateQueueContext;	// 0x33c8ebf5
@end

