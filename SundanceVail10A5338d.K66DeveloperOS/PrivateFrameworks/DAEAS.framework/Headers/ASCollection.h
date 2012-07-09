/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, ASFolderItemsSyncResponse, NSString;

@interface ASCollection : ASItem {
	int _dataclass;	// 40 = 0x28
	NSString *_syncKey;	// 44 = 0x2c
	NSString *_collectionId;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
	NSNumber *_moreAvailable;	// 56 = 0x38
	NSArray *_changedItems;	// 60 = 0x3c
	NSArray *_responseItems;	// 64 = 0x40
	ASFolderItemsSyncResponse *_parentResponse;	// 68 = 0x44
	int _sniffableType;	// 72 = 0x48
	BOOL _checkedShouldSniffInvites;	// 76 = 0x4c
}
@property(retain) NSArray *changedItems;	// G=0x36f01909; S=0x36f01941; converted property
@property(retain) NSString *collectionId;	// G=0x36f03679; S=0x36f036b1; converted property
@property(readonly, assign) int dataclass;	// G=0x36f01759; converted property
@property(retain) NSNumber *moreAvailable;	// G=0x36f03771; S=0x36f037a9; converted property
@property(retain) NSArray *responseItems;	// G=0x36f01985; S=0x36f019bd; converted property
@property(retain) NSNumber *status;	// G=0x36f036f5; S=0x36f0372d; converted property
@property(retain) NSString *syncKey;	// G=0x36f035fd; S=0x36f03635; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x36f014a5
+ (id)asParseRules;	// 0x36f01a01
+ (BOOL)frontingBasicTypes;	// 0x36f015a1
+ (BOOL)notifyOfUnknownTokens;	// 0x36f015f5
+ (BOOL)parsingLeafNode;	// 0x36f014f9
+ (BOOL)parsingWithSubItems;	// 0x36f0154d
- (id)init;	// 0x36f01649
// converted property getter: - (id)changedItems;	// 0x36f01909
// converted property getter: - (id)collectionId;	// 0x36f03679
// converted property getter: - (int)dataclass;	// 0x36f01759
- (void)dealloc;	// 0x36f01695
- (id)description;	// 0x36f037ed
// converted property getter: - (id)moreAvailable;	// 0x36f03771
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36f03495
// converted property getter: - (id)responseItems;	// 0x36f01985
// converted property setter: - (void)setChangedItems:(id)items;	// 0x36f01941
// converted property setter: - (void)setCollectionId:(id)anId;	// 0x36f036b1
- (void)setDataclassString:(id)string;	// 0x36f01829
// converted property setter: - (void)setMoreAvailable:(id)available;	// 0x36f037a9
- (void)setParentResponse:(id)response;	// 0x36f01749
// converted property setter: - (void)setResponseItems:(id)items;	// 0x36f019bd
// converted property setter: - (void)setStatus:(id)status;	// 0x36f0372d
// converted property setter: - (void)setSyncKey:(id)key;	// 0x36f03635
- (int)sniffableTypeForAccount:(id)account;	// 0x36f0358d
// converted property getter: - (id)status;	// 0x36f036f5
// converted property getter: - (id)syncKey;	// 0x36f035fd
@end
