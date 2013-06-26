/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSItemOfferDeviceError, SSPurchase, NSDictionary, NSError;

@interface SSPurchaseValidationResponse : NSObject {
	SSItemOfferDeviceError *_deviceError;	// 4 = 0x4
	NSError *_genericError;	// 8 = 0x8
	SSPurchase *_failedPurchase;	// 12 = 0xc
	NSDictionary *_mismatchedSoftwareCapabilities;	// 16 = 0x10
	BOOL _valid;	// 20 = 0x14
}
@property(readonly, assign) SSItemOfferDeviceError *deviceError;	// G=0x354d3d1d; @synthesize=_deviceError
@property(readonly, assign) SSPurchase *failedPurchase;	// G=0x354d3d31; @synthesize=_failedPurchase
@property(readonly, assign) NSError *genericError;	// G=0x354d3d45; @synthesize=_genericError
@property(readonly, assign) NSDictionary *mismatchedSoftwareCapabilities;	// G=0x354d3d59; @synthesize=_mismatchedSoftwareCapabilities
@property(readonly, assign, getter=isValid) BOOL valid;	// G=0x354d3d6d; @synthesize=_valid
- (void)_setDeviceError:(id)error;	// 0x354d3bfd
- (void)_setFailedPurchase:(id)purchase;	// 0x354d3c41
- (void)_setGenericError:(id)error;	// 0x354d3c85
- (void)_setMismatchedSoftwareCapabilities:(id)capabilities;	// 0x354d3cc9
- (void)_setValid:(BOOL)valid;	// 0x354d3d0d
- (void)dealloc;	// 0x354d3b71
// declared property getter: - (id)deviceError;	// 0x354d3d1d
// declared property getter: - (id)failedPurchase;	// 0x354d3d31
// declared property getter: - (id)genericError;	// 0x354d3d45
// declared property getter: - (BOOL)isValid;	// 0x354d3d6d
// declared property getter: - (id)mismatchedSoftwareCapabilities;	// 0x354d3d59
@end
