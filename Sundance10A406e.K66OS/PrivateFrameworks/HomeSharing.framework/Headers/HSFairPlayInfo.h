/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSArray, NSString;

@interface HSFairPlayInfo : NSObject {
	BOOL _hasValidMescalSession;	// 4 = 0x4
	void *_hwInfo;	// 8 = 0x8
	NSArray *_requestsToSign;	// 12 = 0xc
	void *_session;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *deviceGUID;	// G=0x318a027d; 
- (id)init;	// 0x318a0155
- (BOOL)_getHardwareInfo:(FairPlayHWInfo_ *)info;	// 0x318a0f29
- (id)_hexStringForData:(id)data;	// 0x318a0f99
- (id)beginNegotiation;	// 0x318a02fd
- (id)continueNegotationWithData:(id)data isComplete:(BOOL *)complete;	// 0x318a037d
- (void)dealloc;	// 0x318a0205
// declared property getter: - (id)deviceGUID;	// 0x318a027d
- (void)endMescalSession;	// 0x318a05c9
- (void)endSecuritySession;	// 0x318a044d
- (id)processSignedResponseData:(id)data withSignature:(id)signature;	// 0x318a0dd5
- (id)securityInfoForURL:(id)url;	// 0x318a0491
- (BOOL)setupMescalWithURL:(id)url certificateURL:(id)url2 requestsToSign:(id)sign userAgent:(id)agent;	// 0x318a05fd
- (BOOL)shouldSignRequestAction:(id)action;	// 0x318a0f05
- (id)signatureForData:(id)data;	// 0x318a0e7d
@end

