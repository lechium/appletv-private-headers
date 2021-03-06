/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKParticipant.h"


@interface EKOrganizer : EKParticipant {
}
@property(assign, getter=isCurrentUser) BOOL currentUser;	// G=0x35b1fdfd; S=0x35b9a655; converted property
+ (id)organizerWithName:(id)name emailAddress:(id)address address:(id)address3 isCurrentUser:(BOOL)user;	// 0x35b9a329
- (id)init;	// 0x35b9a375
- (id)initWithName:(id)name emailAddress:(id)address address:(id)address3 isCurrentUser:(BOOL)user;	// 0x35b9a3e1
- (id)copyWithZone:(NSZone *)zone;	// 0x35b9a4a1
- (id)description;	// 0x35b9a575
// converted property getter: - (BOOL)isCurrentUser;	// 0x35b1fdfd
- (id)lazyLoadRelationForKey:(id)key;	// 0x35b23b7d
- (id)owner;	// 0x35b9a621
// converted property setter: - (void)setCurrentUser:(BOOL)user;	// 0x35b9a655
@end

