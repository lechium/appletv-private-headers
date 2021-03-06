/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BRApplianceCategory : NSObject {
@private
	NSMutableDictionary *_info;	// 4 = 0x4
}
@property(retain) id action;	// G=0x328cef59; S=0x328cef85; converted property
@property(retain) id identifier;	// G=0x328a9ced; S=0x328a93a9; converted property
@property(assign) BOOL isDefaultCategory;	// G=0x328a9e71; S=0x328a9531; converted property
@property(assign) BOOL isStoreCategory;	// G=0x328ac9e1; S=0x328a941d; converted property
@property(assign) BOOL isStoreDependent;	// G=0x328cee49; S=0x328cee85; converted property
@property(retain) id name;	// G=0x328a9dd5; S=0x328a937d; converted property
@property(assign) float preferredOrder;	// G=0x328a9d9d; S=0x328a93d5; converted property
@property(assign) BOOL shouldDisplayOnStartup;	// G=0x328cee0d; S=0x328a9469; converted property
@property(retain) id textEntryHistoryDisplayBehaviors;	// G=0x328cec9d; S=0x328cecc9; converted property
@property(retain) id textEntryHistoryDisplayClients;	// G=0x328cecf9; S=0x328ced25; converted property
@property(retain) id textEntryHistoryStorageBehavior;	// G=0x328ced55; S=0x328ced81; converted property
@property(retain) id textEntryHistoryStorageClient;	// G=0x328cedb1; S=0x328ceddd; converted property
+ (id)categoryWithName:(id)name identifier:(id)identifier preferredOrder:(float)order;	// 0x328a92a5
- (id)init;	// 0x328a9321
// converted property getter: - (id)action;	// 0x328cef59
- (void)dealloc;	// 0x328aae3d
- (id)description;	// 0x328cefb1
- (BOOL)followsStoreCateogry;	// 0x328ceed1
// converted property getter: - (id)identifier;	// 0x328a9ced
// converted property getter: - (BOOL)isDefaultCategory;	// 0x328a9e71
// converted property getter: - (BOOL)isStoreCategory;	// 0x328ac9e1
// converted property getter: - (BOOL)isStoreDependent;	// 0x328cee49
// converted property getter: - (id)name;	// 0x328a9dd5
// converted property getter: - (float)preferredOrder;	// 0x328a9d9d
// converted property setter: - (void)setAction:(id)action;	// 0x328cef85
- (void)setFollowsStoreCategory:(BOOL)category;	// 0x328cef0d
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x328a93a9
// converted property setter: - (void)setIsDefaultCategory:(BOOL)category;	// 0x328a9531
// converted property setter: - (void)setIsStoreCategory:(BOOL)category;	// 0x328a941d
// converted property setter: - (void)setIsStoreDependent:(BOOL)dependent;	// 0x328cee85
// converted property setter: - (void)setName:(id)name;	// 0x328a937d
// converted property setter: - (void)setPreferredOrder:(float)order;	// 0x328a93d5
// converted property setter: - (void)setShouldDisplayOnStartup:(BOOL)displayOnStartup;	// 0x328a9469
// converted property setter: - (void)setTextEntryHistoryDisplayBehaviors:(id)behaviors;	// 0x328cecc9
// converted property setter: - (void)setTextEntryHistoryDisplayClients:(id)clients;	// 0x328ced25
// converted property setter: - (void)setTextEntryHistoryStorageBehavior:(id)behavior;	// 0x328ced81
// converted property setter: - (void)setTextEntryHistoryStorageClient:(id)client;	// 0x328ceddd
// converted property getter: - (BOOL)shouldDisplayOnStartup;	// 0x328cee0d
// converted property getter: - (id)textEntryHistoryDisplayBehaviors;	// 0x328cec9d
// converted property getter: - (id)textEntryHistoryDisplayClients;	// 0x328cecf9
// converted property getter: - (id)textEntryHistoryStorageBehavior;	// 0x328ced55
// converted property getter: - (id)textEntryHistoryStorageClient;	// 0x328cedb1
@end

