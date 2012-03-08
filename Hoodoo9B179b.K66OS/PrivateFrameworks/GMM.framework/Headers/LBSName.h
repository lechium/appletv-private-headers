/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString;

@interface LBSName : PBCodable {
	NSString *_text;	// 4 = 0x4
	NSString *_language;	// 8 = 0x8
	XXStruct_WmZAAA _flags;	// 12 = 0xc
	BOOL _hasRouteDirection;	// 24 = 0x18
	int _routeDirection;	// 28 = 0x1c
	NSString *_rawText;	// 32 = 0x20
	NSString *_shortText;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) int *flags;	// G=0x31d0931d; 
@property(readonly, assign, nonatomic) unsigned flagsCount;	// G=0x31d09309; 
@property(readonly, assign, nonatomic) BOOL hasLanguage;	// G=0x31d092f1; 
@property(readonly, assign, nonatomic) BOOL hasRawText;	// G=0x31d09459; 
@property(assign, nonatomic) BOOL hasRouteDirection;	// G=0x31d09999; S=0x31d099a9; @synthesize=_hasRouteDirection
@property(readonly, assign, nonatomic) BOOL hasShortText;	// G=0x31d09471; 
@property(retain, nonatomic) NSString *language;	// G=0x31d09965; S=0x31d09975; @synthesize=_language
@property(retain, nonatomic) NSString *rawText;	// G=0x31d099b9; S=0x31d099c9; @synthesize=_rawText
@property(assign, nonatomic) int routeDirection;	// G=0x31d09411; S=0x31d09435; @synthesize=_routeDirection
@property(retain, nonatomic) NSString *shortText;	// G=0x31d099ed; S=0x31d099fd; @synthesize=_shortText
@property(retain, nonatomic) NSString *text;	// G=0x31d09931; S=0x31d09941; @synthesize=_text
- (void)addFlag:(int)flag;	// 0x31d09341
- (void)clearFlags;	// 0x31d0932d
- (void)dealloc;	// 0x31d09261
- (id)description;	// 0x31d09489
- (id)dictionaryRepresentation;	// 0x31d094f9
- (int)flagAtIndex:(unsigned)index;	// 0x31d09355
// declared property getter: - (int *)flags;	// 0x31d0931d
// declared property getter: - (unsigned)flagsCount;	// 0x31d09309
// declared property getter: - (BOOL)hasLanguage;	// 0x31d092f1
// declared property getter: - (BOOL)hasRawText;	// 0x31d09459
// declared property getter: - (BOOL)hasRouteDirection;	// 0x31d09999
// declared property getter: - (BOOL)hasShortText;	// 0x31d09471
// declared property getter: - (id)language;	// 0x31d09965
// declared property getter: - (id)rawText;	// 0x31d099b9
- (BOOL)readFrom:(id)from;	// 0x31d0963d
// declared property getter: - (int)routeDirection;	// 0x31d09411
- (void)setFlags:(int *)flags count:(unsigned)count;	// 0x31d093f9
// declared property setter: - (void)setHasRouteDirection:(BOOL)direction;	// 0x31d099a9
// declared property setter: - (void)setLanguage:(id)language;	// 0x31d09975
// declared property setter: - (void)setRawText:(id)text;	// 0x31d099c9
// declared property setter: - (void)setRouteDirection:(int)direction;	// 0x31d09435
// declared property setter: - (void)setShortText:(id)text;	// 0x31d099fd
// declared property setter: - (void)setText:(id)text;	// 0x31d09941
// declared property getter: - (id)shortText;	// 0x31d099ed
// declared property getter: - (id)text;	// 0x31d09931
- (void)writeTo:(id)to;	// 0x31d09835
@end

