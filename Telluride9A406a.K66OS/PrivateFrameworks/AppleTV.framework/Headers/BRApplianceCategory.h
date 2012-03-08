/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BRApplianceCategory : NSObject {
@private
	NSMutableDictionary *_info;	// 4 = 0x4
}
@property(retain) id action;	// G=0x33025cd5; S=0x33025cad; converted property
@property(retain) id identifier;	// G=0x33025c85; S=0x33025c5d; converted property
@property(assign) BOOL isDefaultCategory;	// G=0x33025c1d; S=0x33025bc9; converted property
@property(assign) BOOL isStoreCategory;	// G=0x33025d51; S=0x33025cfd; converted property
@property(assign) BOOL isStoreDependent;	// G=0x33025e79; S=0x33025e25; converted property
@property(retain) id name;	// G=0x33025b0d; S=0x33025ae5; converted property
@property(assign) float preferredOrder;	// G=0x33025b89; S=0x33025b35; converted property
@property(assign) BOOL shouldDisplayOnStartup;	// G=0x33025f0d; S=0x33025eb9; converted property
@property(retain) id textEntryHistoryDisplayBehaviors;	// G=0x33026095; S=0x33026061; converted property
@property(retain) id textEntryHistoryDisplayClients;	// G=0x33026039; S=0x33026005; converted property
@property(retain) id textEntryHistoryStorageBehavior;	// G=0x33025fdd; S=0x33025fa9; converted property
@property(retain) id textEntryHistoryStorageClient;	// G=0x33025f81; S=0x33025f4d; converted property
+ (id)categoryWithName:(id)name identifier:(id)identifier preferredOrder:(float)order;	// 0x33025919
- (id)init;	// 0x330259a5
// converted property getter: - (id)action;	// 0x33025cd5
- (void)dealloc;	// 0x33025a09
- (id)description;	// 0x33025a55
- (BOOL)followsStoreCateogry;	// 0x33025de5
// converted property getter: - (id)identifier;	// 0x33025c85
// converted property getter: - (BOOL)isDefaultCategory;	// 0x33025c1d
// converted property getter: - (BOOL)isStoreCategory;	// 0x33025d51
// converted property getter: - (BOOL)isStoreDependent;	// 0x33025e79
// converted property getter: - (id)name;	// 0x33025b0d
// converted property getter: - (float)preferredOrder;	// 0x33025b89
// converted property setter: - (void)setAction:(id)action;	// 0x33025cad
- (void)setFollowsStoreCategory:(BOOL)category;	// 0x33025d91
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x33025c5d
// converted property setter: - (void)setIsDefaultCategory:(BOOL)category;	// 0x33025bc9
// converted property setter: - (void)setIsStoreCategory:(BOOL)category;	// 0x33025cfd
// converted property setter: - (void)setIsStoreDependent:(BOOL)dependent;	// 0x33025e25
// converted property setter: - (void)setName:(id)name;	// 0x33025ae5
// converted property setter: - (void)setPreferredOrder:(float)order;	// 0x33025b35
// converted property setter: - (void)setShouldDisplayOnStartup:(BOOL)displayOnStartup;	// 0x33025eb9
// converted property setter: - (void)setTextEntryHistoryDisplayBehaviors:(id)behaviors;	// 0x33026061
// converted property setter: - (void)setTextEntryHistoryDisplayClients:(id)clients;	// 0x33026005
// converted property setter: - (void)setTextEntryHistoryStorageBehavior:(id)behavior;	// 0x33025fa9
// converted property setter: - (void)setTextEntryHistoryStorageClient:(id)client;	// 0x33025f4d
// converted property getter: - (BOOL)shouldDisplayOnStartup;	// 0x33025f0d
// converted property getter: - (id)textEntryHistoryDisplayBehaviors;	// 0x33026095
// converted property getter: - (id)textEntryHistoryDisplayClients;	// 0x33026039
// converted property getter: - (id)textEntryHistoryStorageBehavior;	// 0x33025fdd
// converted property getter: - (id)textEntryHistoryStorageClient;	// 0x33025f81
@end

