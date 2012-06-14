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
@private
	BOOL _hasValidMescalSession;	// 4 = 0x4
	void *_hwInfo;	// 8 = 0x8
	NSArray *_requestsToSign;	// 12 = 0xc
	void *_session;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *deviceGUID;	// G=0x308c8135; 
- (id)init;	// 0x308c800d
- (BOOL)_getHardwareInfo:(FairPlayHWInfo_ *)info;	// 0x308c8d61
- (id)_hexStringForData:(id)data;	// 0x308c8dd1
- (id)beginNegotiation;	// 0x308c81b5
- (id)continueNegotationWithData:(id)data isComplete:(BOOL *)complete;	// 0x308c8235
- (void)dealloc;	// 0x308c80bd
// declared property getter: - (id)deviceGUID;	// 0x308c8135
- (void)endMescalSession;	// 0x308c8481
- (void)endSecuritySession;	// 0x308c8305
- (id)processSignedResponseData:(id)data withSignature:(id)signature;	// 0x308c8c0d
- (id)securityInfoForURL:(id)url;	// 0x308c8349
- (BOOL)setupMescalWithURL:(id)url certificateURL:(id)url2 requestsToSign:(id)sign userAgent:(id)agent;	// 0x308c84b5
- (BOOL)shouldSignRequestAction:(id)action;	// 0x308c8d3d
- (id)signatureForData:(id)data;	// 0x308c8cb5
@end
