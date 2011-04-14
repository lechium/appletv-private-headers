/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, CalDAVOccurrenceChange, NSMutableDictionary;

@interface CalDAVScheduleChangesProperty : NSObject {
	NSString *_dateStamp;	// 4 = 0x4
	int _actionType;	// 8 = 0x8
	CalDAVOccurrenceChange *_masterChange;	// 12 = 0xc
	NSMutableDictionary *_occurrenceChanges;	// 16 = 0x10
	NSString *_attendeeAddress;	// 20 = 0x14
}
@property(assign) int actionType;	// G=0x32d0892d; S=0x32d0893d; @synthesize=_actionType
@property(retain) NSString *attendeeAddress;	// G=0x32d09335; S=0x32d093a9; @synthesize=_attendeeAddress
@property(retain) NSString *dateStamp;	// G=0x32d0931d; S=0x32d0937d; @synthesize=_dateStamp
@property(retain) CalDAVOccurrenceChange *masterChange;	// G=0x32d0934d; S=0x32d093d5; @synthesize=_masterChange
+ (id)debugStringForType:(int)type;	// 0x32d088ed
+ (void)initialize;	// 0x32d08be9
+ (id)propertyWithNode:(id)node;	// 0x32d0942d
- (id)init;	// 0x32d08b41
// declared property getter: - (int)actionType;	// 0x32d0892d
- (void)addOccurrenceChange:(id)change;	// 0x32d09105
- (id)allChanges;	// 0x32d089d5
// declared property getter: - (id)attendeeAddress;	// 0x32d09335
- (id)changeForOccurrence:(id)occurrence;	// 0x32d0894d
// declared property getter: - (id)dateStamp;	// 0x32d0931d
- (void)dealloc;	// 0x32d08ac5
- (BOOL)isCancel;	// 0x32d08aa9
- (BOOL)isCreate;	// 0x32d08a55
- (BOOL)isReply;	// 0x32d08a8d
- (BOOL)isUpdate;	// 0x32d08a71
// declared property getter: - (id)masterChange;	// 0x32d0934d
- (id)recurrenceIDs;	// 0x32d0899d
// declared property setter: - (void)setActionType:(int)type;	// 0x32d0893d
// declared property setter: - (void)setAttendeeAddress:(id)address;	// 0x32d093a9
// declared property setter: - (void)setDateStamp:(id)stamp;	// 0x32d0937d
// declared property setter: - (void)setMasterChange:(id)change;	// 0x32d093d5
@end

