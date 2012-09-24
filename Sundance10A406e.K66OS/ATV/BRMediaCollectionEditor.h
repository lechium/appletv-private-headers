/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol BRMediaCollection;

__attribute__((visibility("hidden")))
@interface BRMediaCollectionEditor : XXUnknownSuperclass {
	id<BRMediaCollection> _collection;	// 4 = 0x4
}
+ (id)editorForCollection:(id)collection;	// 0x299389
+ (void)setImplementationClass:(Class)aClass;	// 0x2992d5
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x2992e5
- (void)addMediaObjectToCollection:(id)collection;	// 0x2993d5
- (void)clearCollection;	// 0x2993dd
- (id)collection;	// 0x2993e1
- (id)collectionCopyWithName:(id)name;	// 0x2993d1
- (void)dealloc;	// 0x29933d
- (void)removeMediaObjectFromCollection:(id)collection;	// 0x2993d9
@end
