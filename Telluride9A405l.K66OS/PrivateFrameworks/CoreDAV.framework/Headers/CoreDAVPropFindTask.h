/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@protocol CoreDAVTaskDelegate;

@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask {
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
- (id)initWithPropertiesToFind:(id)find atURL:(id)url withDepth:(int)depth;	// 0x30fee31d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x30fee631
- (id)httpMethod;	// 0x30fee39d
- (id)requestBody;	// 0x30fee3a9
@end

