//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADMAdNetworkConnector, GADMediatedAd, NSError, NSObject, UIView;

@protocol GADMConnectorDelegate <NSObject>
- (void)adRequestFailedFromConnector:(GADMAdNetworkConnector *)arg1 withError:(NSError *)arg2;
- (void)adRequestReturnsFromConnector:(GADMAdNetworkConnector *)arg1 withInterstitial:(NSObject *)arg2;
- (void)adRequestReturnsFromConnector:(GADMAdNetworkConnector *)arg1 withMediatedAd:(GADMediatedAd *)arg2;
- (void)adRequestReturnsFromConnector:(GADMAdNetworkConnector *)arg1 withView:(UIView *)arg2;
- (_Bool)connectorShouldReturnMediatedAd:(GADMAdNetworkConnector *)arg1;
@end

