//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADMediatedNativeAd.h"

@class GADNativeAdImage, NSArray, NSString, UIView;

@protocol GADMediatedNativeContentAd <GADMediatedNativeAd>
- (NSString *)advertiser;
- (NSString *)body;
- (NSString *)callToAction;
- (NSString *)headline;
- (NSArray *)images;
- (GADNativeAdImage *)logo;

@optional
- (UIView *)adChoicesView;
@end
