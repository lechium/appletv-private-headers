/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData, NSString;

@interface GMMImage : PBCodable {
	NSString *_key;	// 4 = 0x4
	int _type;	// 8 = 0x8
	NSData *_imageData;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasImageData;	// G=0x33cc1dcd; 
@property(readonly, assign, nonatomic) BOOL hasKey;	// G=0x33cc1db5; 
@property(retain, nonatomic) NSData *imageData;	// G=0x33cc2105; S=0x33cc2115; @synthesize=_imageData
@property(retain, nonatomic) NSString *key;	// G=0x33cc20b1; S=0x33cc20c1; @synthesize=_key
@property(assign, nonatomic) int type;	// G=0x33cc20e5; S=0x33cc20f5; @synthesize=_type
- (void)dealloc;	// 0x33cc1d5d
- (id)description;	// 0x33cc1de5
- (id)dictionaryRepresentation;	// 0x33cc1e55
// declared property getter: - (BOOL)hasImageData;	// 0x33cc1dcd
// declared property getter: - (BOOL)hasKey;	// 0x33cc1db5
// declared property getter: - (id)imageData;	// 0x33cc2105
// declared property getter: - (id)key;	// 0x33cc20b1
- (BOOL)readFrom:(id)from;	// 0x33cc1f15
// declared property setter: - (void)setImageData:(id)data;	// 0x33cc2115
// declared property setter: - (void)setKey:(id)key;	// 0x33cc20c1
// declared property setter: - (void)setType:(int)type;	// 0x33cc20f5
// declared property getter: - (int)type;	// 0x33cc20e5
- (void)writeTo:(id)to;	// 0x33cc2039
@end
