/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSCoding.h"

@class SSPlayInfoRequestContext, SSPlayInfoResponse;
@protocol SSPlayInfoRequestDelegate;

@interface SSPlayInfoRequest : SSRequest <SSCoding> {
@private
	SSPlayInfoRequestContext *_context;	// 36 = 0x24
	SSPlayInfoResponse *_response;	// 40 = 0x28
}
@property(assign, nonatomic) id<SSPlayInfoRequestDelegate> delegate;	// @dynamic
@property(readonly, assign, nonatomic) SSPlayInfoRequestContext *playInfoContext;	// G=0x324f0e29; 
@property(readonly, assign, nonatomic) SSPlayInfoResponse *playInfoResponse;	// G=0x324f0e61; 
- (id)init;	// 0x324f0cf1
- (id)initWithPlayInfoContext:(id)playInfoContext;	// 0x324f0d05
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324f0f8d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x324f106d
- (void)_sendResponseToDelegate:(id)delegate;	// 0x324f12b1
- (id)copyPropertyListEncoding;	// 0x324f0e99
- (void *)copyXPCEncoding;	// 0x324f0f59
- (void)dealloc;	// 0x324f0dc9
- (id)handleFailureResponse:(id)response;	// 0x324f10a9
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x324f117d
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x324f1289
// declared property getter: - (id)playInfoContext;	// 0x324f0e29
// declared property getter: - (id)playInfoResponse;	// 0x324f0e61
@end

