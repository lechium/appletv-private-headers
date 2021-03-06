/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
 */

#import <NSObject.h> // Unknown library

@class OACredential;

@interface OAURLRequestSigner : NSObject {
	OACredential *_credential;	// 4 = 0x4
	int _signatureMethod;	// 8 = 0x8
}
@property(assign, nonatomic) int signatureMethod;	// G=0x349d4529; S=0x349d4539; @synthesize=_signatureMethod
- (id)initWithCredential:(id)credential;	// 0x349d3665
- (id)applyApplicationID:(id)anId toRequest:(id)request containsMultiPartData:(BOOL)data;	// 0x349d3cad
- (void)dealloc;	// 0x349d36c9
- (id)oauthAuthorizationHeaderWithSignature:(id)signature nonce:(id)nonce timestamp:(id)timestamp;	// 0x349d3a2d
- (id)oauthNonce;	// 0x349d37e5
- (id)oauthParametersWithNonce:(id)nonce timeStamp:(id)stamp;	// 0x349d3891
// declared property setter: - (void)setSignatureMethod:(int)method;	// 0x349d4539
// declared property getter: - (int)signatureMethod;	// 0x349d4529
- (id)signatureMethodString;	// 0x349d3715
- (id)signedURLRequestWithRequest:(id)request;	// 0x349d4509
- (id)signedURLRequestWithRequest:(id)request applicationID:(id)anId timestamp:(id)timestamp;	// 0x349d3f2d
- (Class)signer;	// 0x349d3775
- (id)timestamp:(id)timestamp;	// 0x349d3825
@end

