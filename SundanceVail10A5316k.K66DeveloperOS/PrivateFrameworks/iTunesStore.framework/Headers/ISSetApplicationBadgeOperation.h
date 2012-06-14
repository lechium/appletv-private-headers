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
@property(retain) id badgeValue;	// G=0x3353a629; S=0x3353a63d; @synthesize=_badgeValue
@property(retain) NSString *bundleIdentifier;	// G=0x3353a64d; S=0x3353a661; @synthesize=_bundleIdentifier
// declared property getter: - (id)badgeValue;	// 0x3353a629
// declared property getter: - (id)bundleIdentifier;	// 0x3353a64d
- (void)dealloc;	// 0x3353a431
- (void)run;	// 0x3353a495
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x3353a63d
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x3353a661
- (id)uniqueKey;	// 0x3353a61d
@end
