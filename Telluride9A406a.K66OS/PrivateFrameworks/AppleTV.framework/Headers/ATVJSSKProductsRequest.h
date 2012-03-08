/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library
#import "SKProductsRequestDelegate.h"

@class ATVJSContext, SKProductsRequest;

__attribute__((visibility("hidden")))
@interface ATVJSSKProductsRequest : NSObject <SKProductsRequestDelegate> {
@private
	SKProductsRequest *_skRequest;	// 4 = 0x4
	ATVJSContext *_atvContext;	// 8 = 0x8
	OpaqueJSValue *_object;	// 12 = 0xc
	BOOL _isJSObjectProtected;	// 16 = 0x10
}
@property(retain, nonatomic) ATVJSContext *atvContext;	// G=0x3319e285; S=0x3319e295; @synthesize=_atvContext
@property(assign, nonatomic) BOOL isJSObjectProtected;	// G=0x3319e2d9; S=0x3319e2e9; @synthesize=_isJSObjectProtected
@property(assign, nonatomic) OpaqueJSValue *object;	// G=0x3319e2b9; S=0x3319e2c9; @synthesize=_object
@property(retain, nonatomic) SKProductsRequest *skRequest;	// G=0x3319e251; S=0x3319e261; @synthesize=_skRequest
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x3319d9c5
// declared property getter: - (id)atvContext;	// 0x3319e285
- (void)dealloc;	// 0x3319ded9
// declared property getter: - (BOOL)isJSObjectProtected;	// 0x3319e2d9
// declared property getter: - (OpaqueJSValue *)object;	// 0x3319e2b9
- (void)productsRequest:(id)request didReceiveResponse:(id)response;	// 0x3319df55
- (void)request:(id)request didFailWithError:(id)error;	// 0x3319e12d
- (void)requestDidFinish:(id)request;	// 0x3319e045
// declared property setter: - (void)setAtvContext:(id)context;	// 0x3319e295
// declared property setter: - (void)setIsJSObjectProtected:(BOOL)aProtected;	// 0x3319e2e9
// declared property setter: - (void)setObject:(OpaqueJSValue *)object;	// 0x3319e2c9
// declared property setter: - (void)setSkRequest:(id)request;	// 0x3319e261
// declared property getter: - (id)skRequest;	// 0x3319e251
@end

