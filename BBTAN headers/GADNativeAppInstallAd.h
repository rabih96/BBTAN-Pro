//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADNativeAd.h"

#import "GADLoadable.h"
#import "GADMediatedNativeAppInstallAd.h"
#import "GADNativeAdMediaDisplaying.h"
#import "GADNativeAdSourceAttributing.h"
#import "GADOverlayViewSource.h"

@class GADMediaContent, GADNativeAdAttribution, GADNativeAdImage, GADOverlayView, GADVideoController, NSArray, NSDecimalNumber, NSMutableArray, NSString, UIView;

@interface GADNativeAppInstallAd : GADNativeAd <GADMediatedNativeAppInstallAd, GADLoadable, GADNativeAdMediaDisplaying, GADNativeAdSourceAttributing, GADOverlayViewSource>
{
    _Bool _disableImageLoading;
    NSArray *_nativeAdImages;
    NSMutableArray *_availableNativeAdImages;
    GADOverlayView *_overlayView;
    GADVideoController *_videoController;
    GADNativeAdAttribution *_attribution;
    NSString *_headline;
    NSString *_callToAction;
    GADNativeAdImage *_icon;
    NSString *_body;
    NSString *_store;
    NSString *_price;
    NSDecimalNumber *_starRating;
    GADMediaContent *_mediaContent;
    UIView *_adChoicesContentView;
}

+ (_Bool)canInitWithAdLoader:(id)arg1 error:(id *)arg2;
+ (id)requestParametersForAdLoader:(id)arg1;
+ (id)requiredDelegateProtocol;
- (void).cxx_destruct;
- (void)GADNativeAppInstallAd_category;
@property(retain, nonatomic) UIView *adChoicesContentView; // @synthesize adChoicesContentView=_adChoicesContentView;
- (id)adFormatTemplateID;
- (void)adLoaderDidReceiveAd:(id)arg1;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *callToAction;
@property(readonly, copy, nonatomic) NSString *headline;
@property(readonly, nonatomic) GADNativeAdImage *icon;
@property(readonly, nonatomic) NSArray *images;
- (id)initWithDictionary:(id)arg1 options:(id)arg2;
- (id)initWithMediatedNativeAd:(id)arg1 options:(id)arg2;
- (void)loadAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) GADMediaContent *mediaContent; // @synthesize mediaContent=_mediaContent;
- (id)overlayView;
@property(readonly, copy, nonatomic) NSString *price; // @synthesize price=_price;
- (id)requiredAssets;
- (void)setSlot:(id)arg1;
@property(readonly, copy, nonatomic) NSDecimalNumber *starRating; // @synthesize starRating=_starRating;
@property(readonly, copy, nonatomic) NSString *store; // @synthesize store=_store;
@property(readonly, nonatomic) GADVideoController *videoController; // @synthesize videoController=_videoController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
