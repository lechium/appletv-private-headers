/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MCProfileConnectionObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface SettingsProfileViewController : XXUnknownSuperclass <MCProfileConnectionObserver> {
	NSArray *_installedProfiles;	// 68 = 0x44
}
@property(copy, nonatomic) NSArray *installedProfiles;	// G=0xd70ad; S=0xd70bd; @synthesize=_installedProfiles
- (id)init;	// 0xd690d
- (void).cxx_destruct;	// 0xd70e1
- (void)_addProfile;	// 0xd6f11
- (void)_inspectProfile:(id)profile;	// 0xd6e81
- (void)dealloc;	// 0xd6ab9
// declared property getter: - (id)installedProfiles;	// 0xd70ad
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xd6dd1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xd6c85
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xd6c1d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xd6c51
- (long)numberOfSectionsInList:(id)list;	// 0xd6bed
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)profileConnection userInfo:(id)info;	// 0xd6b59
// declared property setter: - (void)setInstalledProfiles:(id)profiles;	// 0xd70bd
@end

