/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : NSObject {
	BOOL _isMaster;	// 4 = 0x4
	ICSDate *_recurrenceID;	// 8 = 0x8
	NSMutableDictionary *_changes;	// 12 = 0xc
}
@property(readonly, assign) BOOL attachmentsChanged;	// G=0x32ee4781; 
@property(readonly, assign) BOOL attendeesChanged;	// G=0x32ee4715; 
@property(readonly, assign) BOOL dateTimeChanged;	// G=0x32ee45b5; 
@property(readonly, assign) BOOL descriptionChanged;	// G=0x32ee4739; 
@property(readonly, assign) BOOL endTimeChanged;	// G=0x32ee461d; 
@property(assign) BOOL isMaster;	// G=0x32ee4821; S=0x32ee4831; @synthesize=_isMaster
@property(readonly, assign) BOOL locationChanged;	// G=0x32ee46a9; 
@property(readonly, assign) BOOL participationChanged;	// G=0x32ee47c9; 
@property(readonly, assign) BOOL privateCommentChanged;	// G=0x32ee47fd; 
@property(readonly, assign) BOOL recurrenceChanged;	// G=0x32ee47a5; 
@property(retain) ICSDate *recurrenceID;	// G=0x32ee4841; S=0x32ee4855; @synthesize=_recurrenceID
@property(readonly, assign) BOOL startTimeChanged;	// G=0x32ee45f9; 
@property(readonly, assign) BOOL statusChanged;	// G=0x32ee475d; 
@property(readonly, assign) BOOL summaryChanged;	// G=0x32ee46f1; 
@property(readonly, assign) BOOL timeZoneChanged;	// G=0x32ee4641; 
@property(readonly, assign) BOOL urlChanged;	// G=0x32ee46cd; 
+ (id)changeWithItem:(id)item;	// 0x32ee4099
+ (id)changeWithOccurrenceID:(id)occurrenceID;	// 0x32ee4051
- (id)init;	// 0x32ee3eb9
- (id)initWithOccurrenceID:(id)occurrenceID;	// 0x32ee3f39
- (void)addChangedParameter:(id)parameter ofProperty:(id)property;	// 0x32ee43f1
- (void)addChangedProperty:(id)property;	// 0x32ee4359
- (id)allChanges;	// 0x32ee4349
// declared property getter: - (BOOL)attachmentsChanged;	// 0x32ee4781
// declared property getter: - (BOOL)attendeesChanged;	// 0x32ee4715
// declared property getter: - (BOOL)dateTimeChanged;	// 0x32ee45b5
- (void)dealloc;	// 0x32ee3ff1
// declared property getter: - (BOOL)descriptionChanged;	// 0x32ee4739
- (BOOL)didParameterChange:(id)change onProperty:(id)property;	// 0x32ee4509
- (BOOL)didPropertyChange:(id)change;	// 0x32ee44d9
// declared property getter: - (BOOL)endTimeChanged;	// 0x32ee461d
// declared property getter: - (BOOL)isMaster;	// 0x32ee4821
// declared property getter: - (BOOL)locationChanged;	// 0x32ee46a9
// declared property getter: - (BOOL)participationChanged;	// 0x32ee47c9
// declared property getter: - (BOOL)privateCommentChanged;	// 0x32ee47fd
// declared property getter: - (BOOL)recurrenceChanged;	// 0x32ee47a5
// declared property getter: - (id)recurrenceID;	// 0x32ee4841
// declared property setter: - (void)setIsMaster:(BOOL)master;	// 0x32ee4831
// declared property setter: - (void)setRecurrenceID:(id)anId;	// 0x32ee4855
// declared property getter: - (BOOL)startTimeChanged;	// 0x32ee45f9
// declared property getter: - (BOOL)statusChanged;	// 0x32ee475d
// declared property getter: - (BOOL)summaryChanged;	// 0x32ee46f1
// declared property getter: - (BOOL)timeZoneChanged;	// 0x32ee4641
// declared property getter: - (BOOL)urlChanged;	// 0x32ee46cd
@end

