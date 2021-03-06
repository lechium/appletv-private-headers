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
@property(assign) int actionType;	// G=0x378c60cd; S=0x378c60e1; @synthesize=_actionType
@property(retain) NSString *attendeeAddress;	// G=0x378c60f9; S=0x378c610d; @synthesize=_attendeeAddress
@property(retain) NSString *dateStamp;	// G=0x378c60a9; S=0x378c60bd; @synthesize=_dateStamp
@property(retain) CalDAVOccurrenceChange *masterChange;	// G=0x378c611d; S=0x378c6131; @synthesize=_masterChange
+ (id)debugStringForType:(int)type;	// 0x378c5b75
+ (void)initialize;	// 0x378c59e9
+ (id)propertyWithItem:(id)item;	// 0x378c5c3d
- (id)init;	// 0x378c5a31
// declared property getter: - (int)actionType;	// 0x378c60cd
- (void)addOccurrenceChange:(id)change;	// 0x378c5ed1
- (id)allChanges;	// 0x378c5f91
// declared property getter: - (id)attendeeAddress;	// 0x378c60f9
- (id)changeForOccurrence:(id)occurrence;	// 0x378c6055
// declared property getter: - (id)dateStamp;	// 0x378c60a9
- (void)dealloc;	// 0x378c5aed
- (BOOL)isCancel;	// 0x378c5bc1
- (BOOL)isCreate;	// 0x378c5c21
- (BOOL)isReply;	// 0x378c5be1
- (BOOL)isUpdate;	// 0x378c5c01
// declared property getter: - (id)masterChange;	// 0x378c611d
- (id)recurrenceIDs;	// 0x378c6011
// declared property setter: - (void)setActionType:(int)type;	// 0x378c60e1
// declared property setter: - (void)setAttendeeAddress:(id)address;	// 0x378c610d
// declared property setter: - (void)setDateStamp:(id)stamp;	// 0x378c60bd
// declared property setter: - (void)setMasterChange:(id)change;	// 0x378c6131
@end

