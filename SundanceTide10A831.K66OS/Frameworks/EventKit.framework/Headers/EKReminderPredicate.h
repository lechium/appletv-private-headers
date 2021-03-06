/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPredicate.h"

@class NSString, NSDate;

@interface EKReminderPredicate : EKPredicate {
	NSString *_title;	// 12 = 0xc
	NSString *_listTitle;	// 16 = 0x10
	BOOL _limitToCompletedOrIncomplete;	// 20 = 0x14
	BOOL _completed;	// 21 = 0x15
	NSDate *_dueAfter;	// 24 = 0x18
	NSDate *_dueBefore;	// 28 = 0x1c
	BOOL _useDueDateAsCompletionDate;	// 32 = 0x20
	NSString *_searchTerm;	// 36 = 0x24
	int _sortOrder;	// 40 = 0x28
	unsigned _maxResults;	// 44 = 0x2c
	BOOL _useCompletionDateAsAlternate;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL completed;	// G=0x34ee2de1; S=0x34ee25b9; @synthesize=_completed
@property(retain, nonatomic) NSDate *dueAfter;	// G=0x34ee2df1; S=0x34ee25c9; @synthesize=_dueAfter
@property(retain, nonatomic) NSDate *dueBefore;	// G=0x34ee2e01; S=0x34ee25d9; @synthesize=_dueBefore
@property(assign, nonatomic) BOOL limitToCompletedOrIncomplete;	// G=0x34ee2dd1; S=0x34ee25a9; @synthesize=_limitToCompletedOrIncomplete
@property(retain, nonatomic) NSString *listTitle;	// G=0x34ee2dc1; S=0x34f4b755; @synthesize=_listTitle
@property(assign, nonatomic) unsigned maxResults;	// G=0x34ee2e51; S=0x34f4b785; @synthesize=_maxResults
@property(retain, nonatomic) NSString *searchTerm;	// G=0x34ee2e31; S=0x34f4b775; @synthesize=_searchTerm
@property(assign, nonatomic) int sortOrder;	// G=0x34ee2e41; S=0x34ee25e9; @synthesize=_sortOrder
@property(retain, nonatomic) NSString *title;	// G=0x34ee2db1; S=0x34f4b745; @synthesize=_title
@property(assign, nonatomic) BOOL useCompletionDateAsAlternate;	// G=0x34ee2e21; S=0x34ee2599; @synthesize=_useCompletionDateAsAlternate
@property(assign, nonatomic) BOOL useDueDateAsCompletionDate;	// G=0x34ee2e11; S=0x34f4b765; @synthesize=_useDueDateAsCompletionDate
+ (id)predicateWithCalendars:(id)calendars;	// 0x34ee251d
- (id)initWithCalendars:(id)calendars;	// 0x34ee2559
- (id)initWithCoder:(id)coder;	// 0x34f4b539
// declared property getter: - (BOOL)completed;	// 0x34ee2de1
- (id)copyWithZone:(NSZone *)zone;	// 0x34f4b029
- (void)dealloc;	// 0x34ee3a31
// declared property getter: - (id)dueAfter;	// 0x34ee2df1
// declared property getter: - (id)dueBefore;	// 0x34ee2e01
- (void)encodeWithCoder:(id)coder;	// 0x34ee2bb1
- (BOOL)isEqual:(id)equal;	// 0x34f4b221
// declared property getter: - (BOOL)limitToCompletedOrIncomplete;	// 0x34ee2dd1
// declared property getter: - (id)listTitle;	// 0x34ee2dc1
// declared property getter: - (unsigned)maxResults;	// 0x34ee2e51
// declared property getter: - (id)searchTerm;	// 0x34ee2e31
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x34ee25b9
// declared property setter: - (void)setDueAfter:(id)after;	// 0x34ee25c9
// declared property setter: - (void)setDueBefore:(id)before;	// 0x34ee25d9
// declared property setter: - (void)setLimitToCompletedOrIncomplete:(BOOL)completedOrIncomplete;	// 0x34ee25a9
// declared property setter: - (void)setListTitle:(id)title;	// 0x34f4b755
// declared property setter: - (void)setMaxResults:(unsigned)results;	// 0x34f4b785
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x34f4b775
// declared property setter: - (void)setSortOrder:(int)order;	// 0x34ee25e9
// declared property setter: - (void)setTitle:(id)title;	// 0x34f4b745
// declared property setter: - (void)setUseCompletionDateAsAlternate:(BOOL)alternate;	// 0x34ee2599
// declared property setter: - (void)setUseDueDateAsCompletionDate:(BOOL)date;	// 0x34f4b765
// declared property getter: - (int)sortOrder;	// 0x34ee2e41
// declared property getter: - (id)title;	// 0x34ee2db1
// declared property getter: - (BOOL)useCompletionDateAsAlternate;	// 0x34ee2e21
// declared property getter: - (BOOL)useDueDateAsCompletionDate;	// 0x34ee2e11
@end

