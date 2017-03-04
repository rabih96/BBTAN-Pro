//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GADAdChoicesView, GADMediaView, GADNativeAdViewPolicy, GADNativeContentAd;

@interface GADNativeContentAdView : UIView
{
    GADNativeAdViewPolicy *_nativeAdViewPolicy;
    UIView *_headlineView;
    UIView *_bodyView;
    UIView *_imageView;
    UIView *_logoView;
    UIView *_callToActionView;
    UIView *_advertiserView;
    GADMediaView *_mediaView;
    GADAdChoicesView *_adChoicesView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GADAdChoicesView *adChoicesView; // @synthesize adChoicesView=_adChoicesView;
@property(nonatomic) __weak UIView *advertiserView; // @synthesize advertiserView=_advertiserView;
@property(nonatomic) __weak UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(nonatomic) __weak UIView *callToActionView; // @synthesize callToActionView=_callToActionView;
- (void)commonInit;
- (void)didMoveToSuperview;
@property(nonatomic) __weak UIView *headlineView; // @synthesize headlineView=_headlineView;
@property(nonatomic) __weak UIView *imageView; // @synthesize imageView=_imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak UIView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) __weak GADMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) GADNativeContentAd *nativeContentAd;
- (void)updateMediaView;

@end
