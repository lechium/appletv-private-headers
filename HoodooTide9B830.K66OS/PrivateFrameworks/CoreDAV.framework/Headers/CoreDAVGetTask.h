/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask {
	id _appSpecificDataItemResult;	// 132 = 0x84
	BOOL _forceNoCache;	// 136 = 0x88
}
@property(retain) id appSpecificDataItemResult;	// G=0x35dd534d; S=0x35dd5361; @synthesize=_appSpecificDataItemResult
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(assign) BOOL forceNoCache;	// G=0x35dd5385; S=0x35dd5395; @synthesize=_forceNoCache
// declared property getter: - (id)appSpecificDataItemResult;	// 0x35dd534d
- (unsigned)cachePolicy;	// 0x35dd5175
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x35dd519d
- (void)dealloc;	// 0x35dd4fd1
- (id)description;	// 0x35dd501d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x35dd51d1
// declared property getter: - (BOOL)forceNoCache;	// 0x35dd5385
- (id)httpMethod;	// 0x35dd5169
- (id)requestBody;	// 0x35dd5199
// declared property setter: - (void)setAppSpecificDataItemResult:(id)result;	// 0x35dd5361
// declared property setter: - (void)setForceNoCache:(BOOL)cache;	// 0x35dd5395
@end
