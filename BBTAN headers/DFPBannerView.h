//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADBannerView.h"

#import "DFPCustomRenderedAdEventHandler.h"
#import "GADLoadable.h"

@class GADCorrelator, GADVideoController, NSArray, NSString;

@interface DFPBannerView : GADBannerView <GADLoadable, DFPCustomRenderedAdEventHandler>
{
    unsigned int _previousCorrelationID;
    id <GADAppEventDelegate> _appEventDelegate;
    NSArray *_validAdSizes;
    id <DFPCustomRenderedBannerViewDelegate> _customRenderedBannerViewDelegate;
}

+ (_Bool)canInitWithAdLoader:(id)arg1 error:(id *)arg2;
+ (id)mediationConnectorForConfiguration:(id)arg1 networkConfiguration:(id)arg2;
+ (id)requestParametersForAdLoader:(id)arg1;
+ (id)requiredDelegateProtocol;
- (void).cxx_destruct;
- (void)adLoaderDidReceiveAd:(id)arg1;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
@property(retain, nonatomic) GADCorrelator *correlator;
@property(nonatomic) __weak id <DFPCustomRenderedBannerViewDelegate> customRenderedBannerViewDelegate; // @synthesize customRenderedBannerViewDelegate=_customRenderedBannerViewDelegate;
@property(nonatomic) _Bool enableManualImpressions;
- (void)finishedRenderingAdView:(id)arg1;
- (void)loadAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recordClick;
- (void)recordCustomAdImpression;
- (void)recordImpression;
- (void)resize:(struct GADAdSize)arg1;
- (void)setAdOptions:(id)arg1;
@property(copy, nonatomic) NSArray *validAdSizes; // @synthesize validAdSizes=_validAdSizes;
- (void)setValidAdSizesWithSizes:(struct GADAdSize *)arg1;
- (void)slot:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (_Bool)slot:(id)arg1 notifyPublisherToRenderCustomRenderingAd:(id)arg2 error:(id *)arg3;
- (void)slot:(id)arg1 willLoadAdWithRequest:(id)arg2;
- (void)slot:(id)arg1 willResizeToAdSize:(struct GADAdSize)arg2;
- (_Bool)slotShouldPreemptInProgressRequest:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <GADAdSizeDelegate> adSizeDelegate; // @dynamic adSizeDelegate;
@property(copy, nonatomic) NSString *adUnitID; // @dynamic adUnitID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GADVideoController *videoController; // @dynamic videoController;

@end

