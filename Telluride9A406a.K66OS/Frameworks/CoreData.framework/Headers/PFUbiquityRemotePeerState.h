/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObject.h"
#import "CoreData-Structs.h"

@class NSNumber, PFUbiquityPeer, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityRemotePeerState : NSManagedObject {
}
@property(retain, nonatomic) PFUbiquityPeer *peer;	// @dynamic
@property(retain, nonatomic) NSString *peerID;	// @dynamic
@property(retain, nonatomic) NSString *storeName;	// @dynamic
@property(retain, nonatomic) NSNumber *transactionNumber;	// @dynamic
+ (id)remotePeerStatesMatchingStoreName:(id)name andPeerID:(id)anId inManagedObjectContext:(id)managedObjectContext;	// 0x34882f75
+ (id)remotePeerStatesMatchingStoreName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x34882e9d
- (id)initWithStoreName:(id)storeName andRemotePeerID:(id)anId insertIntoManagedObjectContext:(id)context;	// 0x34882df5
@end

