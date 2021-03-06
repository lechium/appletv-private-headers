/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library


@interface GEODirectionsProvider : NSObject {
	BOOL _isLoading;	// 4 = 0x4
	int _requestType;	// 8 = 0x8
	id _finishedHandler;	// 12 = 0xc
	id _errorHandler;	// 16 = 0x10
}
@property(copy, nonatomic) id errorHandler;	// G=0x3670e931; S=0x3670e941; @synthesize=_errorHandler
@property(copy, nonatomic) id finishedHandler;	// G=0x3670e8fd; S=0x3670e90d; @synthesize=_finishedHandler
@property(assign, nonatomic) BOOL isLoading;	// G=0x3670e8dd; S=0x3670e8ed; @synthesize=_isLoading
+ (id)providerHostname;	// 0x3670e7bd
+ (unsigned short)providerID;	// 0x3670e7b9
- (void)cancelProviderRequest;	// 0x3670e7c5
- (void)cancelRequest;	// 0x3670e7a9
- (void)dealloc;	// 0x3670e655
// declared property getter: - (id)errorHandler;	// 0x3670e931
// declared property getter: - (id)finishedHandler;	// 0x3670e8fd
// declared property getter: - (BOOL)isLoading;	// 0x3670e8dd
- (void)providerDidCancel;	// 0x3670e8c9
- (void)providerReceivedErrorCode:(int)code;	// 0x3670e829
- (void)providerReceivedResponse:(id)response;	// 0x3670e7c9
- (void)requestCompleted;	// 0x3670e6ad
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x3670e941
// declared property setter: - (void)setFinishedHandler:(id)handler;	// 0x3670e90d
// declared property setter: - (void)setIsLoading:(BOOL)loading;	// 0x3670e8ed
- (void)startProviderWithRequest:(id)request;	// 0x3670e7c1
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x3670e6f5
@end

