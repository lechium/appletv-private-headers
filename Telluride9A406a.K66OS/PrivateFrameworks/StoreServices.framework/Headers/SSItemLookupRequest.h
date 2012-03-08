/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class NSMutableDictionary;
@protocol SSItemLookupRequestDelegate;

@interface SSItemLookupRequest : SSRequest {
@private
	NSMutableDictionary *_parameters;	// 36 = 0x24
}
@property(assign, nonatomic) id<SSItemLookupRequestDelegate> delegate;	// @dynamic
- (id)init;	// 0x3154e8d5
- (id)_convertedValueForValue:(id)value;	// 0x3154f08d
- (id)_copyItemsFromResponse:(id)response userInfo:(id)info;	// 0x3154ecbd
- (id)_copyStringParameters;	// 0x3154eef9
- (id)_errorForStatusCode:(int)statusCode;	// 0x3154f2dd
- (void)_sendItemsToDelegate:(id)delegate;	// 0x3154f325
- (void)dealloc;	// 0x3154e91d
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x3154eac1
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x3154eb85
- (void)setValue:(id)value forParameter:(id)parameter;	// 0x3154e969
- (id)valueForParameter:(id)parameter;	// 0x3154eaa1
@end

