/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSURLRequest;
@protocol SSDownloadManifestRequestDelegate;

@interface SSDownloadManifestRequest : SSRequest <SSXPCCoding> {
	int _manifestFormat;	// 28 = 0x1c
	BOOL _shouldHideUserPrompts;	// 32 = 0x20
	NSURLRequest *_urlRequest;	// 36 = 0x24
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x3233f92d; 
@property(assign, nonatomic) id<SSDownloadManifestRequestDelegate> delegate;	// @dynamic
@property(assign) int manifestFormat;	// G=0x3233f965; S=0x3233fa35; 
@property(assign) BOOL shouldHideUserPrompts;	// G=0x3233f5dd; S=0x3233f559; 
- (id)init;	// 0x3233f425
- (id)initWithURLRequest:(id)urlrequest;	// 0x3233f439
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3233fe21
// declared property getter: - (id)URLRequest;	// 0x3233f92d
- (id)copyXPCEncoding;	// 0x3233fd05
- (void)dealloc;	// 0x3233f50d
// declared property getter: - (int)manifestFormat;	// 0x3233f965
// declared property setter: - (void)setManifestFormat:(int)format;	// 0x3233fa35
// declared property setter: - (void)setShouldHideUserPrompts:(BOOL)hideUserPrompts;	// 0x3233f559
// declared property getter: - (BOOL)shouldHideUserPrompts;	// 0x3233f5dd
- (BOOL)start;	// 0x3233fab5
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x3233fc8d
- (void)startWithManifestResponseBlock:(id)manifestResponseBlock;	// 0x3233f6b1
@end

