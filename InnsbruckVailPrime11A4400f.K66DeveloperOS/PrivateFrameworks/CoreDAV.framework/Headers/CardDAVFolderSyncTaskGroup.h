/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVContainerSyncTaskGroup.h"


@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
	BOOL _isInitialSync;	// 137 = 0x89
}
@property(assign) BOOL isInitialSync;	// G=0x3047e055; S=0x3047e06d; @synthesize=_isInitialSync
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager appSpecificDataItemClass:(Class)aClass;	// 0x3047df49
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager appSpecificDataItemClass:(Class)aClass;	// 0x3047dee5
- (Class)bulkChangeTaskClass;	// 0x3047e039
- (id)copyGetTaskWithURL:(id)url;	// 0x3047dff5
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x3047df99
- (id)dataContentType;	// 0x3047e02d
// declared property getter: - (BOOL)isInitialSync;	// 0x3047e055
// declared property setter: - (void)setIsInitialSync:(BOOL)sync;	// 0x3047e06d
@end
