/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMAllowableValues : PBCodable {
	NSString *_valueText;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL hasValueText;	// G=0x33a92449; 
@property(retain, nonatomic) NSString *valueText;	// G=0x33a9262d; S=0x33a9263d; @synthesize=_valueText
- (void)dealloc;	// 0x33a92405
- (id)description;	// 0x33a92461
- (id)dictionaryRepresentation;	// 0x33a924d1
// declared property getter: - (BOOL)hasValueText;	// 0x33a92449
- (BOOL)readFrom:(id)from;	// 0x33a92525
// declared property setter: - (void)setValueText:(id)text;	// 0x33a9263d
// declared property getter: - (id)valueText;	// 0x33a9262d
- (void)writeTo:(id)to;	// 0x33a925fd
@end

