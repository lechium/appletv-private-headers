/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CPPair : NSObject {
@private
	NSObject *m_first;	// 4 = 0x4
	BOOL m_firstIsWrapped;	// 8 = 0x8
	NSObject *m_second;	// 12 = 0xc
	BOOL m_secondIsWrapped;	// 16 = 0x10
}
@property(readonly, retain) NSObject *first;	// G=0x30eaf171; converted property
@property(readonly, retain) NSObject *second;	// G=0x30eaf139; converted property
+ (id)pairWithFirst:(id)first andSecond:(id)second;	// 0x30eaf06d
+ (id)pairWithFirst:(id)first andSecondPointer:(id)pointer;	// 0x30eaefe9
+ (id)pairWithFirstPointer:(id)firstPointer andSecond:(id)second;	// 0x30eaf02d
+ (id)pairWithFirstPointer:(id)firstPointer andSecondPointer:(id)pointer;	// 0x30eaef8d
- (id)initWithFirst:(id)first andSecond:(id)second;	// 0x30eaef0d
- (id)initWithFirst:(id)first andSecondPointer:(id)pointer;	// 0x30eaf351
- (id)initWithFirstPointer:(id)firstPointer andSecond:(id)second;	// 0x30eaf3a9
- (id)initWithFirstPointer:(id)firstPointer andSecondPointer:(id)pointer;	// 0x30eaf2d9
- (void)dealloc;	// 0x30eaf279
- (id)description;	// 0x30eaf0b9
// converted property getter: - (id)first;	// 0x30eaf171
- (unsigned)hash;	// 0x30eaf1a9
- (BOOL)isEqual:(id)equal;	// 0x30eaf1e9
// converted property getter: - (id)second;	// 0x30eaf139
@end

