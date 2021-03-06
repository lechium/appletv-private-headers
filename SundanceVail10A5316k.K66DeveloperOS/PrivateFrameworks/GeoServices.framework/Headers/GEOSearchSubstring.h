/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOSearchSubstring : PBCodable {
@private
	int _beginIndex;	// 4 = 0x4
	int _endIndex;	// 8 = 0x8
	int _stringType;	// 12 = 0xc
}
@property(assign, nonatomic) int beginIndex;	// G=0x34b1ff0d; S=0x34b1ff1d; @synthesize=_beginIndex
@property(assign, nonatomic) int endIndex;	// G=0x34b1ff2d; S=0x34b1ff3d; @synthesize=_endIndex
@property(assign, nonatomic) int stringType;	// G=0x34b1feed; S=0x34b1fefd; @synthesize=_stringType
// declared property getter: - (int)beginIndex;	// 0x34b1ff0d
- (void)copyTo:(id)to;	// 0x34b1fd8d
- (void)dealloc;	// 0x34b1f8b9
- (id)description;	// 0x34b1f8e5
- (id)dictionaryRepresentation;	// 0x34b1f955
// declared property getter: - (int)endIndex;	// 0x34b1ff2d
- (unsigned)hash;	// 0x34b1fe8d
- (BOOL)isEqual:(id)equal;	// 0x34b1fe0d
- (BOOL)readFrom:(id)from;	// 0x34b1fd21
// declared property setter: - (void)setBeginIndex:(int)index;	// 0x34b1ff1d
// declared property setter: - (void)setEndIndex:(int)index;	// 0x34b1ff3d
// declared property setter: - (void)setStringType:(int)type;	// 0x34b1fefd
// declared property getter: - (int)stringType;	// 0x34b1feed
- (void)writeTo:(id)to;	// 0x34b1fd2d
@end

