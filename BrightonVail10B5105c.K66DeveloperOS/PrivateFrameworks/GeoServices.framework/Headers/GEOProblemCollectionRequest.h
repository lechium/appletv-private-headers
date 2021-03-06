/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray, NSString;

@interface GEOProblemCollectionRequest : PBRequest {
	NSString *_countryCode;	// 4 = 0x4
	NSString *_hwMachine;	// 8 = 0x8
	NSString *_inputLanguage;	// 12 = 0xc
	NSMutableArray *_requestElements;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *countryCode;	// G=0x339a9001; S=0x339a9011; @synthesize=_countryCode
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x339a8619; 
@property(readonly, assign, nonatomic) BOOL hasHwMachine;	// G=0x339a8601; 
@property(readonly, assign, nonatomic) BOOL hasInputLanguage;	// G=0x339a8631; 
@property(retain, nonatomic) NSString *hwMachine;	// G=0x339a8fe1; S=0x339a8ff1; @synthesize=_hwMachine
@property(retain, nonatomic) NSString *inputLanguage;	// G=0x339a9021; S=0x339a9031; @synthesize=_inputLanguage
@property(retain, nonatomic) NSMutableArray *requestElements;	// G=0x339a8fc1; S=0x339a8fd1; @synthesize=_requestElements
- (void)addRequestElement:(id)element;	// 0x339a8555
- (void)clearRequestElements;	// 0x339a8535
- (void)copyTo:(id)to;	// 0x339a8d05
// declared property getter: - (id)countryCode;	// 0x339a9001
- (void)dealloc;	// 0x339a84b5
- (id)description;	// 0x339a8649
- (id)dictionaryRepresentation;	// 0x339a86b9
// declared property getter: - (BOOL)hasCountryCode;	// 0x339a8619
// declared property getter: - (BOOL)hasHwMachine;	// 0x339a8601
// declared property getter: - (BOOL)hasInputLanguage;	// 0x339a8631
- (unsigned)hash;	// 0x339a8f45
// declared property getter: - (id)hwMachine;	// 0x339a8fe1
// declared property getter: - (id)inputLanguage;	// 0x339a9021
- (BOOL)isEqual:(id)equal;	// 0x339a8e45
- (BOOL)readFrom:(id)from;	// 0x339a8b25
- (id)requestElementAtIndex:(unsigned)index;	// 0x339a85e1
// declared property getter: - (id)requestElements;	// 0x339a8fc1
- (unsigned)requestElementsCount;	// 0x339a85c1
- (unsigned)requestTypeCode;	// 0x339a8ce1
- (Class)responseClass;	// 0x339a8ce9
// declared property setter: - (void)setCountryCode:(id)code;	// 0x339a9011
// declared property setter: - (void)setHwMachine:(id)machine;	// 0x339a8ff1
// declared property setter: - (void)setInputLanguage:(id)language;	// 0x339a9031
// declared property setter: - (void)setRequestElements:(id)elements;	// 0x339a8fd1
- (void)writeTo:(id)to;	// 0x339a8b31
@end

