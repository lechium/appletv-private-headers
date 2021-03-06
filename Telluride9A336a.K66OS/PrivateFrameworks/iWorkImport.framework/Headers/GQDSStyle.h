/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQDNameMappableWithDefault.h"


__attribute__((visibility("hidden")))
@interface GQDSStyle : NSObject <GQDNameMappableWithDefault> {
@private
	GQDSStyle *mParent;	// 4 = 0x4
	GQDSMapRef mPropertyMap;	// 8 = 0x8
}
@property(retain) id parent;	// G=0x3048bc55; S=0x3048bc65; converted property
+ (id)createReplacementForMissingObject:(xmlTextReader *)missingObject processor:(id)processor;	// 0x3048c025
+ (id)createReplacementForMissingStyleOfType:(int)type;	// 0x3048be1d
+ (GQDSMapRef)defaultMapForStyleType:(int)styleType;	// 0x3048c119
+ (const StateSpec *)stateForReading;	// 0x3048bc35
+ (int)styleTypeForNodeName:(const char *)nodeName;	// 0x3048be81
- (void)dealloc;	// 0x3048c84d
- (BOOL)hasValueForBoolProperty:(int)boolProperty value:(BOOL *)value;	// 0x3048bccd
- (BOOL)hasValueForBoolProperty:(int)boolProperty value:(BOOL *)value wasOverriddenWithNull:(BOOL *)null;	// 0x3048c7e1
- (BOOL)hasValueForDoubleProperty:(int)doubleProperty value:(double *)value;	// 0x3048bdb1
- (BOOL)hasValueForDoubleProperty:(int)doubleProperty value:(double *)value wasOverriddenWithNull:(BOOL *)null;	// 0x3048c63d
- (BOOL)hasValueForFloatProperty:(int)floatProperty value:(float *)value;	// 0x3048bd5d
- (BOOL)hasValueForFloatProperty:(int)floatProperty value:(float *)value wasOverriddenWithNull:(BOOL *)null;	// 0x3048c6c9
- (BOOL)hasValueForIntProperty:(int)intProperty value:(int *)value;	// 0x3048bd15
- (BOOL)hasValueForIntProperty:(int)intProperty value:(int *)value wasOverriddenWithNull:(BOOL *)null;	// 0x3048c755
- (BOOL)hasValueForObjectProperty:(int)objectProperty value:(id *)value;	// 0x3048bdf9
- (BOOL)hasValueForObjectProperty:(int)objectProperty value:(id *)value wasOverriddenWithNull:(BOOL *)null;	// 0x3048c5b1
- (BOOL)overridesBoolProperty:(int)property value:(BOOL *)value;	// 0x3048c7c1
- (BOOL)overridesDoubleProperty:(int)property value:(double *)value;	// 0x3048c61d
- (BOOL)overridesFloatProperty:(int)property value:(float *)value;	// 0x3048c6a9
- (BOOL)overridesIntProperty:(int)property value:(int *)value;	// 0x3048c735
- (BOOL)overridesObjectProperty:(int)property value:(id *)value;	// 0x3048c591
// converted property getter: - (id)parent;	// 0x3048bc55
// converted property setter: - (void)setParent:(id)parent;	// 0x3048bc65
- (void)setPropertyMap:(GQDSMapRef)map;	// 0x3048bc45
- (BOOL)valueForBoolProperty:(int)boolProperty;	// 0x3048bca5
- (double)valueForDoubleProperty:(int)doubleProperty;	// 0x3048bd81
- (float)valueForFloatProperty:(int)floatProperty;	// 0x3048bd39
- (int)valueForIntProperty:(int)intProperty;	// 0x3048bcf1
- (id)valueForObjectProperty:(int)objectProperty;	// 0x3048bdd5
@end

