//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALTask.h"

@class NSArray;

@interface ALTaskCacheNativeAdBase : ALTask
{
    id <ALNativeAdPrecacheDelegate> _precacheDelegate;
    NSArray *_nativeAdsToPopulate;
}

- (void).cxx_destruct;
- (id)cacheFile:(id)arg1 withFileManager:(id)arg2;
- (id)initWithSdk:(id)arg1 nativeAdsToPopulate:(id)arg2 precacheDelegate:(id)arg3;
@property(retain, nonatomic) NSArray *nativeAdsToPopulate; // @synthesize nativeAdsToPopulate=_nativeAdsToPopulate;
@property(retain, nonatomic) id <ALNativeAdPrecacheDelegate> precacheDelegate; // @synthesize precacheDelegate=_precacheDelegate;
- (void)run;

@end

