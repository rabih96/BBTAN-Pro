//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface GADMediatedAd : NSObject
{
    NSMutableArray *_clickHandlers;
    NSMutableArray *_impressionHandlers;
    NSString *_adNetworkClassName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adNetworkClassName; // @synthesize adNetworkClassName=_adNetworkClassName;
- (void)addClickHandler:(CDUnknownBlockType)arg1;
- (void)addImpressionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)loadableAdForAdLoader:(id)arg1;
- (void)reportClick;
- (void)reportImpression;

@end

