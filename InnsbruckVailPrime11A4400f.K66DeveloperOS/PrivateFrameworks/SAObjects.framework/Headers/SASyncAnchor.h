/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SASyncAnchor : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int count;	// G=0x326aa561; S=0x326aa5d1; 
@property(copy, nonatomic) NSString *generation;	// G=0x326aa615; S=0x326aa631; 
@property(copy, nonatomic) NSString *key;	// G=0x326aa681; S=0x326aa69d; 
@property(copy, nonatomic) NSString *validity;	// G=0x326aa6ed; S=0x326aa709; 
+ (id)anchor;	// 0x326aa4d1
+ (id)anchorWithDictionary:(id)dictionary context:(id)context;	// 0x326aa515
// declared property getter: - (int)count;	// 0x326aa561
- (id)encodedClassName;	// 0x326aa4c5
// declared property getter: - (id)generation;	// 0x326aa615
- (id)groupIdentifier;	// 0x326aa4b5
// declared property getter: - (id)key;	// 0x326aa681
// declared property setter: - (void)setCount:(int)count;	// 0x326aa5d1
// declared property setter: - (void)setGeneration:(id)generation;	// 0x326aa631
// declared property setter: - (void)setKey:(id)key;	// 0x326aa69d
// declared property setter: - (void)setValidity:(id)validity;	// 0x326aa709
// declared property getter: - (id)validity;	// 0x326aa6ed
@end
