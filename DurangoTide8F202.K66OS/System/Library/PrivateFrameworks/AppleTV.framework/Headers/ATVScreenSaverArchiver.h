/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


@interface ATVScreenSaverArchiver : NSObject {
}
+ (void)_dataClientConnectionHandler:(id)handler;	// 0x336ef5bd
+ (id)_iTunesServerIDFromArchivedServerID:(id)archivedServerID;	// 0x336ee709
+ (id)_parentalControlVerificationForArchive:(id)archive;	// 0x336ee829
+ (void)_postScreenSaverDataReadyNotificationForCollection:(id)collection;	// 0x336eeb71
+ (id)_providerForCollection:(id)collection;	// 0x336ee94d
+ (BOOL)_queryScreenSaverDataForArchive:(id)archive useDefaultServer:(BOOL)server connect:(BOOL)connect;	// 0x336ef369
+ (id)archiveForCollection:(id)collection;	// 0x336eefe5
+ (void)requestScreenSaverFromArchive:(id)archive;	// 0x336eefcd
+ (void)requestScreenSaverFromArchive:(id)archive connect:(BOOL)connect;	// 0x336eed9d
+ (id)screenSaverCollectionIDFromArchive:(id)archive;	// 0x336eeced
+ (id)screenSaverCollectionNameFromArchive:(id)archive;	// 0x336eed45
+ (id)screenSaverServerIDFromArchive:(id)archive;	// 0x336eec75
+ (id)screenSaverTypeFromArchive:(id)archive;	// 0x336eecb5
@end

