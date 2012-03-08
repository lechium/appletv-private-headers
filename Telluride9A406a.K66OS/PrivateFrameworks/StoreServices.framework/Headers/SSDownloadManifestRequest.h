/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSCoding.h"

@class NSURLRequest;
@protocol SSDownloadManifestRequestDelegate;

@interface SSDownloadManifestRequest : SSRequest <SSCoding> {
@private
	int _manifestFormat;	// 36 = 0x24
	BOOL _shouldHideUserPrompts;	// 40 = 0x28
	NSURLRequest *_urlRequest;	// 44 = 0x2c
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x31549f91; 
@property(assign, nonatomic) id<SSDownloadManifestRequestDelegate> delegate;	// @dynamic
@property(assign, nonatomic) int manifestFormat;	// G=0x3154a119; S=0x3154a129; @synthesize=_manifestFormat
@property(assign, nonatomic) BOOL shouldHideUserPrompts;	// G=0x3154a139; S=0x3154a149; @synthesize=_shouldHideUserPrompts
- (id)init;	// 0x31549c41
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x31549e75
- (id)initWithURLRequest:(id)urlrequest;	// 0x31549c55
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x31549f55
// declared property getter: - (id)URLRequest;	// 0x31549f91
- (void)_sendResponseToDelegate:(id)delegate;	// 0x3154a09d
- (id)copyPropertyListEncoding;	// 0x31549d75
- (void *)copyXPCEncoding;	// 0x31549e41
- (void)dealloc;	// 0x31549d29
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x31549fc9
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x3154a075
// declared property getter: - (int)manifestFormat;	// 0x3154a119
// declared property setter: - (void)setManifestFormat:(int)format;	// 0x3154a129
// declared property setter: - (void)setShouldHideUserPrompts:(BOOL)hideUserPrompts;	// 0x3154a149
// declared property getter: - (BOOL)shouldHideUserPrompts;	// 0x3154a139
@end

