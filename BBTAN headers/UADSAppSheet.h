//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKStoreProductViewControllerDelegate.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface UADSAppSheet : NSObject <SKStoreProductViewControllerDelegate>
{
    _Bool _canOpenAppSheet;
    _Bool _presentingAnimated;
    int _prepareTimeoutInSeconds;
    NSMutableDictionary *_appSheetCache;
    NSMutableSet *_appSheetLoading;
    NSDictionary *_presentingParameters;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *appSheetCache; // @synthesize appSheetCache=_appSheetCache;
@property(retain) NSMutableSet *appSheetLoading; // @synthesize appSheetLoading=_appSheetLoading;
@property(nonatomic) _Bool canOpenAppSheet; // @synthesize canOpenAppSheet=_canOpenAppSheet;
- (void)destroyAppSheet;
- (_Bool)destroyAppSheet:(id)arg1;
- (id)getCachedController:(id)arg1;
- (id)getItunesIdFromParameters:(id)arg1;
- (id)init;
- (void)prepareAppSheet:(id)arg1 prepareTimeoutInSeconds:(int)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) int prepareTimeoutInSeconds; // @synthesize prepareTimeoutInSeconds=_prepareTimeoutInSeconds;
- (void)presentAppSheet:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool presentingAnimated; // @synthesize presentingAnimated=_presentingAnimated;
@property(retain) NSDictionary *presentingParameters; // @synthesize presentingParameters=_presentingParameters;
- (void)productViewControllerDidFinish:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
