/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, CalDAVOccurrenceChange, NSString;

@interface CalDAVScheduleChangesProperty : NSObject {
	NSString *_dateStamp;	// 4 = 0x4
	int _actionType;	// 8 = 0x8
	CalDAVOccurrenceChange *_masterChange;	// 12 = 0xc
	NSMutableDictionary *_occurrenceChanges;	// 16 = 0x10
	NSString *_attendeeAddress;	// 20 = 0x14
}
@property(assign) int actionType;	// G=0x33b910bd; S=0x33b910d1; @synthesize=_actionType
@property(retain) NSString *attendeeAddress;	// G=0x33b910e9; S=0x33b910fd; @synthesize=_attendeeAddress
@property(retain) NSString *dateStamp;	// G=0x33b91099; S=0x33b910ad; @synthesize=_dateStamp
@property(retain) CalDAVOccurrenceChange *masterChange;	// G=0x33b9110d; S=0x33b91121; @synthesize=_masterChange
+ (id)debugStringForType:(int)type;	// 0x33b90b65
+ (void)initialize;	// 0x33b909d9
+ (id)propertyWithItem:(id)item;	// 0x33b90c2d
- (id)init;	// 0x33b90a21
// declared property getter: - (int)actionType;	// 0x33b910bd
- (void)addOccurrenceChange:(id)change;	// 0x33b90ec1
- (id)allChanges;	// 0x33b90f81
// declared property getter: - (id)attendeeAddress;	// 0x33b910e9
- (id)changeForOccurrence:(id)occurrence;	// 0x33b91045
// declared property getter: - (id)dateStamp;	// 0x33b91099
- (void)dealloc;	// 0x33b90add
- (BOOL)isCancel;	// 0x33b90bb1
- (BOOL)isCreate;	// 0x33b90c11
- (BOOL)isReply;	// 0x33b90bd1
- (BOOL)isUpdate;	// 0x33b90bf1
// declared property getter: - (id)masterChange;	// 0x33b9110d
- (id)recurrenceIDs;	// 0x33b91001
// declared property setter: - (void)setActionType:(int)type;	// 0x33b910d1
// declared property setter: - (void)setAttendeeAddress:(id)address;	// 0x33b910fd
// declared property setter: - (void)setDateStamp:(id)stamp;	// 0x33b910ad
// declared property setter: - (void)setMasterChange:(id)change;	// 0x33b91121
@end
