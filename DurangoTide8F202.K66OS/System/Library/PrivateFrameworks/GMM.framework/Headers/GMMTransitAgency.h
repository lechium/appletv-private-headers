/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMTransitAgency : PBCodable {
@private
	NSString *_name;	// 4 = 0x4
	NSString *_mainUrl;	// 8 = 0x8
	NSString *_phone;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasMainUrl;	// G=0x30a7be0d; 
@property(readonly, assign, nonatomic) BOOL hasPhone;	// G=0x30a7be21; 
@property(retain, nonatomic) NSString *mainUrl;	// G=0x30a7be45; S=0x30a7c265; @synthesize=_mainUrl
@property(retain, nonatomic) NSString *name;	// G=0x30a7be55; S=0x30a7c23d; @synthesize=_name
@property(retain, nonatomic) NSString *phone;	// G=0x30a7be35; S=0x30a7c28d; @synthesize=_phone
- (id)init;	// 0x30a7be65
- (void)dealloc;	// 0x30a7c1d1
- (id)description;	// 0x30a7bf15
- (id)description;	// 0x30a5e671
- (id)dictionaryRepresentation;	// 0x30a7be91
// declared property getter: - (BOOL)hasMainUrl;	// 0x30a7be0d
// declared property getter: - (BOOL)hasPhone;	// 0x30a7be21
// declared property getter: - (id)mainUrl;	// 0x30a7be45
// declared property getter: - (id)name;	// 0x30a7be55
// declared property getter: - (id)phone;	// 0x30a7be35
- (BOOL)readFrom:(id)from;	// 0x30a7c0b5
// declared property setter: - (void)setMainUrl:(id)url;	// 0x30a7c265
// declared property setter: - (void)setName:(id)name;	// 0x30a7c23d
// declared property setter: - (void)setPhone:(id)phone;	// 0x30a7c28d
- (void)writeTo:(id)to;	// 0x30a7c02d
@end

