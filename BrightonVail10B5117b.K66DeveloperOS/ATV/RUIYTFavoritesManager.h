/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import "BRSingleton.h"

@class NSDictionary, RUIYTDocumentLoader, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RUIYTFavoritesManager : BRSingleton <RUIYTDocumentLoaderDelegate> {
	NSDictionary *_favorites;	// 4 = 0x4
	RUIYTDocumentLoader *_documentLoader;	// 8 = 0x8
	BOOL _isDirty;	// 12 = 0xc
	NSMutableDictionary *_loadingFavorites;	// 16 = 0x10
}
@property(retain, nonatomic) RUIYTDocumentLoader *documentLoader;	// G=0x3e8cdd; S=0x3e8ced; @synthesize=_documentLoader
@property(copy, nonatomic) NSDictionary *favorites;	// G=0x3e8cb9; S=0x3e8ccd; @synthesize=_favorites
@property(assign, nonatomic) BOOL isDirty;	// G=0x3e8d15; S=0x3e8d25; @synthesize=_isDirty
@property(retain, nonatomic) NSMutableDictionary *loadingFavorites;	// G=0x3e8d35; S=0x3e8d45; @synthesize=_loadingFavorites
+ (void)setSingleton:(id)singleton;	// 0x3e81f1
+ (id)singleton;	// 0x3e81e1
- (id)init;	// 0x3e8215
- (void).cxx_destruct;	// 0x3e8d6d
- (void)_accountActivity:(id)activity;	// 0x3e8c29
- (void)dealloc;	// 0x3e8329
// declared property getter: - (id)documentLoader;	// 0x3e8cdd
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x3e88a1
// declared property getter: - (id)favorites;	// 0x3e8cb9
- (id)findAssetWithID:(id)anId;	// 0x3e8839
// declared property getter: - (BOOL)isDirty;	// 0x3e8d15
// declared property getter: - (id)loadingFavorites;	// 0x3e8d35
- (void)markAsDirty;	// 0x3e8459
- (void)purge;	// 0x3e83c9
- (void)reload;	// 0x3e8621
- (void)removeAssetWithID:(id)anId;	// 0x3e8519
// declared property setter: - (void)setDocumentLoader:(id)loader;	// 0x3e8ced
// declared property setter: - (void)setFavorites:(id)favorites;	// 0x3e8ccd
// declared property setter: - (void)setIsDirty:(BOOL)dirty;	// 0x3e8d25
// declared property setter: - (void)setLoadingFavorites:(id)favorites;	// 0x3e8d45
@end

