/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMDirectionsStepCue : PBCodable {
@private
	int _type;	// 4 = 0x4
	BOOL _hasType;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_iconUrl;	// 16 = 0x10
	NSString *_iconText;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL hasIconText;	// G=0x32bb0d31; 
@property(readonly, assign, nonatomic) BOOL hasIconUrl;	// G=0x32bb0d1d; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x32bb0d09; 
@property(readonly, assign, nonatomic) BOOL hasType;	// G=0x32bb0d75; @synthesize=_hasType
@property(retain, nonatomic) NSString *iconText;	// G=0x32bb0d45; S=0x32bb12c9; @synthesize=_iconText
@property(retain, nonatomic) NSString *iconUrl;	// G=0x32bb0d55; S=0x32bb12a1; @synthesize=_iconUrl
@property(retain, nonatomic) NSString *name;	// G=0x32bb0d65; S=0x32bb1279; @synthesize=_name
@property(assign, nonatomic) int type;	// G=0x32bb0d85; S=0x32bb0ced; @synthesize=_type
- (id)init;	// 0x32bb0d95
- (void)dealloc;	// 0x32bb120d
- (id)description;	// 0x32bb0ea5
- (id)dictionaryRepresentation;	// 0x32bb0dc1
// declared property getter: - (BOOL)hasIconText;	// 0x32bb0d31
// declared property getter: - (BOOL)hasIconUrl;	// 0x32bb0d1d
// declared property getter: - (BOOL)hasName;	// 0x32bb0d09
// declared property getter: - (BOOL)hasType;	// 0x32bb0d75
// declared property getter: - (id)iconText;	// 0x32bb0d45
// declared property getter: - (id)iconUrl;	// 0x32bb0d55
// declared property getter: - (id)name;	// 0x32bb0d65
- (BOOL)readFrom:(id)from;	// 0x32bb10c5
// declared property setter: - (void)setIconText:(id)text;	// 0x32bb12c9
// declared property setter: - (void)setIconUrl:(id)url;	// 0x32bb12a1
// declared property setter: - (void)setName:(id)name;	// 0x32bb1279
// declared property setter: - (void)setType:(int)type;	// 0x32bb0ced
// declared property getter: - (int)type;	// 0x32bb0d85
- (void)writeTo:(id)to;	// 0x32bb0fed
@end

