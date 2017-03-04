//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, TAGPBArray;

@interface TAGPBDescriptor : NSObject <NSCopying>
{
    TAGPBArray *fields_;
    Class messageClass_;
    TAGPBArray *enums_;
    TAGPBArray *extensions_;
    unsigned long long storageSize_;
    _Bool wireFormat_;
    TAGPBArray *extensionRanges_;
}

+ (id)allocDescriptorForClass:(Class)arg1 rootClass:(Class)arg2 fields:(struct TAGPBMessageFieldDescription *)arg3 fieldCount:(unsigned long long)arg4 enums:(struct TAGPBMessageEnumDescription *)arg5 enumCount:(unsigned long long)arg6 ranges:(struct TAGPBMessageExtensionRangeDescription *)arg7 rangeCount:(unsigned long long)arg8 storageSize:(unsigned long long)arg9 wireFormat:(_Bool)arg10;
+ (id)allocDescriptorForClass:(Class)arg1 rootClass:(Class)arg2 fields:(struct TAGPBMessageFieldDescription *)arg3 fieldCount:(unsigned long long)arg4 enums:(struct TAGPBMessageEnumDescription *)arg5 enumCount:(unsigned long long)arg6 ranges:(struct TAGPBMessageExtensionRangeDescription *)arg7 rangeCount:(unsigned long long)arg8 storageSize:(unsigned long long)arg9 wireFormat:(_Bool)arg10 extraTextFormatInfo:(const char *)arg11;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)enumWithName:(id)arg1;
@property(readonly, retain, nonatomic) TAGPBArray *enums; // @synthesize enums=enums_;
@property(readonly, retain, nonatomic) TAGPBArray *extensionRanges; // @synthesize extensionRanges=extensionRanges_;
- (id)extensionWithName:(id)arg1;
- (id)extensionWithNumber:(unsigned int)arg1;
@property(readonly, retain, nonatomic) TAGPBArray *extensions; // @synthesize extensions=extensions_;
- (id)fieldWithName:(id)arg1;
- (id)fieldWithNumber:(unsigned int)arg1;
@property(readonly, retain, nonatomic) TAGPBArray *fields; // @synthesize fields=fields_;
- (id)initWithClass:(Class)arg1 fields:(id)arg2 enums:(id)arg3 extensions:(id)arg4 extensionRanges:(id)arg5 storageSize:(unsigned long long)arg6 wireFormat:(_Bool)arg7;
@property(readonly, nonatomic, getter=isWireFormat) _Bool wireFormat; // @synthesize wireFormat=wireFormat_;
@property(readonly, nonatomic) Class messageClass; // @synthesize messageClass=messageClass_;
@property(readonly, retain, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long storageSize; // @synthesize storageSize=storageSize_;

@end
