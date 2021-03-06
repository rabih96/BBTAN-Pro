//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALTask.h"

@class NSDictionary;

@interface ALTaskRenderNativeAd : ALTask
{
    id <ALNativeAdLoadDelegate> _nativeAdLoadDelegate;
    NSDictionary *_adResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *adResponse; // @synthesize adResponse=_adResponse;
- (id)clickURLWithSettings:(id)arg1 clCode:(id)arg2 eventID:(id)arg3;
- (id)initWithSdk:(id)arg1 adResponse:(id)arg2 nativeAdLoadDelegate:(id)arg3;
@property(retain, nonatomic) id <ALNativeAdLoadDelegate> nativeAdLoadDelegate; // @synthesize nativeAdLoadDelegate=_nativeAdLoadDelegate;
- (void)performRender:(id)arg1;
- (void)run;
- (id)simpURLWithSettings:(id)arg1 clCode:(id)arg2;
- (id)videoEndURLWithSettings:(id)arg1 clCode:(id)arg2;
- (id)videoStartURLWithSettings:(id)arg1 clCode:(id)arg2;

@end

