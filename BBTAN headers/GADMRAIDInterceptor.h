//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface GADMRAIDInterceptor : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSString *_bannerImplementationURLString;
    NSString *_expandedBannerImplementationURLString;
    NSString *_interstitialImplementationURLString;
    NSSet *_implementationURLStrings;
    _Bool _enabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)MRAIDURLStringForAdView:(id)arg1;
- (_Bool)URLisImplementationURL:(id)arg1;
@property(copy) NSString *bannerImplementationURLString;
- (_Bool)canRedirect;
@property(copy) NSString *expandedBannerImplementationURLString;
- (id)init;
@property(copy) NSString *interstitialImplementationURLString;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)shouldRedirectRequest:(id)arg1;
- (void)updateImplementationURLStrings;

@end

