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
@property(copy, nonatomic) id errorHandler;	// G=0x3453148d; S=0x345314a1; @synthesize=_errorHandler
@property(copy, nonatomic) id finishedHandler;	// G=0x34531469; S=0x3453147d; @synthesize=_finishedHandler
@property(assign, nonatomic) BOOL isLoading;	// G=0x34531449; S=0x34531459; @synthesize=_isLoading
+ (unsigned short)providerID;	// 0x34531345
- (void)cancelProviderRequest;	// 0x3453134d
- (void)cancelRequest;	// 0x34531335
- (void)dealloc;	// 0x34531201
// declared property getter: - (id)errorHandler;	// 0x3453148d
// declared property getter: - (id)finishedHandler;	// 0x34531469
// declared property getter: - (BOOL)isLoading;	// 0x34531449
- (void)providerDidCancel;	// 0x34531435
- (void)providerReceivedErrorCode:(int)code;	// 0x34531395
- (void)providerReceivedResponse:(id)response;	// 0x34531351
- (void)requestCompleted;	// 0x34531259
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x345314a1
// declared property setter: - (void)setFinishedHandler:(id)handler;	// 0x3453147d
// declared property setter: - (void)setIsLoading:(BOOL)loading;	// 0x34531459
- (void)startProviderWithRequest:(id)request;	// 0x34531349
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x345312a1
@end
