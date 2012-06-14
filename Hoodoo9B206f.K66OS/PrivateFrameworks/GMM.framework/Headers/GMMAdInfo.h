/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMAdInfo : PBCodable {
	NSString *_uniqueId;	// 4 = 0x4
	NSString *_headline;	// 8 = 0x8
	NSString *_creativeLine1;	// 12 = 0xc
	NSString *_creativeLine2;	// 16 = 0x10
	NSString *_linkText;	// 20 = 0x14
	NSString *_linkUrl;	// 24 = 0x18
}
@property(retain, nonatomic) NSString *creativeLine1;	// G=0x33cc00b9; S=0x33cc00c9; @synthesize=_creativeLine1
@property(retain, nonatomic) NSString *creativeLine2;	// G=0x33cc00ed; S=0x33cc00fd; @synthesize=_creativeLine2
@property(readonly, assign, nonatomic) BOOL hasCreativeLine1;	// G=0x33cbfc2d; 
@property(readonly, assign, nonatomic) BOOL hasCreativeLine2;	// G=0x33cbfc45; 
@property(readonly, assign, nonatomic) BOOL hasHeadline;	// G=0x33cbfc15; 
@property(readonly, assign, nonatomic) BOOL hasLinkText;	// G=0x33cbfc5d; 
@property(readonly, assign, nonatomic) BOOL hasLinkUrl;	// G=0x33cbfc75; 
@property(retain, nonatomic) NSString *headline;	// G=0x33cc0085; S=0x33cc0095; @synthesize=_headline
@property(retain, nonatomic) NSString *linkText;	// G=0x33cc0121; S=0x33cc0131; @synthesize=_linkText
@property(retain, nonatomic) NSString *linkUrl;	// G=0x33cc0155; S=0x33cc0165; @synthesize=_linkUrl
@property(retain, nonatomic) NSString *uniqueId;	// G=0x33cc0051; S=0x33cc0061; @synthesize=_uniqueId
// declared property getter: - (id)creativeLine1;	// 0x33cc00b9
// declared property getter: - (id)creativeLine2;	// 0x33cc00ed
- (void)dealloc;	// 0x33cbfb6d
- (id)description;	// 0x33cbfc8d
- (id)dictionaryRepresentation;	// 0x33cbfcfd
// declared property getter: - (BOOL)hasCreativeLine1;	// 0x33cbfc2d
// declared property getter: - (BOOL)hasCreativeLine2;	// 0x33cbfc45
// declared property getter: - (BOOL)hasHeadline;	// 0x33cbfc15
// declared property getter: - (BOOL)hasLinkText;	// 0x33cbfc5d
// declared property getter: - (BOOL)hasLinkUrl;	// 0x33cbfc75
// declared property getter: - (id)headline;	// 0x33cc0085
// declared property getter: - (id)linkText;	// 0x33cc0121
// declared property getter: - (id)linkUrl;	// 0x33cc0155
- (BOOL)readFrom:(id)from;	// 0x33cbfe2d
// declared property setter: - (void)setCreativeLine1:(id)a1;	// 0x33cc00c9
// declared property setter: - (void)setCreativeLine2:(id)a2;	// 0x33cc00fd
// declared property setter: - (void)setHeadline:(id)headline;	// 0x33cc0095
// declared property setter: - (void)setLinkText:(id)text;	// 0x33cc0131
// declared property setter: - (void)setLinkUrl:(id)url;	// 0x33cc0165
// declared property setter: - (void)setUniqueId:(id)anId;	// 0x33cc0061
// declared property getter: - (id)uniqueId;	// 0x33cc0051
- (void)writeTo:(id)to;	// 0x33cbff9d
@end
