/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMediaCollection.h"

@protocol BRMediaProvider;

__attribute__((visibility("hidden")))
@interface BRBaseMediaCollection : XXUnknownSuperclass <BRMediaCollection> {
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x274fe9
- (id)artist;	// 0x275135
- (id)artistForSorting;	// 0x275139
- (id)assetEnumerator;	// 0x275105
- (id)childCollections;	// 0x2750c1
- (id)collectionID;	// 0x2750e5
- (id)collectionType;	// 0x2750c9
- (int)count;	// 0x275341
- (id)date;	// 0x275315
- (void)dealloc;	// 0x27503d
- (long)duration;	// 0x27514d
- (unsigned)hash;	// 0x275089
- (id)imageProxy;	// 0x2750fd
- (BOOL)isAvailable;	// 0x275269
- (BOOL)isCompilation;	// 0x27512d
- (BOOL)isHidden;	// 0x27530d
- (BOOL)isLocal;	// 0x275265
- (BOOL)isSingleArtistCompilation;	// 0x275131
- (BOOL)isValid;	// 0x2750e9
- (id)mediaAssets;	// 0x275101
- (id)mediaObjectID;	// 0x2750ed
- (id)mediaType;	// 0x275249
- (id)mediaTypes;	// 0x275151
- (id)parentCollection;	// 0x2750c5
- (void)performSelector:(SEL)selector target:(id)target;	// 0x275319
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x27532d
- (id)provider;	// 0x2750b1
- (id)title;	// 0x27513d
- (id)titleForSorting;	// 0x275141
- (id)titleForSortingNoDefault;	// 0x275149
- (id)titleNoDefault;	// 0x275145
- (void)willBeDeleted;	// 0x275311
@end

