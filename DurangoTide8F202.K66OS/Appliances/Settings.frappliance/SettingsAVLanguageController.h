/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface SettingsAVLanguageController : XXUnknownSuperclass {
	int _type;	// 64 = 0x40
	NSArray *_menuItemKeys;	// 68 = 0x44
}
+ (id)audioLanguageController;	// 0x141cd
+ (id)subtitleLanguageController;	// 0x14191
- (id)initWithType:(int)type;	// 0x13f45
- (void)dealloc;	// 0x13efd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x13e41
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x14209
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x13edd
@end

