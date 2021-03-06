/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString;

@interface LBSAddressRange : PBCodable {
	XXStruct_WmZAAA _numbers;	// 4 = 0x4
	struct {
		float *list;
		unsigned count;
		unsigned size;
	} _parameters;	// 16 = 0x10
	BOOL _hasParameterIsSynthesized;	// 28 = 0x1c
	BOOL _parameterIsSynthesized;	// 29 = 0x1d
	BOOL _hasSameParity;	// 30 = 0x1e
	BOOL _sameParity;	// 31 = 0x1f
	NSString *_prefix;	// 32 = 0x20
	NSString *_suffix;	// 36 = 0x24
}
@property(assign, nonatomic) BOOL hasParameterIsSynthesized;	// G=0x33cd7bbd; S=0x33cd7bcd; @synthesize=_hasParameterIsSynthesized
@property(readonly, assign, nonatomic) BOOL hasPrefix;	// G=0x33cd7611; 
@property(assign, nonatomic) BOOL hasSameParity;	// G=0x33cd7bdd; S=0x33cd7bed; @synthesize=_hasSameParity
@property(readonly, assign, nonatomic) BOOL hasSuffix;	// G=0x33cd7629; 
@property(readonly, assign, nonatomic) int *numbers;	// G=0x33cd7385; 
@property(readonly, assign, nonatomic) unsigned numbersCount;	// G=0x33cd7371; 
@property(assign, nonatomic) BOOL parameterIsSynthesized;	// G=0x33cd7581; S=0x33cd75a5; @synthesize=_parameterIsSynthesized
@property(readonly, assign, nonatomic) float *parameters;	// G=0x33cd748d; 
@property(readonly, assign, nonatomic) unsigned parametersCount;	// G=0x33cd7479; 
@property(retain, nonatomic) NSString *prefix;	// G=0x33cd7bfd; S=0x33cd7c0d; @synthesize=_prefix
@property(assign, nonatomic) BOOL sameParity;	// G=0x33cd75c9; S=0x33cd75ed; @synthesize=_sameParity
@property(retain, nonatomic) NSString *suffix;	// G=0x33cd7c31; S=0x33cd7c41; @synthesize=_suffix
- (void)addNumber:(int)number;	// 0x33cd73a9
- (void)addParameter:(float)parameter;	// 0x33cd74b1
- (void)clearNumbers;	// 0x33cd7395
- (void)clearParameters;	// 0x33cd749d
- (void)dealloc;	// 0x33cd72f5
- (id)description;	// 0x33cd7641
- (id)dictionaryRepresentation;	// 0x33cd76b1
// declared property getter: - (BOOL)hasParameterIsSynthesized;	// 0x33cd7bbd
// declared property getter: - (BOOL)hasPrefix;	// 0x33cd7611
// declared property getter: - (BOOL)hasSameParity;	// 0x33cd7bdd
// declared property getter: - (BOOL)hasSuffix;	// 0x33cd7629
- (int)numberAtIndex:(unsigned)index;	// 0x33cd73bd
// declared property getter: - (int *)numbers;	// 0x33cd7385
// declared property getter: - (unsigned)numbersCount;	// 0x33cd7371
- (float)parameterAtIndex:(unsigned)index;	// 0x33cd74c5
// declared property getter: - (BOOL)parameterIsSynthesized;	// 0x33cd7581
// declared property getter: - (float *)parameters;	// 0x33cd748d
// declared property getter: - (unsigned)parametersCount;	// 0x33cd7479
// declared property getter: - (id)prefix;	// 0x33cd7bfd
- (BOOL)readFrom:(id)from;	// 0x33cd7811
// declared property getter: - (BOOL)sameParity;	// 0x33cd75c9
// declared property setter: - (void)setHasParameterIsSynthesized:(BOOL)synthesized;	// 0x33cd7bcd
// declared property setter: - (void)setHasSameParity:(BOOL)parity;	// 0x33cd7bed
- (void)setNumbers:(int *)numbers count:(unsigned)count;	// 0x33cd7461
// declared property setter: - (void)setParameterIsSynthesized:(BOOL)synthesized;	// 0x33cd75a5
- (void)setParameters:(float *)parameters count:(unsigned)count;	// 0x33cd7569
// declared property setter: - (void)setPrefix:(id)prefix;	// 0x33cd7c0d
// declared property setter: - (void)setSameParity:(BOOL)parity;	// 0x33cd75ed
// declared property setter: - (void)setSuffix:(id)suffix;	// 0x33cd7c41
// declared property getter: - (id)suffix;	// 0x33cd7c31
- (void)writeTo:(id)to;	// 0x33cd7a7d
@end

