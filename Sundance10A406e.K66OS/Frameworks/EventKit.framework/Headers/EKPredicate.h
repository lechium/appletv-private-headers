/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSPredicate.h> // Unknown library

@class NSArray;

@interface EKPredicate : NSPredicate {
	NSArray *_calendars;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *calendars;	// G=0x313b8799; 
- (id)initWithCalendars:(id)calendars;	// 0x3136d561
- (id)initWithCoder:(id)coder;	// 0x313b8729
// declared property getter: - (id)calendars;	// 0x313b8799
- (void)dealloc;	// 0x31372cd5
- (void)encodeWithCoder:(id)coder;	// 0x3136e071
@end
