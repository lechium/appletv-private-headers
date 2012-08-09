/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCopying.h"
#import "ISDataProvider.h"
#import "iTunesStore-Structs.h"


@interface ISPropertyListProvider : ISDataProvider <NSCopying> {
	BOOL _shouldPostFooterSectionChanged;	// 44 = 0x2c
	BOOL _shouldProcessAccount;	// 45 = 0x2d
	BOOL _shouldProcessAuthenticationDialogs;	// 46 = 0x2e
	BOOL _shouldProcessDialogs;	// 47 = 0x2f
	BOOL _shouldProcessProtocol;	// 48 = 0x30
	BOOL _shouldTriggerDownloads;	// 49 = 0x31
}
@property(assign) BOOL shouldPostFooterSectionChanged;	// G=0x30770841; S=0x30770859; @synthesize=_shouldPostFooterSectionChanged
@property(assign) BOOL shouldProcessAccount;	// G=0x30770871; S=0x30770889; @synthesize=_shouldProcessAccount
@property(assign) BOOL shouldProcessAuthenticationDialogs;	// G=0x307708a1; S=0x307708b9; @synthesize=_shouldProcessAuthenticationDialogs
@property(assign) BOOL shouldProcessDialogs;	// G=0x307708d1; S=0x307708e9; @synthesize=_shouldProcessDialogs
@property(assign) BOOL shouldProcessProtocol;	// G=0x30770901; S=0x30770919; @synthesize=_shouldProcessProtocol
@property(assign) BOOL shouldTriggerDownloads;	// G=0x30770931; S=0x30770949; @synthesize=_shouldTriggerDownloads
- (id)init;	// 0x3076f765
- (void)_checkDownloadQueues;	// 0x3076ff2d
- (void)_checkInAppPurchaseQueueForAction:(id)action;	// 0x3076ff91
- (void)_performActionsForResponse:(id)response;	// 0x307700a5
- (BOOL)_processFailureTypeFromPropertyList:(id)propertyList error:(id *)error;	// 0x30770715
- (void)_selectFooterSection:(id)section;	// 0x307705d5
- (id)copyWithZone:(NSZone *)zone;	// 0x3076f7e9
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x3076fe3d
- (BOOL)processDialogFromPropertyList:(id)propertyList returningError:(id *)error;	// 0x3076f8dd
- (BOOL)processPropertyList:(id)list returningError:(id *)error;	// 0x3076fbd1
// declared property setter: - (void)setShouldPostFooterSectionChanged:(BOOL)postFooterSectionChanged;	// 0x30770859
// declared property setter: - (void)setShouldProcessAccount:(BOOL)processAccount;	// 0x30770889
// declared property setter: - (void)setShouldProcessAuthenticationDialogs:(BOOL)processAuthenticationDialogs;	// 0x307708b9
// declared property setter: - (void)setShouldProcessDialogs:(BOOL)processDialogs;	// 0x307708e9
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x30770919
// declared property setter: - (void)setShouldTriggerDownloads:(BOOL)triggerDownloads;	// 0x30770949
// declared property getter: - (BOOL)shouldPostFooterSectionChanged;	// 0x30770841
// declared property getter: - (BOOL)shouldProcessAccount;	// 0x30770871
// declared property getter: - (BOOL)shouldProcessAuthenticationDialogs;	// 0x307708a1
// declared property getter: - (BOOL)shouldProcessDialogs;	// 0x307708d1
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x30770901
// declared property getter: - (BOOL)shouldTriggerDownloads;	// 0x30770931
@end
