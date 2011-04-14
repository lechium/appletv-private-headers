/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UITextChecker : NSObject {
@private
	id _checker;	// 4 = 0x4
	id _reserved;	// 8 = 0x8
	int _usdt;	// 12 = 0xc
}
@property(retain) id ignoredWords;	// G=0x3082e575; S=0x3082e521; converted property
+ (BOOL)_forgetWord:(id)word inDictionary:(id)dictionary;	// 0x3082f185
+ (BOOL)_isWord:(id)word inDictionary:(id)dictionary;	// 0x306ced59
+ (BOOL)_learnWord:(id)word inDictionary:(id)dictionary;	// 0x3082f209
+ (void)_setWords:(id)words inDictionary:(id)dictionary;	// 0x3082efd9
+ (id)_wordsInDictionary:(id)dictionary;	// 0x3082f289
+ (id)availableLanguages;	// 0x3082ec35
+ (CFSetRef)createDictHashTable:(BOOL)table;	// 0x306cf229
+ (id)dictionaryInfo:(id)info;	// 0x306cedb9
+ (BOOL)hasLearnedWord:(id)word;	// 0x3082e4f1
+ (void)learnWord:(id)word;	// 0x3082e509
+ (id)openUserDictionary:(id)dictionary;	// 0x306ceea1
+ (int)uniqueSpellDocumentTag;	// 0x306cc50d
+ (void)unlearnWord:(id)word;	// 0x3082e4d9
- (id)init;	// 0x3082e611
- (void)initGlobals;	// 0x306cc76d
- (void)initUserAddressBook;	// 0x306cc92d
- (void)initUserDictionaries;	// 0x306cc809
- (id)_checker;	// 0x306ce8b5
- (NSRange)_chunkAndCheckGrammarInString:(id)string language:(id)language usingChecker:(id)checker details:(id *)details;	// 0x3082f3a1
- (NSRange)_chunkAndFindMisspelledWordInString:(id)string language:(id)language learnedDictionaries:(id)dictionaries wordCount:(int *)count correction:(id *)correction usingChecker:(id)checker;	// 0x306ceaad
- (BOOL)_doneLoading;	// 0x306ce4dd
- (id)_initWithAsynchronousLoading:(BOOL)asynchronousLoading;	// 0x306cc451
- (id)_nameOfDictionaryForDocumentTag:(int)documentTag;	// 0x306cc8e5
- (void)_setDocumentDictionaryName:(id)name;	// 0x306cea89
- (void)_setLanguageDictionaryName:(id)name;	// 0x306cea65
- (int)adjustOffsetToNextWordBoundaryInString:(id)string startingAt:(int)at;	// 0x306ce909
- (NSRange)checkGrammarOfString:(id)string startingAt:(int)at language:(id)language wrap:(BOOL)wrap details:(id *)details;	// 0x3082f501
- (NSRange)checkSpellingOfString:(id)string startingAt:(int)at language:(id)language wrap:(BOOL)wrap correction:(id *)correction;	// 0x306ce515
- (id)completionsForPartialWordRange:(NSRange)partialWordRange inString:(id)string language:(id)language;	// 0x3082ea5d
- (id)correctionForWordRange:(NSRange)wordRange inString:(id)string language:(id)language;	// 0x3082e6c9
- (void)dealloc;	// 0x3082e629
- (id)guessesForWordRange:(NSRange)wordRange inString:(id)string language:(id)language;	// 0x3082f8e9
- (void)ignoreWord:(id)word;	// 0x3082e5bd
// converted property getter: - (id)ignoredWords;	// 0x3082e575
- (BOOL)isWordInUserDictionaries:(id)userDictionaries caseSensitive:(BOOL)sensitive;	// 0x306cec65
- (NSRange)rangeOfMisspelledWordInString:(id)string range:(NSRange)range startingAt:(int)at wrap:(BOOL)wrap language:(id)language;	// 0x306d4c75
// converted property setter: - (void)setIgnoredWords:(id)words;	// 0x3082e521
- (id)stringForInputString:(id)inputString language:(id)language;	// 0x3082e759
- (id)suggestWordInLanguage:(id)language;	// 0x3082e8d9
@end

