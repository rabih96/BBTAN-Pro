//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class GSDK_PBDescriptor, GSDK_PBExtensionDescriptor;

@interface GSDK_PBExtensionField : NSObject <NSCopying>
{
    struct PBExtensionDescription *description_;
    CDUnion_cfc866cd defaultPBValue_;
    Class messageOrGroupClass_;
    GSDK_PBExtensionDescriptor *descriptor_;
    GSDK_PBDescriptor *containingType_;
}

- (long long)compareByFieldNumber:(id)arg1;
- (unsigned long long)computePBSerializedSizeIncludingTag:(CDUnion_c05604a2)arg1;
- (unsigned long long)computePBSerializedSizeNoTag:(CDUnion_c05604a2)arg1;
- (unsigned long long)computePBSerializedSizesIncludingTags:(id)arg1;
- (unsigned long long)computeSerializedSizeIncludingTag:(id)arg1;
@property(readonly, nonatomic) GSDK_PBDescriptor *containingType; // @synthesize containingType=containingType_;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly, nonatomic) id defaultValue;
- (id)description;
@property(readonly, nonatomic) GSDK_PBExtensionDescriptor *descriptor; // @synthesize descriptor=descriptor_;
@property(readonly, nonatomic) int fieldNumber;
- (id)init;
- (id)initWithDescription:(struct PBExtensionDescription *)arg1;
@property(readonly, nonatomic) _Bool isRepeated;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 builder:(id)arg3;
- (id)readSingleValueFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 existingValue:(id)arg3;
@property(readonly, nonatomic) int wireType;
- (void)writePBValue:(CDUnion_c05604a2)arg1 includingTagToCodedOutputStream:(id)arg2;
- (void)writePBValue:(CDUnion_c05604a2)arg1 noTagToCodedOutputStream:(id)arg2;
- (void)writePBValues:(id)arg1 includingTagsToCodedOutputStream:(id)arg2;
- (void)writeValue:(id)arg1 includingTagToCodedOutputStream:(id)arg2;

@end

