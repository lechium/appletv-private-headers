/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSDictionary;

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding> {
@private
	NSDictionary *_errors;	// 4 = 0x4
	NSArray *_redeemedCodes;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *failedCodes;	// G=0x34e85ba1; 
@property(copy, nonatomic) NSArray *redeemedCodes;	// G=0x34e85bc1; S=0x34e85d65; @synthesize=_redeemedCodes
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34e85c3d
- (id)copyXPCEncoding;	// 0x34e85d11
- (void)dealloc;	// 0x34e85af5
- (id)errorForCode:(id)code;	// 0x34e85b59
// declared property getter: - (id)failedCodes;	// 0x34e85ba1
// declared property getter: - (id)redeemedCodes;	// 0x34e85bc1
- (void)setFailedCodes:(id)codes;	// 0x34e85bf9
// declared property setter: - (void)setRedeemedCodes:(id)codes;	// 0x34e85d65
@end

