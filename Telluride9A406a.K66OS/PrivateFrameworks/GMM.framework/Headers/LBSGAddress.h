/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface LBSGAddress : PBCodable {
	NSMutableArray *_formattedAddressLines;	// 4 = 0x4
	NSMutableArray *_components;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *components;	// G=0x33aa057d; S=0x33aa058d; @synthesize=_components
@property(retain, nonatomic) NSMutableArray *formattedAddressLines;	// G=0x33aa0549; S=0x33aa0559; @synthesize=_formattedAddressLines
- (void)addComponent:(id)component;	// 0x33aa0065
- (void)addFormattedAddressLine:(id)line;	// 0x33a9ffc1
- (id)componentAtIndex:(unsigned)index;	// 0x33aa00e9
// declared property getter: - (id)components;	// 0x33aa057d
- (unsigned)componentsCount;	// 0x33aa00c9
- (void)dealloc;	// 0x33a9ff69
- (id)description;	// 0x33aa0109
- (id)dictionaryRepresentation;	// 0x33aa0179
- (id)formattedAddressLineAtIndex:(unsigned)index;	// 0x33aa0045
// declared property getter: - (id)formattedAddressLines;	// 0x33aa0549
- (unsigned)formattedAddressLinesCount;	// 0x33aa0025
- (BOOL)readFrom:(id)from;	// 0x33aa01f9
// declared property setter: - (void)setComponents:(id)components;	// 0x33aa058d
// declared property setter: - (void)setFormattedAddressLines:(id)lines;	// 0x33aa0559
- (void)writeTo:(id)to;	// 0x33aa0399
@end

