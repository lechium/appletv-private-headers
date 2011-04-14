/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {
	NSString *_previousSyncToken;	// 112 = 0x70
	NSString *_newSyncToken;	// 116 = 0x74
	BOOL _moreToSync;	// 120 = 0x78
	BOOL _wasInvalidSyncToken;	// 121 = 0x79
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(readonly, assign) BOOL moreToSync;	// G=0x317c0465; @synthesize=_moreToSync
@property(readonly, assign) NSString *newSyncToken;	// G=0x317c0475; @synthesize=_newSyncToken
@property(readonly, assign) BOOL wasInvalidSyncToken;	// G=0x317c0455; @synthesize=_wasInvalidSyncToken
- (id)initWithPropertiesToFind:(id)find atURL:(id)url withDepth:(int)depth previousSyncToken:(id)token;	// 0x317c062d
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x317c0485
- (void)dealloc;	// 0x317c05e5
- (id)description;	// 0x317c0539
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x317c06bd
- (id)httpMethod;	// 0x317c0449
// declared property getter: - (BOOL)moreToSync;	// 0x317c0465
// declared property getter: - (id)newSyncToken;	// 0x317c0475
- (id)notFoundHREFs;	// 0x317c08cd
- (id)requestBody;	// 0x317c0a45
// declared property getter: - (BOOL)wasInvalidSyncToken;	// 0x317c0455
@end

