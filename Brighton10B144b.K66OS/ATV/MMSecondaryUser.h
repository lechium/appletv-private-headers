/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMCredential.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MMSecondaryUser : XXUnknownSuperclass <MMCredential> {
	NSString *_name;	// 4 = 0x4
	NSString *_password;	// 8 = 0x8
	NSString *_owner;	// 12 = 0xc
	NSString *_app_id;	// 16 = 0x10
	NSString *_user_agent;	// 20 = 0x14
}
@property(readonly, retain) NSString *name;	// G=0x84a48d; converted property
@property(readonly, retain) NSString *owner;	// G=0x84a4ad; converted property
@property(readonly, retain) NSString *password;	// G=0x84a49d; converted property
+ (id)secondaryUserWithName:(id)name password:(id)password owner:(id)owner applicationID:(id)anId;	// 0x84a2c9
- (id)initWithName:(id)name password:(id)password owner:(id)owner applicationID:(id)anId;	// 0x84a315
- (id)applicationID;	// 0x84a4bd
- (void)dealloc;	// 0x84a3cd
// converted property getter: - (id)name;	// 0x84a48d
// converted property getter: - (id)owner;	// 0x84a4ad
// converted property getter: - (id)password;	// 0x84a49d
@end

