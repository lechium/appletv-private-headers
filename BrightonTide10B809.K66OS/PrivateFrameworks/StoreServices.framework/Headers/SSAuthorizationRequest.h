/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSNumber, NSString;
@protocol SSAuthorizationRequestDelegate;

@interface SSAuthorizationRequest : SSRequest <SSXPCCoding> {
	NSNumber *_accountIdentifier;	// 28 = 0x1c
	NSString *_keybagPath;	// 32 = 0x20
	id _token;	// 36 = 0x24
}
@property(readonly, assign) NSNumber *accountIdentifier;	// G=0x354e32ed; 
@property(readonly, assign) id authorizationToken;	// G=0x354e3325; 
@property(assign, nonatomic) id<SSAuthorizationRequestDelegate> delegate;	// @dynamic
@property(copy) NSString *keybagPath;	// G=0x354e3a31; S=0x354e3a45; @synthesize=_keybagPath
- (id)init;	// 0x354e3145
- (id)initWithAuthorizationToken:(id)authorizationToken accountIdentifier:(id)identifier;	// 0x354e3159
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354e393d
// declared property getter: - (id)accountIdentifier;	// 0x354e32ed
// declared property getter: - (id)authorizationToken;	// 0x354e3325
- (id)copyXPCEncoding;	// 0x354e3829
- (void)dealloc;	// 0x354e3275
// declared property getter: - (id)keybagPath;	// 0x354e3a31
// declared property setter: - (void)setKeybagPath:(id)path;	// 0x354e3a45
- (BOOL)start;	// 0x354e35d9
- (void)startWithAuthorizationResponseBlock:(id)authorizationResponseBlock;	// 0x354e335d
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x354e37b1
@end
