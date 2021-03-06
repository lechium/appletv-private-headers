/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class MicroPaymentQueueResponse, MicroPaymentQueueRequest, NSString;

__attribute__((visibility("hidden")))
@interface LoadMicroPaymentQueueOperation : ISOperation {
@private
	int _expectedCount;	// 60 = 0x3c
	NSString *_queueCountURLBagKey;	// 64 = 0x40
	NSString *_queuePaymentsURLBagKey;	// 68 = 0x44
	MicroPaymentQueueRequest *_request;	// 72 = 0x48
	MicroPaymentQueueResponse *_response;	// 76 = 0x4c
}
@property(assign) int expectedCount;	// G=0x331d93f5; S=0x331d9405; @synthesize=_expectedCount
@property(retain) NSString *queueCountURLBagKey;	// G=0x331d9415; S=0x331d9429; @synthesize=_queueCountURLBagKey
@property(retain) NSString *queuePaymentsURLBagKey;	// G=0x331d944d; S=0x331d9461; @synthesize=_queuePaymentsURLBagKey
@property(copy) MicroPaymentQueueRequest *request;	// G=0x331d9485; S=0x331d9499; @synthesize=_request
@property(retain) MicroPaymentQueueResponse *response;	// G=0x331d94bd; S=0x331d94d1; @synthesize=_response
- (BOOL)_getQueueCount:(int *)count error:(id *)error;	// 0x331d91bd
- (BOOL)_loadPaymentsWithExpectedCount:(int)expectedCount error:(id *)error;	// 0x331d92e5
- (void)dealloc;	// 0x331d903d
// declared property getter: - (int)expectedCount;	// 0x331d93f5
// declared property getter: - (id)queueCountURLBagKey;	// 0x331d9415
// declared property getter: - (id)queuePaymentsURLBagKey;	// 0x331d944d
// declared property getter: - (id)request;	// 0x331d9485
// declared property getter: - (id)response;	// 0x331d94bd
- (void)run;	// 0x331d90c5
// declared property setter: - (void)setExpectedCount:(int)count;	// 0x331d9405
// declared property setter: - (void)setQueueCountURLBagKey:(id)key;	// 0x331d9429
// declared property setter: - (void)setQueuePaymentsURLBagKey:(id)key;	// 0x331d9461
// declared property setter: - (void)setRequest:(id)request;	// 0x331d9499
// declared property setter: - (void)setResponse:(id)response;	// 0x331d94d1
@end

