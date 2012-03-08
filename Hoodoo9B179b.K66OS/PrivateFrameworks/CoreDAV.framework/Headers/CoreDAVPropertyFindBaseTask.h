/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {
	CoreDAVMultiStatusItem *_multiStatus;	// 132 = 0x84
	NSSet *_propertiesToFind;	// 136 = 0x88
}
@property(retain) CoreDAVMultiStatusItem *multiStatus;	// G=0x30cc345d; S=0x30cc3471; @synthesize=_multiStatus
@property(retain) NSSet *propertiesToFind;	// G=0x30cc3425; S=0x30cc3439; @synthesize=_propertiesToFind
- (id)initWithPropertiesToFind:(id)find atURL:(id)url;	// 0x30cc2d29
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x30cc2f89
- (void)dealloc;	// 0x30cc2e45
- (id)description;	// 0x30cc2ea5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x30cc3371
- (id)getTotalFailureError;	// 0x30cc31d5
// declared property getter: - (id)multiStatus;	// 0x30cc345d
- (id)parseHints;	// 0x30cc2f79
// declared property getter: - (id)propertiesToFind;	// 0x30cc3425
// declared property setter: - (void)setMultiStatus:(id)status;	// 0x30cc3471
// declared property setter: - (void)setPropertiesToFind:(id)find;	// 0x30cc3439
- (id)successfulValueForNameSpace:(id)nameSpace elementName:(id)name;	// 0x30cc3061
- (void)updateMultiStatusFromResponse;	// 0x30cc3141
@end

