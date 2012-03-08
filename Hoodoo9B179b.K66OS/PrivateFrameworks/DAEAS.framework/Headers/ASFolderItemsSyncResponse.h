/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSMutableArray, ASCollection;

@interface ASFolderItemsSyncResponse : ASItem {
	ASCollection *_collection;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	NSMutableArray *_meetingRequestDatas;	// 48 = 0x30
	NSMutableArray *_deliveryIdsToClear;	// 52 = 0x34
	NSMutableArray *_deliveryIdsToSoftClear;	// 56 = 0x38
	int _dataclass;	// 60 = 0x3c
}
@property(readonly, retain) ASCollection *collection;	// G=0x31def5c9; converted property
@property(readonly, assign) int dataclass;	// G=0x31defcad; @synthesize=_dataclass
@property(retain) NSNumber *status;	// G=0x31defcbd; S=0x31defcd1; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x31def37d
+ (BOOL)frontingBasicTypes;	// 0x31def479
+ (BOOL)notifyOfUnknownTokens;	// 0x31def4cd
+ (BOOL)parsingLeafNode;	// 0x31def3d1
+ (BOOL)parsingWithSubItems;	// 0x31def425
- (id)initWithDataclass:(int)dataclass;	// 0x31def521
- (void)_processMeetingRequestDatasForAccount:(id)account;	// 0x31def811
- (void)addDeliveryIdToClear:(id)clear;	// 0x31defb49
- (void)addDeliveryIdToSoftClear:(id)softClear;	// 0x31defbad
- (void)addMeetingRequestData:(id)data;	// 0x31defae5
- (id)asParseRules;	// 0x31def601
// converted property getter: - (id)collection;	// 0x31def5c9
// declared property getter: - (int)dataclass;	// 0x31defcad
- (void)dealloc;	// 0x31defc11
- (id)description;	// 0x31defa89
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x31def95d
- (void)setCollections:(id)collections;	// 0x31def561
// declared property setter: - (void)setStatus:(id)status;	// 0x31defcd1
// declared property getter: - (id)status;	// 0x31defcbd
@end

