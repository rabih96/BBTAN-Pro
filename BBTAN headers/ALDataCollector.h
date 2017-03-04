//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALSdk, NSDictionary;

@interface ALDataCollector : NSObject
{
    ALSdk *_sdk;
    NSDictionary *_cachedDeviceInformation;
    NSDictionary *_cachedAppInformation;
}

- (void).cxx_destruct;
- (id)addEphemeralDeviceData:(id)arg1;
- (id)appInformation;
@property(retain, nonatomic) NSDictionary *cachedAppInformation; // @synthesize cachedAppInformation=_cachedAppInformation;
@property(retain, nonatomic) NSDictionary *cachedDeviceInformation; // @synthesize cachedDeviceInformation=_cachedDeviceInformation;
- (id)collectCarrierCountryCode;
- (id)collectCarrierName;
- (id)collectIdfa;
- (id)collectModelRevision;
- (id)collectTimeZoneOffset;
- (id)collectUserAgent;
- (id)deviceInformation;
- (id)initWithSdk:(id)arg1;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;

@end

