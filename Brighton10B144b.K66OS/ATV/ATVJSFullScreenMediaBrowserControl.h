/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVMerchant, ATVFullScreenPhotoBrowserController;

__attribute__((visibility("hidden")))
@interface ATVJSFullScreenMediaBrowserControl : XXUnknownSuperclass {
	int _type;	// 4 = 0x4
	id _jsInfo;	// 8 = 0x8
	ATVFullScreenPhotoBrowserController *_controller;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
}
@property(retain, nonatomic) ATVFullScreenPhotoBrowserController *controller;	// G=0x3fe12d; S=0x3fccf1; @synthesize=_controller
@property(retain) id jsInfo;	// G=0x3fe109; S=0x3fe11d; @synthesize=_jsInfo
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x3fe13d; S=0x3fe14d; @synthesize=_merchant
@property(assign, nonatomic) int type;	// G=0x3fe0e9; S=0x3fe0f9; @synthesize=_type
- (id)initWithMerchant:(id)merchant;	// 0x3fcbed
// declared property getter: - (id)controller;	// 0x3fe12d
- (void)dealloc;	// 0x3fcc35
- (void)hide;	// 0x3fe079
// declared property getter: - (id)jsInfo;	// 0x3fe109
// declared property getter: - (id)merchant;	// 0x3fe13d
- (void)selectItemAtIndex:(int)index;	// 0x3fcca1
// declared property setter: - (void)setController:(id)controller;	// 0x3fccf1
// declared property setter: - (void)setJsInfo:(id)info;	// 0x3fe11d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3fe14d
// declared property setter: - (void)setType:(int)type;	// 0x3fe0f9
- (void)showWithType:(int)type couplingObject:(id)object callback:(id)callback propertyCallback:(id)callback4 completionCallback:(id)callback5;	// 0x3fcd59
// declared property getter: - (int)type;	// 0x3fe0e9
- (void)updateItemMetadata:(id)metadata forPhotoWithID:(id)anId;	// 0x3fdc95
- (void)updateItemMetadataLiked:(id)liked forPhotoWithID:(id)anId;	// 0x3fde11
- (void)updateItems:(id)items initialSelection:(int)selection;	// 0x3fdc65
@end
