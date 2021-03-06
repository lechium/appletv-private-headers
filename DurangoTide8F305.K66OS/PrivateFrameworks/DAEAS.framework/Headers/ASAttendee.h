/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingAcceptingTopLevelLeaves.h"

@class NSString, NSMutableDictionary;

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves> {
	NSString *_name;	// 40 = 0x28
	NSString *_email;	// 44 = 0x2c
	int _status;	// 48 = 0x30
	int _role;	// 52 = 0x34
	int _localId;	// 56 = 0x38
	NSMutableDictionary *_placeHolder;	// 60 = 0x3c
}
@property(retain) NSString *email;	// G=0x30307691; S=0x303076d5; @synthesize=_email
@property(assign) int localId;	// G=0x30306881; S=0x30306891; @synthesize=_localId
@property(retain) NSString *name;	// G=0x30307679; S=0x303076a9; @synthesize=_name
@property(assign) int role;	// G=0x303068a1; S=0x303068b1; @synthesize=_role
@property(assign) int status;	// G=0x303068c1; S=0x303068d1; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x303070e5
+ (BOOL)frontingBasicTypes;	// 0x3030700d
+ (BOOL)notifyOfUnknownTokens;	// 0x30306fc5
+ (BOOL)parsingLeafNode;	// 0x3030709d
+ (BOOL)parsingWithSubItems;	// 0x30307055
- (id)init;	// 0x303074b5
- (id)initWithCalAttendee:(void *)calAttendee parentEvent:(id)event;	// 0x303074f1
- (id)initWithCoder:(id)coder;	// 0x30307349
- (void)appendActiveSyncDataForTask:(id)task toData:(id)data;	// 0x30306b19
- (void)applyPlaceHolder;	// 0x30306d95
- (id)asParseRules;	// 0x3030687d
- (void)clearPlaceHolder;	// 0x30306d6d
- (id)copyOfSelfWithoutLocalID;	// 0x30306a35
- (void)dealloc;	// 0x303072dd
// declared property getter: - (id)email;	// 0x30307691
- (void)encodeWithCoder:(id)coder;	// 0x30306bd5
- (id)fullEmailString;	// 0x30306ad5
- (id)icsUserAddress;	// 0x303068e1
// declared property getter: - (int)localId;	// 0x30306881
// declared property getter: - (id)name;	// 0x30307679
// declared property getter: - (int)role;	// 0x303068a1
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x3030712d
// declared property setter: - (void)setEmail:(id)email;	// 0x303076d5
// declared property setter: - (void)setLocalId:(int)anId;	// 0x30306891
// declared property setter: - (void)setName:(id)name;	// 0x303076a9
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x30306d05
// declared property setter: - (void)setRole:(int)role;	// 0x303068b1
// declared property setter: - (void)setStatus:(int)status;	// 0x303068d1
// declared property getter: - (int)status;	// 0x303068c1
@end

