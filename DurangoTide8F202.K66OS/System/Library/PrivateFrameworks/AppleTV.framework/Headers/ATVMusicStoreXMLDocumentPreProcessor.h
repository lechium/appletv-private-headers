/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRURLDocumentManager;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreXMLDocumentPreProcessor : NSObject {
@private
	BRURLDocumentManager *_includesManager;	// 4 = 0x4
}
+ (id)processDocument:(id)document;	// 0x336c5e4d
- (id)_dictionaryFromElement:(id)element;	// 0x336c5201
- (BOOL)_evaluateConditional:(id)conditional merchant:(id)merchant;	// 0x336c5c5d
- (BOOL)_evaluateKey:(id)key operator:(id)anOperator value:(id)value merchant:(id)merchant;	// 0x336c50c1
- (BOOL)_processConditionalGroupDictionary:(id)dictionary merchant:(id)merchant;	// 0x336c5d39
- (void)_processConditionalGroupElement:(id)element merchant:(id)merchant;	// 0x336c53cd
- (void)_processConditionalGroups:(id)groups merchant:(id)merchant;	// 0x336c54c5
- (BOOL)_processConditionalResult:(BOOL)result isAnd:(BOOL)anAnd isOr:(BOOL)anOr isNot:(BOOL)aNot;	// 0x336c4fc1
- (id)_processDocument:(id)document;	// 0x336c5689
- (id)_processIncludeDictionary:(id)dictionary representingElement:(id)element;	// 0x336c52c9
- (id)_processIncludeElement:(id)element;	// 0x336c5499
- (void)_processIncludeRequests:(id)requests;	// 0x336c58f9
- (void)_processIncludes:(id)includes;	// 0x336c5519
- (void)_removeElement:(id)element;	// 0x336c57fd
- (void)_replaceElement:(id)element withContainedElementNamed:(id)containedElementNamed;	// 0x336c4fd9
- (void)_replaceElement:(id)element withElement:(id)element2;	// 0x336c51b1
- (void)dealloc;	// 0x336c57b5
@end

