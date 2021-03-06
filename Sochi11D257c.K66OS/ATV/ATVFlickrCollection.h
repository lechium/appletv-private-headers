/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVInternetPhotosCollection.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFlickrCollection : ATVInternetPhotosCollection {
	NSString *_keyImageFlickrIdentifier;	// 64 = 0x40
}
@property(retain) NSString *keyImageFlickrIdentifier;	// G=0x1a0535; S=0x1a0611; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x1a03e5
- (id)archivableCollectionInfo;	// 0x1a06f5
- (id)collectionType;	// 0x1a082d
- (void)dealloc;	// 0x1a04e9
// converted property getter: - (id)keyImageFlickrIdentifier;	// 0x1a0535
- (id)mediaTypes;	// 0x1a07e9
// converted property setter: - (void)setKeyImageFlickrIdentifier:(id)identifier;	// 0x1a0611
@end

