/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface LBSGAppProfile : PBCodable {
	NSString *_appName;	// 4 = 0x4
	NSString *_appKey;	// 8 = 0x8
	BOOL _hasRequestType;	// 12 = 0xc
	int _requestType;	// 16 = 0x10
	BOOL _hasSearchType;	// 20 = 0x14
	int _searchType;	// 24 = 0x18
	NSString *_searchTerm;	// 28 = 0x1c
	BOOL _hasZoomLevel;	// 32 = 0x20
	int _zoomLevel;	// 36 = 0x24
}
@property(retain, nonatomic) NSString *appKey;	// G=0x33cd8f39; S=0x33cd8f49; @synthesize=_appKey
@property(retain, nonatomic) NSString *appName;	// G=0x33cd8f05; S=0x33cd8f15; @synthesize=_appName
@property(readonly, assign, nonatomic) BOOL hasAppKey;	// G=0x33cd89d1; 
@property(readonly, assign, nonatomic) BOOL hasAppName;	// G=0x33cd89b9; 
@property(assign, nonatomic) BOOL hasRequestType;	// G=0x33cd8f6d; S=0x33cd8f7d; @synthesize=_hasRequestType
@property(readonly, assign, nonatomic) BOOL hasSearchTerm;	// G=0x33cd8a31; 
@property(assign, nonatomic) BOOL hasSearchType;	// G=0x33cd8f9d; S=0x33cd8fad; @synthesize=_hasSearchType
@property(assign, nonatomic) BOOL hasZoomLevel;	// G=0x33cd9001; S=0x33cd9011; @synthesize=_hasZoomLevel
@property(assign, nonatomic) int requestType;	// G=0x33cd8f8d; S=0x33cd89e9; @synthesize=_requestType
@property(retain, nonatomic) NSString *searchTerm;	// G=0x33cd8fcd; S=0x33cd8fdd; @synthesize=_searchTerm
@property(assign, nonatomic) int searchType;	// G=0x33cd8fbd; S=0x33cd8a0d; @synthesize=_searchType
@property(assign, nonatomic) int zoomLevel;	// G=0x33cd9021; S=0x33cd8a49; @synthesize=_zoomLevel
// declared property getter: - (id)appKey;	// 0x33cd8f39
// declared property getter: - (id)appName;	// 0x33cd8f05
- (void)dealloc;	// 0x33cd894d
- (id)description;	// 0x33cd8a6d
- (id)dictionaryRepresentation;	// 0x33cd8add
// declared property getter: - (BOOL)hasAppKey;	// 0x33cd89d1
// declared property getter: - (BOOL)hasAppName;	// 0x33cd89b9
// declared property getter: - (BOOL)hasRequestType;	// 0x33cd8f6d
// declared property getter: - (BOOL)hasSearchTerm;	// 0x33cd8a31
// declared property getter: - (BOOL)hasSearchType;	// 0x33cd8f9d
// declared property getter: - (BOOL)hasZoomLevel;	// 0x33cd9001
- (BOOL)readFrom:(id)from;	// 0x33cd8c91
// declared property getter: - (int)requestType;	// 0x33cd8f8d
// declared property getter: - (id)searchTerm;	// 0x33cd8fcd
// declared property getter: - (int)searchType;	// 0x33cd8fbd
// declared property setter: - (void)setAppKey:(id)key;	// 0x33cd8f49
// declared property setter: - (void)setAppName:(id)name;	// 0x33cd8f15
// declared property setter: - (void)setHasRequestType:(BOOL)type;	// 0x33cd8f7d
// declared property setter: - (void)setHasSearchType:(BOOL)type;	// 0x33cd8fad
// declared property setter: - (void)setHasZoomLevel:(BOOL)level;	// 0x33cd9011
// declared property setter: - (void)setRequestType:(int)type;	// 0x33cd89e9
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x33cd8fdd
// declared property setter: - (void)setSearchType:(int)type;	// 0x33cd8a0d
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x33cd8a49
- (void)writeTo:(id)to;	// 0x33cd8df5
// declared property getter: - (int)zoomLevel;	// 0x33cd9021
@end
