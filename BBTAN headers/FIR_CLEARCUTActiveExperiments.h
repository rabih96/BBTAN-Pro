//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class GSDK_PBMutableArray;

@interface FIR_CLEARCUTActiveExperiments : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GSDK_PBMutableArray *clientAlteringExperimentArray; // @dynamic clientAlteringExperimentArray;
@property(retain, nonatomic) GSDK_PBMutableArray *gwsExperimentArray; // @dynamic gwsExperimentArray;
@property(nonatomic) _Bool hasClientAlteringExperimentArray; // @dynamic hasClientAlteringExperimentArray;
@property(nonatomic) _Bool hasGwsExperimentArray; // @dynamic hasGwsExperimentArray;
@property(nonatomic) _Bool hasOtherExperimentArray; // @dynamic hasOtherExperimentArray;
@property(nonatomic) _Bool hasPlayExperimentArray; // @dynamic hasPlayExperimentArray;
@property(nonatomic) _Bool hasUnsupportedPlayExperimentArray; // @dynamic hasUnsupportedPlayExperimentArray;
@property(retain, nonatomic) GSDK_PBMutableArray *otherExperimentArray; // @dynamic otherExperimentArray;
@property(retain, nonatomic) GSDK_PBMutableArray *playExperimentArray; // @dynamic playExperimentArray;
@property(retain, nonatomic) GSDK_PBMutableArray *unsupportedPlayExperimentArray; // @dynamic unsupportedPlayExperimentArray;

@end

