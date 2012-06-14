/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EKObject.h"
#import "EventKit-Structs.h"

@class NSString, CLLocation;

@interface EKStructuredLocation : EKObject <NSCopying> {
}
@property(retain) id addressBookEntityID;	// G=0x30e6ca81; S=0x30e6ca9d; converted property
@property(retain, nonatomic) CLLocation *geoLocation;	// G=0x30e6c8f9; S=0x30e6c9ed; 
@property(assign, nonatomic) double radius;	// G=0x30e6ca09; S=0x30e6ca3d; 
@property(retain, nonatomic) NSString *title;	// G=0x30e6c8c1; S=0x30e6c8dd; 
+ (id)locationWithTitle:(id)title;	// 0x30e6c7b9
- (id)init;	// 0x30e6c819
- (id)_persistentLocation;	// 0x30e6c875
// converted property getter: - (id)addressBookEntityID;	// 0x30e6ca81
- (id)copyWithZone:(NSZone *)zone;	// 0x30e6cab9
- (id)description;	// 0x30e6cb8d
// declared property getter: - (id)geoLocation;	// 0x30e6c8f9
- (BOOL)isStructured;	// 0x30e6c885
// declared property getter: - (double)radius;	// 0x30e6ca09
// converted property setter: - (void)setAddressBookEntityID:(id)anId;	// 0x30e6ca9d
// declared property setter: - (void)setGeoLocation:(id)location;	// 0x30e6c9ed
// declared property setter: - (void)setRadius:(double)radius;	// 0x30e6ca3d
// declared property setter: - (void)setTitle:(id)title;	// 0x30e6c8dd
// declared property getter: - (id)title;	// 0x30e6c8c1
- (void)updatePersistentObject;	// 0x30e6cc41
@end

