/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRXMLSchema : XXUnknownSuperclass {
	xmlSchema *_schema;	// 4 = 0x4
}
@property(assign, nonatomic) xmlSchema *schema;	// G=0x39370d; S=0x39371d; @synthesize=_schema
- (id)initWithSchemaData:(id)schemaData;	// 0x392de5
- (BOOL)_validateWithError:(id *)error withBlock:(id)block;	// 0x3931e9
- (void)dealloc;	// 0x393149
// declared property getter: - (xmlSchema *)schema;	// 0x39370d
// declared property setter: - (void)setSchema:(xmlSchema *)schema;	// 0x39371d
- (BOOL)validateDocument:(id)document error:(id *)error;	// 0x39338d
- (BOOL)validateElement:(id)element error:(id *)error;	// 0x39354d
@end

