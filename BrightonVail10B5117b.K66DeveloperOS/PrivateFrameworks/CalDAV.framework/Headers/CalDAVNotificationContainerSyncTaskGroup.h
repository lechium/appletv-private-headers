/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerSyncTaskGroup.h> // Unknown library

@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
	NSSet *_notificationTypeNamesToFetch;	// 140 = 0x8c
}
@property(retain) NSSet *notificationTypeNamesToFetch;	// G=0x3374633d; S=0x33746351; @synthesize=_notificationTypeNamesToFetch
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x33746135
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x337462c5
- (id)copyGetTaskWithURL:(id)url;	// 0x3374622d
- (void)dealloc;	// 0x337461e1
// declared property getter: - (id)notificationTypeNamesToFetch;	// 0x3374633d
// declared property setter: - (void)setNotificationTypeNamesToFetch:(id)fetch;	// 0x33746351
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x33746265
@end

