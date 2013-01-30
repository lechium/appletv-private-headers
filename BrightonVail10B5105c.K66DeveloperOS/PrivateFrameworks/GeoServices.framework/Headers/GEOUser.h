/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString, GEOPhoto;

@interface GEOUser : PBCodable {
	GEOPhoto *_image;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL hasImage;	// G=0x339a29f5; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x339a29dd; 
@property(retain, nonatomic) GEOPhoto *image;	// G=0x339a2f7d; S=0x339a2f8d; @synthesize=_image
@property(retain, nonatomic) NSString *name;	// G=0x339a2f5d; S=0x339a2f6d; @synthesize=_name
- (void)copyTo:(id)to;	// 0x339a2df1
- (void)dealloc;	// 0x339a2985
- (id)description;	// 0x339a2a0d
- (id)dictionaryRepresentation;	// 0x339a2a7d
// declared property getter: - (BOOL)hasImage;	// 0x339a29f5
// declared property getter: - (BOOL)hasName;	// 0x339a29dd
- (unsigned)hash;	// 0x339a2f1d
// declared property getter: - (id)image;	// 0x339a2f7d
- (BOOL)isEqual:(id)equal;	// 0x339a2e7d
// declared property getter: - (id)name;	// 0x339a2f5d
- (BOOL)readFrom:(id)from;	// 0x339a2d19
// declared property setter: - (void)setImage:(id)image;	// 0x339a2f8d
// declared property setter: - (void)setName:(id)name;	// 0x339a2f6d
- (void)writeTo:(id)to;	// 0x339a2d25
@end
