/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MCProfileConnectionObserver.h"
#import "BRViewController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SettingsProfileViewController : BRViewController <MCProfileConnectionObserver> {
	NSArray *_installedProfiles;	// 104 = 0x68
}
@property(copy, nonatomic) NSArray *installedProfiles;	// G=0xbe381; S=0xbe395; @synthesize=_installedProfiles
- (id)init;	// 0xbdbcd
- (void).cxx_destruct;	// 0xbe3a5
- (void)_addProfile;	// 0xbe1e5
- (void)_inspectProfile:(id)profile;	// 0xbe155
- (void)dealloc;	// 0xbdd79
// declared property getter: - (id)installedProfiles;	// 0xbe381
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xbe099
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xbdf4d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xbdee9
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xbdf15
- (long)numberOfSectionsInList:(id)list;	// 0xbdeb9
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)profileConnection userInfo:(id)info;	// 0xbde19
// declared property setter: - (void)setInstalledProfiles:(id)profiles;	// 0xbe395
@end
