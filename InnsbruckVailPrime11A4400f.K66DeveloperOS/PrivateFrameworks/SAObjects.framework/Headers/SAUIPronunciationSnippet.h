/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAUISnippet.h"

@class NSString, NSArray;

@interface SAUIPronunciationSnippet : SAUISnippet {
}
@property(copy, nonatomic) NSString *interactionId;	// G=0x327050e1; S=0x327050fd; 
@property(copy, nonatomic) NSString *orthography;	// G=0x3270514d; S=0x32705169; 
@property(copy, nonatomic) NSArray *pronunciations;	// G=0x327051b9; S=0x32705221; 
@property(copy, nonatomic) NSArray *selectNoneCommands;	// G=0x32705289; S=0x327052e1; 
@property(copy, nonatomic) NSString *selectNoneText;	// G=0x32705349; S=0x32705365; 
+ (id)pronunciationSnippet;	// 0x32705051
+ (id)pronunciationSnippetWithDictionary:(id)dictionary context:(id)context;	// 0x32705095
- (id)encodedClassName;	// 0x32705045
- (id)groupIdentifier;	// 0x32705035
// declared property getter: - (id)interactionId;	// 0x327050e1
// declared property getter: - (id)orthography;	// 0x3270514d
// declared property getter: - (id)pronunciations;	// 0x327051b9
// declared property getter: - (id)selectNoneCommands;	// 0x32705289
// declared property getter: - (id)selectNoneText;	// 0x32705349
// declared property setter: - (void)setInteractionId:(id)anId;	// 0x327050fd
// declared property setter: - (void)setOrthography:(id)orthography;	// 0x32705169
// declared property setter: - (void)setPronunciations:(id)pronunciations;	// 0x32705221
// declared property setter: - (void)setSelectNoneCommands:(id)commands;	// 0x327052e1
// declared property setter: - (void)setSelectNoneText:(id)text;	// 0x32705365
@end
