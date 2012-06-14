/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class NSString, NSNumber, EKSourceConstraints;

@interface EKPersistentSource : EKPersistentObject {
@private
	EKSourceConstraints *_constraints;	// 32 = 0x20
}
@property(assign, nonatomic) NSString *UUID;	// G=0x30df49a1; S=0x30e6bbbd; 
@property(readonly, assign, nonatomic) EKSourceConstraints *constraints;	// G=0x30df5539; @synthesize=_constraints
@property(copy, nonatomic) NSNumber *defaultAlarmOffset;	// G=0x30dfd4d1; S=0x30e6bba1; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x30debd8d; S=0x30e6bbf5; 
@property(copy, nonatomic) NSString *externalID;	// G=0x30dec949; S=0x30e6bbd9; 
@property(assign, nonatomic) int sourceType;	// G=0x30dec715; S=0x30e6bb4d; 
@property(copy, nonatomic) NSString *title;	// G=0x30e6bb69; S=0x30e6bb85; 
+ (id)defaultPropertiesToLoad;	// 0x30e6b98d
+ (id)relations;	// 0x30e6ba21
- (id)init;	// 0x30e6bab1
// declared property getter: - (id)UUID;	// 0x30df49a1
// declared property getter: - (id)constraints;	// 0x30df5539
- (void)dealloc;	// 0x30e6bafd
// declared property getter: - (id)defaultAlarmOffset;	// 0x30dfd4d1
- (id)description;	// 0x30e6bc21
- (int)entityType;	// 0x30e6bb49
// declared property getter: - (id)externalID;	// 0x30dec949
// declared property getter: - (BOOL)isEnabled;	// 0x30debd8d
- (BOOL)refresh;	// 0x30e056ed
- (void)reset;	// 0x30e6bcd9
// declared property setter: - (void)setDefaultAlarmOffset:(id)offset;	// 0x30e6bba1
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x30e6bbf5
// declared property setter: - (void)setExternalID:(id)anId;	// 0x30e6bbd9
// declared property setter: - (void)setSourceType:(int)type;	// 0x30e6bb4d
// declared property setter: - (void)setTitle:(id)title;	// 0x30e6bb85
// declared property setter: - (void)setUUID:(id)uuid;	// 0x30e6bbbd
// declared property getter: - (int)sourceType;	// 0x30dec715
// declared property getter: - (id)title;	// 0x30e6bb69
@end

