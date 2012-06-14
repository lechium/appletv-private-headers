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
	EKSourceConstraints *_constraints;	// 28 = 0x1c
}
@property(assign, nonatomic) NSString *UUID;	// G=0x345428b5; S=0x345abd05; 
@property(readonly, assign, nonatomic) EKSourceConstraints *constraints;	// G=0x34543429; @synthesize=_constraints
@property(copy, nonatomic) NSNumber *defaultAlarmOffset;	// G=0x3454b8ad; S=0x345abce9; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x3453a019; S=0x345abd3d; 
@property(copy, nonatomic) NSString *externalID;	// G=0x3453aa45; S=0x345abd21; 
@property(assign, nonatomic) int sourceType;	// G=0x3453a825; S=0x345abc95; 
@property(copy, nonatomic) NSString *title;	// G=0x345abcb1; S=0x345abccd; 
+ (id)relations;	// 0x345abb69
- (id)init;	// 0x345abbf9
// declared property getter: - (id)UUID;	// 0x345428b5
// declared property getter: - (id)constraints;	// 0x34543429
- (void)dealloc;	// 0x345abc45
// declared property getter: - (id)defaultAlarmOffset;	// 0x3454b8ad
- (id)description;	// 0x345abd65
- (int)entityType;	// 0x345abc91
// declared property getter: - (id)externalID;	// 0x3453aa45
// declared property getter: - (BOOL)isEnabled;	// 0x3453a019
- (BOOL)refresh;	// 0x345537b5
- (void)reset;	// 0x345abe1d
// declared property setter: - (void)setDefaultAlarmOffset:(id)offset;	// 0x345abce9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x345abd3d
// declared property setter: - (void)setExternalID:(id)anId;	// 0x345abd21
// declared property setter: - (void)setSourceType:(int)type;	// 0x345abc95
// declared property setter: - (void)setTitle:(id)title;	// 0x345abccd
// declared property setter: - (void)setUUID:(id)uuid;	// 0x345abd05
// declared property getter: - (int)sourceType;	// 0x3453a825
// declared property getter: - (id)title;	// 0x345abcb1
@end
