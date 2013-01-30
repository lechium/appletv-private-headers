/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"

@class NSDictionary, NSArray;

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding> {
	NSDictionary *_errors;	// 4 = 0x4
	NSArray *_redeemedCodes;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *failedCodes;	// G=0x356dcf49; 
@property(copy, nonatomic) NSArray *redeemedCodes;	// G=0x356dcf69; S=0x356dd265; @synthesize=_redeemedCodes
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x356dcfe5
- (id)copyXPCEncoding;	// 0x356dd211
- (void)dealloc;	// 0x356dce9d
- (id)errorForCode:(id)code;	// 0x356dcf01
// declared property getter: - (id)failedCodes;	// 0x356dcf49
// declared property getter: - (id)redeemedCodes;	// 0x356dcf69
- (void)setFailedCodes:(id)codes;	// 0x356dcfa1
// declared property setter: - (void)setRedeemedCodes:(id)codes;	// 0x356dd265
@end
