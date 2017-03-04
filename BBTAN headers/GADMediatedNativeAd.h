//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADMediatedAd.h"

@class UIView;

@interface GADMediatedNativeAd : GADMediatedAd
{
    UIView *_renderedView;
    _Bool _adapterHandlesUserClicks;
    _Bool _adapterHandlesUserImpressions;
    _Bool _allowPublisherRenderedAttribution;
    id <GADMediatedNativeAd> _ad;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <GADMediatedNativeAd> ad; // @synthesize ad=_ad;
@property(nonatomic) _Bool adapterHandlesUserClicks; // @synthesize adapterHandlesUserClicks=_adapterHandlesUserClicks;
@property(nonatomic) _Bool adapterHandlesUserImpressions; // @synthesize adapterHandlesUserImpressions=_adapterHandlesUserImpressions;
@property(nonatomic) _Bool allowPublisherRenderedAttribution; // @synthesize allowPublisherRenderedAttribution=_allowPublisherRenderedAttribution;
- (id)loadableAdForAdLoader:(id)arg1;
- (Class)nativeAdClass;
- (void)reportAdNetworkClick;
- (void)reportAdNetworkImpression;
- (void)reportClickOnAssetWithWithName:(id)arg1 view:(id)arg2 viewController:(id)arg3;
- (void)reportImpression;
- (void)reportMediatedAdRenderedInView:(id)arg1 viewController:(id)arg2;
- (void)reportMediatedAdShouldUntrackView:(id)arg1;

@end

