/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPostOrPutTask.h"

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {
	NSString *_nextETag;	// 168 = 0xa8
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *nextETag;	// G=0x33a472f5; S=0x33a47309; @synthesize=_nextETag
- (void)dealloc;	// 0x33a47065
- (id)description;	// 0x33a470b1
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33a47185
- (id)httpMethod;	// 0x33a47179
// declared property getter: - (id)nextETag;	// 0x33a472f5
// declared property setter: - (void)setNextETag:(id)tag;	// 0x33a47309
@end

