/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "BRControlFactory.h"
#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, ATVDataQuery, ATVDataType;

__attribute__((visibility("hidden")))
@interface ATVRentedMediaProvider : XXUnknownSuperclass <BRProvider, BRSelectionHandler, BRControlFactory> {
	ATVDataType *_mediaType;	// 4 = 0x4
	ATVDataQuery *_dataQuery;	// 8 = 0x8
	NSMutableArray *_rentedMovies;	// 12 = 0xc
}
+ (id)providerWithMediaType:(id)mediaType;	// 0x20e5c9
- (id)init;	// 0x20e615
- (id)initWithMediaType:(id)mediaType;	// 0x20e635
- (void)_accountLoggedOut:(id)anOut;	// 0x20eec9
- (void)_reloadRentals;	// 0x20ea69
- (void)_rentalQueryComplete;	// 0x20ed31
- (id)controlFactory;	// 0x20e901
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x20e905
- (id)dataAtIndex:(long)index;	// 0x20e8c1
- (long)dataCount;	// 0x20e8e1
- (void)dealloc;	// 0x20e7b5
- (BOOL)handleSelectionForControl:(id)control;	// 0x20e981
- (id)hashForDataAtIndex:(long)index;	// 0x20e879
@end

