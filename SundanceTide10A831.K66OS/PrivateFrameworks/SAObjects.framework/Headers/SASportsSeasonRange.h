/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSDate *end;	// G=0x3050d9d1; S=0x3050d9ed; 
@property(copy, nonatomic) NSString *seasonType;	// G=0x3050da3d; S=0x3050da59; 
@property(copy, nonatomic) NSDate *start;	// G=0x3050daa9; S=0x3050dac5; 
+ (id)seasonRange;	// 0x3050d941
+ (id)seasonRangeWithDictionary:(id)dictionary context:(id)context;	// 0x3050d985
- (id)encodedClassName;	// 0x3050d935
// declared property getter: - (id)end;	// 0x3050d9d1
- (id)groupIdentifier;	// 0x3050d925
// declared property getter: - (id)seasonType;	// 0x3050da3d
// declared property setter: - (void)setEnd:(id)end;	// 0x3050d9ed
// declared property setter: - (void)setSeasonType:(id)type;	// 0x3050da59
// declared property setter: - (void)setStart:(id)start;	// 0x3050dac5
// declared property getter: - (id)start;	// 0x3050daa9
@end

