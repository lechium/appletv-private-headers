/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"
#import "EventKit-Structs.h"

@class EKSource, NSString;

@interface EKCalendar : EKObject {
@private
	CGColorRef _color;	// 36 = 0x24
	unsigned long _loadFlags;	// 40 = 0x28
	BOOL _isMain;	// 44 = 0x2c
}
@property(assign, nonatomic) CGColorRef CGColor;	// G=0x345424bd; S=0x34581ecd; 
@property(assign) int allowedEntityTypes;	// G=0x34543bfd; S=0x345823d1; converted property
@property(readonly, assign, nonatomic) BOOL allowsContentModifications;	// G=0x34543c65; 
@property(readonly, assign, nonatomic) NSString *calendarIdentifier;	// G=0x34543cbd; 
@property(retain, nonatomic) CGColorRef color;	// G=0x34582809; S=0x34582819; @synthesize=_color
@property(retain) id colorString;	// G=0x345425bd; S=0x34581dd5; converted property
@property(assign) int displayOrder;	// G=0x3454b305; S=0x34582001; converted property
@property(readonly, assign, nonatomic, getter=isImmutable) BOOL immutable;	// G=0x34554bd9; 
@property(assign, nonatomic) BOOL isMainCalendarForSource;	// G=0x3458285d; S=0x3458286d; @synthesize=_isMain
@property(assign, nonatomic) unsigned long loadFlags;	// G=0x3458283d; S=0x3458284d; @synthesize=_loadFlags
@property(retain, nonatomic) EKSource *source;	// G=0x3454271d; S=0x3458232d; 
@property(readonly, assign, nonatomic, getter=isSubscribed) BOOL subscribed;	// G=0x345426c9; 
@property(readonly, assign, nonatomic) unsigned supportedEventAvailabilities;	// G=0x34547f0d; 
@property(copy, nonatomic) NSString *title;	// G=0x34543f69; S=0x34581db9; 
@property(readonly, assign, nonatomic) int type;	// G=0x34542661; 
+ (id)calendarWithEventStore:(id)eventStore;	// 0x34581c45
+ (id)typeDescription:(int)description;	// 0x34582045
- (id)init;	// 0x34581cd5
// declared property getter: - (CGColorRef)CGColor;	// 0x345424bd
- (void)_setSource:(id)source;	// 0x345823a5
- (id)_sourceRelation;	// 0x34542745
// converted property getter: - (int)allowedEntityTypes;	// 0x34543bfd
// declared property getter: - (BOOL)allowsContentModifications;	// 0x34543c65
- (BOOL)allowsEvents;	// 0x3454de59
- (BOOL)allowsTasks;	// 0x34555b4d
// declared property getter: - (id)calendarIdentifier;	// 0x34543cbd
// declared property getter: - (CGColorRef)color;	// 0x34582809
// converted property getter: - (id)colorString;	// 0x345425bd
- (BOOL)commit:(id *)commit;	// 0x3458270d
- (void)dealloc;	// 0x34581d19
- (id)description;	// 0x34582091
// converted property getter: - (int)displayOrder;	// 0x3454b305
- (int)entityType;	// 0x34581d5d
- (id)externalID;	// 0x3458228d
- (id)externalURI;	// 0x345822a9
- (BOOL)getColorRed:(int *)red green:(int *)green blue:(int *)blue;	// 0x34542571
- (BOOL)hasEvents;	// 0x34582415
- (BOOL)hasTasks;	// 0x34582499
- (BOOL)isDefaultCalendarForSource;	// 0x34582171
- (BOOL)isHidden;	// 0x345821f5
// declared property getter: - (BOOL)isImmutable;	// 0x34554bd9
// declared property getter: - (BOOL)isMainCalendarForSource;	// 0x3458285d
// declared property getter: - (BOOL)isSubscribed;	// 0x345426c9
- (id)lazyLoadRelationForKey:(id)key;	// 0x34542761
// declared property getter: - (unsigned long)loadFlags;	// 0x3458283d
- (BOOL)prohibitsScheduling;	// 0x34582225
- (BOOL)refresh;	// 0x34553811
- (BOOL)remove:(id *)remove;	// 0x34582745
- (void)reset;	// 0x34581d61
// converted property setter: - (void)setAllowedEntityTypes:(int)types;	// 0x345823d1
// declared property setter: - (void)setCGColor:(CGColorRef)color;	// 0x34581ecd
// declared property setter: - (void)setColor:(CGColorRef)color;	// 0x34582819
// converted property setter: - (void)setColorString:(id)string;	// 0x34581dd5
// converted property setter: - (void)setDisplayOrder:(int)order;	// 0x34582001
// declared property setter: - (void)setIsMainCalendarForSource:(BOOL)source;	// 0x3458286d
// declared property setter: - (void)setLoadFlags:(unsigned long)flags;	// 0x3458284d
// declared property setter: - (void)setSource:(id)source;	// 0x3458232d
// declared property setter: - (void)setTitle:(id)title;	// 0x34581db9
- (id)sharedOwnerAddress;	// 0x34582271
- (id)sharedOwnerName;	// 0x34582255
- (int)sharingStatus;	// 0x345547bd
// declared property getter: - (id)source;	// 0x3454271d
// declared property getter: - (unsigned)supportedEventAvailabilities;	// 0x34547f0d
// declared property getter: - (id)title;	// 0x34543f69
// declared property getter: - (int)type;	// 0x34542661
- (BOOL)validate:(id *)validate;	// 0x3458251d
@end

