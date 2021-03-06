//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALTaskFetchNextAd.h"

@interface ALTaskFetchNextNativeAd : ALTaskFetchNextAd
{
    unsigned long long _adsToLoadCount;
    id <ALNativeAdLoadDelegate> _nativeAdLoadDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long adsToLoadCount; // @synthesize adsToLoadCount=_adsToLoadCount;
- (id)createAdEndpointBase;
- (id)createRenderTaskWithResponse:(id)arg1;
- (id)initWithSdk:(id)arg1 adsToLoadCount:(unsigned long long)arg2 nativeAdLoadDelegate:(id)arg3;
@property(retain, nonatomic) id <ALNativeAdLoadDelegate> nativeAdLoadDelegate; // @synthesize nativeAdLoadDelegate=_nativeAdLoadDelegate;
- (void)notifyLoadDelegateOfFailureWithResponseCode:(long long)arg1;
- (void)populateTimingData:(id)arg1;
- (void)populateTypeSpecificParameters:(id)arg1;

@end

