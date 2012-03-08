/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class ASProtocolCapabilities;

@interface ASProtocol : NSObject {
	ASProtocolCapabilities *_capabilities;	// 4 = 0x4
}
- (id)init;	// 0x31db9e85
- (id)initWithCachedVersion:(id)cachedVersion;	// 0x31dba155
- (id)initWithVersion:(id)version;	// 0x31dba141
- (id)_initWithVersion:(id)version capabilitiesVersion:(id)version2;	// 0x31db9ff5
- (id)_requestLinePrefixWithTask:(id)task;	// 0x31dba239
- (void)_setCapabilitiesVersion:(id)version;	// 0x31db9f7d
- (id)_usernameOnlyPortionOfUserString:(id)userString;	// 0x31dba1bd
- (id)addressBookConstraintsPath;	// 0x31dba561
- (BOOL)allAttachmentsAreBase64ed;	// 0x31dba465
- (BOOL)allowsReminderOnCompletedTasks;	// 0x31dba471
- (id)calendarConstraintsPath;	// 0x31dba541
- (void)dealloc;	// 0x31dba169
- (BOOL)fetchAttachmentsWithItemOperations;	// 0x31dba461
- (BOOL)headerNeedsPolicyKey;	// 0x31dba431
- (BOOL)headerNeedsProtocolVersion;	// 0x31dba435
- (BOOL)headerNeedsUserAgent;	// 0x31dba42d
- (id)protocolVersion;	// 0x31dba1b9
- (id)requestURLStringWithTask:(id)task;	// 0x31dba325
- (BOOL)requiresExplicitlyFalseGetChanges;	// 0x31dba44d
- (BOOL)sendAttendeeRole;	// 0x31dba441
- (BOOL)sendCalendarInfoInRecurrence;	// 0x31dba469
- (BOOL)sendEmailInWBXML;	// 0x31dba455
- (BOOL)serverCreatesEventChangesForInvitations;	// 0x31dba46d
- (BOOL)serverUpdatesAttendeeStatusOnEvents;	// 0x31dba51d
- (BOOL)shouldSendClassForFolderItemsSync;	// 0x31dba445
- (BOOL)shouldSendFullContactInfo;	// 0x31dba449
- (BOOL)shouldUseWBXMLProvisioning;	// 0x31dba439
- (int)supportsEmailFlagging;	// 0x31dba4a5
- (BOOL)supportsItemOperationsCommand;	// 0x31dba4f9
- (int)supportsMailboxSearch;	// 0x31dba475
- (BOOL)supportsSettingsCommand;	// 0x31dba4d5
- (BOOL)useBooleanFolderItemsSyncDeletesAsMoves;	// 0x31dba451
- (BOOL)useSmartMailTasks;	// 0x31dba45d
- (BOOL)usesAirSyncBaseNamespace;	// 0x31dba43d
- (BOOL)usesTopLevelStatusCodes;	// 0x31dba459
- (BOOL)versionChangeRequiresAccountUpgrade:(id)upgrade;	// 0x31dba1b5
@end

