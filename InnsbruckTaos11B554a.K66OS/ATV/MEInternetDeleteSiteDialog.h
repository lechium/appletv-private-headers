/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BROptionDialog.h"

@class ATVAddSiteEntry;

__attribute__((visibility("hidden")))
@interface MEInternetDeleteSiteDialog : BROptionDialog {
	ATVAddSiteEntry *_siteEntry;	// 168 = 0xa8
}
@property(retain) ATVAddSiteEntry *siteEntry;	// G=0x188f39; S=0x188f4d; @synthesize=_siteEntry
- (id)initWithSiteInfo:(id)siteInfo;	// 0x188cfd
- (void).cxx_destruct;	// 0x188f5d
- (void)_deleteSite;	// 0x188ebd
- (void)_warningForActionResponse:(id)actionResponse;	// 0x188e55
// declared property setter: - (void)setSiteEntry:(id)entry;	// 0x188f4d
// declared property getter: - (id)siteEntry;	// 0x188f39
@end

