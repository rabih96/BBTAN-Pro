//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBRootObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"
#import "TAGPBMutableArrayDelegate.h"

@class NSMutableDictionary, NSString, TAGPBExtensionField, TAGPBFieldDescriptor, TAGPBUnknownFieldSet;

@interface TAGPBGeneratedMessage : TAGPBRootObject <TAGPBMutableArrayDelegate, NSCopying, NSMutableCopying, NSSecureCoding>
{
    TAGPBUnknownFieldSet *unknownFields_;
    NSMutableDictionary *extensionMap_;
    NSMutableDictionary *autocreatedExtensionMap_;
    TAGPBGeneratedMessage *autocreator_;
    TAGPBFieldDescriptor *autocreatorField_;
    TAGPBExtensionField *autocreatorExtension_;
    struct TAGPBGeneratedMessage_Storage *messageStorage_;
    int readOnlyMutex_;
}

+ (_Bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)builder;
+ (id)descriptor;
+ (void)initialize;
+ (id)message;
+ (id)newMessageWithAutocreator:(id)arg1 extension:(id)arg2;
+ (id)newMessageWithAutocreator:(id)arg1 field:(id)arg2;
+ (id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
- (void)addExtension:(id)arg1 value:(id)arg2;
- (id)build;
- (id)builder;
- (void)clear;
- (void)clearAutocreator;
- (void)clearExtension:(id)arg1;
- (void)copyFieldsInto:(id)arg1 zone:(struct _NSZone *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (void)dealloc;
- (id)delimitedData;
@property(readonly, copy) NSString *description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionsCurrentlySet;
- (unsigned long long)extensionsSerializedSize;
- (id)getExistingExtension:(id)arg1;
- (id)getExtension:(id)arg1;
- (_Bool)hasExtension:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)internalClear;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isInitialized) _Bool initialized;
- (_Bool)isInitialized:(id)arg1;
- (void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeFrom:(id)arg1;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeUnknownFields:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableUnknownFields;
- (void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2;
- (_Bool)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned int)arg3;
- (void)pbMutableArray:(id)arg1 willAddElements:(unsigned long long)arg2;
- (unsigned long long)serializedSize;
- (void)setExtension:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3;
- (void)setExtension:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) TAGPBUnknownFieldSet *unknownFields; // @synthesize unknownFields=unknownFields_;
- (id)sortedExtensionsInUse;
- (_Bool)wasAutocreatedBy:(id)arg1;
- (void)writeDelimitedToCodedOutputStream:(id)arg1;
- (void)writeDelimitedToOutputStream:(id)arg1;
- (void)writeExtensionsToCodedOutputStream:(id)arg1 range:(id)arg2;
- (void)writeField:(id)arg1 toCodedOutputStream:(id)arg2;
- (void)writeToCodedOutputStream:(id)arg1;
- (void)writeToOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

