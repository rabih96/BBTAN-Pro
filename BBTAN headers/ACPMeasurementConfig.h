//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class GSDK_PBMutableArray, NSString;

@interface ACPMeasurementConfig : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GSDK_PBMutableArray *audiencesArray; // @dynamic audiencesArray;
@property(nonatomic) int builderVersion; // @dynamic builderVersion;
@property(retain, nonatomic) GSDK_PBMutableArray *eventConfigArray; // @dynamic eventConfigArray;
@property(retain, nonatomic) NSString *gmpAppId; // @dynamic gmpAppId;
@property(nonatomic) _Bool hasAudiencesArray; // @dynamic hasAudiencesArray;
@property(nonatomic) _Bool hasBuilderVersion; // @dynamic hasBuilderVersion;
@property(nonatomic) _Bool hasEventConfigArray; // @dynamic hasEventConfigArray;
@property(nonatomic) _Bool hasGmpAppId; // @dynamic hasGmpAppId;
@property(nonatomic) _Bool hasSettingsArray; // @dynamic hasSettingsArray;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) GSDK_PBMutableArray *settingsArray; // @dynamic settingsArray;
@property(nonatomic) long long version; // @dynamic version;

@end

