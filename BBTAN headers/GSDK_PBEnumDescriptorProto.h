//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class GSDK_PBEnumOptions, GSDK_PBMutableArray, NSString;

@interface GSDK_PBEnumDescriptorProto : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool hasValueArray; // @dynamic hasValueArray;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GSDK_PBEnumOptions *options; // @dynamic options;
@property(retain, nonatomic) GSDK_PBMutableArray *valueArray; // @dynamic valueArray;

@end

