//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class NSString;

@interface FIR_CLEARCUTExternalTimestamp : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasTimeMs; // @dynamic hasTimeMs;
@property(nonatomic) _Bool hasUptimeMs; // @dynamic hasUptimeMs;
@property(retain, nonatomic) NSString *source; // @dynamic source;
@property(nonatomic) long long timeMs; // @dynamic timeMs;
@property(nonatomic) long long uptimeMs; // @dynamic uptimeMs;

@end

