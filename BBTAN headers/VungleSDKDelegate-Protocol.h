//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol VungleSDKDelegate <NSObject>

@optional
- (void)vungleSDKAdPlayableChanged:(_Bool)arg1;
- (void)vungleSDKwillCloseAdWithViewInfo:(NSDictionary *)arg1 willPresentProductSheet:(_Bool)arg2;
- (void)vungleSDKwillCloseProductSheet:(id)arg1;
- (void)vungleSDKwillShowAd;
@end

