/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation {
	id _badgeValue;	// 60 = 0x3c
	NSString *_bundleIdentifier;	// 64 = 0x40
}
@property(retain) id badgeValue;	// G=0x30936031; S=0x30936045; @synthesize=_badgeValue
@property(retain) NSString *bundleIdentifier;	// G=0x30936055; S=0x30936069; @synthesize=_bundleIdentifier
// declared property getter: - (id)badgeValue;	// 0x30936031
// declared property getter: - (id)bundleIdentifier;	// 0x30936055
- (void)dealloc;	// 0x30935e39
- (void)run;	// 0x30935e9d
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x30936045
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x30936069
- (id)uniqueKey;	// 0x30936025
@end
