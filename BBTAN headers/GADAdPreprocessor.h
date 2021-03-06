//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADSlotAdLoadDelegate.h"

@class GADSlot, NSString;

@interface GADAdPreprocessor : NSObject <GADSlotAdLoadDelegate>
{
    GADSlot *_slot;
    CDUnknownBlockType _completionHandler;
    NSString *_nativeAdJSON;
}

- (void).cxx_destruct;
- (void)callAndClearCompletionHandlerWithAdConfiguration:(id)arg1 slot:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)environmentJSONString;
- (void)handleJavaScriptLoadedNotification:(id)arg1;
- (void)handlePreprocessorNotification:(id)arg1;
- (id)init;
- (id)initWithAdUnitID:(id)arg1;
- (void)preprocessNativeAdJSON:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;
- (void)slotFinishedLoadingAdContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

