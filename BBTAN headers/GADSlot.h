//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADActiveViewMonitorDelegate.h"
#import "GADAdFetcherDelegate.h"
#import "GADAdViewActiveViewMonitoring.h"
#import "GADImpressionMonitorDelegate.h"
#import "GADMRAIDEventHandling.h"
#import "GADPercentDrivenUserInteractionAnimationControllerDelegate.h"
#import "GADSDKCoreControllerDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"

@class GADActiveViewMonitor, GADAd, GADAdFetcher, GADAdType, GADAdView, GADBannerAdViewDelegate, GADCSI, GADCSITimeRecorder, GADClearcutLogger, GADCorrelator, GADImpressionMonitor, GADIntermission, GADMAdManager, GADMAdNetworkConnector, GADPercentDrivenUserInteractionAnimationController, GADRequest, GADSDKCoreWebView, GADScheduler, GADSlotStatistics, GADViewControllerFullScreenSwipeAnimation, NSDictionary, NSNumber, NSSet, NSString, NSTimer, SKStoreProductViewController, UIPanGestureRecognizer, UIView;

@interface GADSlot : NSObject <GADActiveViewMonitorDelegate, GADAdViewActiveViewMonitoring, GADPercentDrivenUserInteractionAnimationControllerDelegate, GADSDKCoreControllerDelegate, GADImpressionMonitorDelegate, SKStoreProductViewControllerDelegate, GADMRAIDEventHandling, GADAdFetcherDelegate>
{
    long long _state;
    unsigned long long _activeViewID;
    GADImpressionMonitor *_impressionMonitor;
    long long _swipeToViewControllerCheckerTaskID;
    GADMAdManager *_mediationManager;
    _Bool _slotHasAttemptedAnAdRequestAtLeastOnce;
    GADClearcutLogger *_logger;
    _Bool _isListeningToDeviceOrientationChangeEvent;
    struct CGRect _usableInterfaceFrame;
    struct CGRect _creativeWebViewFrame;
    struct CGRect _creativeAdFrame;
    GADAd *_pendingCustomRenderingAd;
    GADCSITimeRecorder *_adLoadActionTimeRecorder;
    GADActiveViewMonitor *_activeViewMonitor;
    unsigned long long _measurementReceivers;
    _Bool _viewHasMadeImpression;
    _Bool _monitoredViewVisible;
    GADCSI *_CSI;
    _Bool _hasAutoRefreshed;
    _Bool _reloadable;
    _Bool _manualImpressionsEnabled;
    _Bool _swipeToViewControllerEnabled;
    _Bool _swipeToViewControllerAnimationControllerInitialized;
    id <GADSlotDelegate> _slotDelegate;
    id <GADSlotAdLoadDelegate> _adLoadDelegate;
    id <GADSlotAdEventDelegate> _adEventDelegate;
    id <GADSlotAdResponseDelegate> _adResponseDelegate;
    id <GADSlotAdKeyDelegate> _adKeyDelegate;
    NSString *_adUnitID;
    GADAd *_ad;
    GADAdType *_adType;
    GADRequest *_loadingRequest;
    GADCorrelator *_correlator;
    NSNumber *_timeLastLoaded;
    GADAdView *_adView;
    GADSlotStatistics *_slotStats;
    GADIntermission *_intermission;
    id _placement;
    GADBannerAdViewDelegate *_adViewDelegate;
    GADAd *_loadingAd;
    GADAdFetcher *_adFetcher;
    NSDictionary *_applicationStatistics;
    NSSet *_pendingAdStatistics;
    NSTimer *_reloadTimer;
    double _reloadInterval;
    NSString *_requestID;
    GADRequest *_nextRequest;
    GADSDKCoreWebView *_SDKCoreWebView;
    UIView *_activeViewMonitoredView;
    NSDictionary *_savedParamsForCheckingSwipeToViewController;
    GADPercentDrivenUserInteractionAnimationController *_animationController;
    GADViewControllerFullScreenSwipeAnimation *_animation;
    SKStoreProductViewController *_swipeableStoreProductViewController;
    UIPanGestureRecognizer *_swipeGestureRecognizer;
    GADSlot *_strongSlotForSwipeToViewController;
    GADScheduler *_swipeToViewControllerChecker;
    struct CGSize _newAdSize;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) GADCSI *CSI; // @synthesize CSI=_CSI;
- (void)MRAIDAdDidLoad;
- (void)MRAIDAdDidUnload;
@property(retain, nonatomic) GADSDKCoreWebView *SDKCoreWebView; // @synthesize SDKCoreWebView=_SDKCoreWebView;
- (void)SDKDidBecomeReady;
- (id)activeViewJSCommandWithParams:(id)arg1;
- (void)activeViewMonitorDidRefresh:(id)arg1;
- (void)activeViewMonitorWillUnload;
@property(retain, nonatomic) UIView *activeViewMonitoredView; // @synthesize activeViewMonitoredView=_activeViewMonitoredView;
- (void)activeViewMonitoringDidStop:(unsigned long long)arg1;
- (_Bool)activeViewMonitoringStarted:(unsigned long long)arg1;
- (void)activeViewVisibilityChanged:(_Bool)arg1;
@property(readonly, nonatomic) GADAd *ad; // @synthesize ad=_ad;
- (void)adDidDismissScreen;
- (void)adDidLoadVideoWithSize:(struct CGSize)arg1;
- (void)adDidRelinquishFullScreen:(id)arg1;
@property(nonatomic) __weak id <GADSlotAdEventDelegate> adEventDelegate; // @synthesize adEventDelegate=_adEventDelegate;
- (void)adFailedToReceiveContentWithError:(id)arg1;
@property(retain, nonatomic) GADAdFetcher *adFetcher; // @synthesize adFetcher=_adFetcher;
- (void)adFetcher:(id)arg1 didFailToFetchAd:(id)arg2 withError:(id)arg3 responseCode:(unsigned long long)arg4;
- (void)adFetcher:(id)arg1 didFetchAd:(id)arg2;
- (void)adFetchingFailedWithResponseCode:(long long)arg1 error:(id)arg2;
- (void)adFetchingStartedWithURL:(id)arg1;
- (void)adFetchingSucceeded;
- (void)adFinishedLoadingContent;
- (id)adFormat;
@property(nonatomic) __weak id <GADSlotAdKeyDelegate> adKeyDelegate; // @synthesize adKeyDelegate=_adKeyDelegate;
- (id)adLoadActionTimeRecorder;
@property(nonatomic) __weak id <GADSlotAdLoadDelegate> adLoadDelegate; // @synthesize adLoadDelegate=_adLoadDelegate;
- (void)adLoadingFromInlineAd:(id)arg1;
- (void)adLoadingFromSecretAdURL:(id)arg1;
- (void)adLoadingStarted;
- (id)adNetworkClassName;
@property(nonatomic) __weak id <GADSlotAdResponseDelegate> adResponseDelegate; // @synthesize adResponseDelegate=_adResponseDelegate;
- (struct GADAdSize)adSizeForMultiSizeAd;
@property(retain, nonatomic) GADAdType *adType; // @synthesize adType=_adType;
- (void)adURLBuildRequestCompleted;
- (void)adURLBuildRequestStarted;
@property(copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(readonly, nonatomic) GADAdView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) GADBannerAdViewDelegate *adViewDelegate; // @synthesize adViewDelegate=_adViewDelegate;
- (void)adWasClicked;
- (void)adWillDismissScreen;
- (void)adWillLeaveApplication;
- (void)adWillPresentFullScreen:(id)arg1;
- (void)adWillPresentScreen;
- (void)addCreativeOrientationChangeObserver:(id)arg1 selector:(SEL)arg2;
@property(retain, nonatomic) GADViewControllerFullScreenSwipeAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) GADPercentDrivenUserInteractionAnimationController *animationController; // @synthesize animationController=_animationController;
- (void)animationControllerDidCancelAnimationTransition:(id)arg1;
- (void)animationControllerDidFinishAnimationTransition:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillBecomeInactive:(id)arg1;
@property(copy, nonatomic) NSDictionary *applicationStatistics; // @synthesize applicationStatistics=_applicationStatistics;
- (void)applicationVolumeDidChange:(id)arg1;
- (void)beginListeningToDeviceOrientationChangeEvent;
- (_Bool)canEnableActiveViewMonitoring;
- (void)canEnableSwipeToViewController;
- (void)cancelLoad;
- (void)cancelPendingActions;
- (void)cancelPendingAndFutureActions;
- (_Bool)changeAdTypeTo:(id)arg1;
@property(retain, nonatomic) GADCorrelator *correlator; // @synthesize correlator=_correlator;
- (void)createActiveViewMonitor;
- (void)createdAdView:(id)arg1;
- (id)creativePositionDictionaryForActiveViewBounds:(struct CGRect)arg1;
- (void)deactivateReloadTimer;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)didChangeDeviceOrientation;
- (void)didFailToReceiveAdWithError:(id)arg1 shouldCancelPendingActions:(_Bool)arg2;
- (void)didFailToRetrieveSDKCoreWithError:(id)arg1;
- (void)didFetchAdContent;
- (void)didLoadAdHTMLInWebView;
- (void)didMakeAdImpression;
- (void)didReceiveAdURL;
- (void)didReceiveInAppPurchase:(id)arg1;
- (void)didReceiveValidAd;
- (void)disableSwipeToViewController;
- (void)enableSwipeToViewController;
- (void)endListeningToDeviceOrientationChangeEvent;
- (void)failedJavaScriptFile;
- (void)finishActiveViewReporting;
- (void)finishedLoadingAdResponse:(id)arg1;
- (id)forcedAdOrientation;
- (id)gestureClickURLWithURL:(id)arg1;
- (void)handleError:(id)arg1 action:(id)arg2;
- (void)handlePanGesture:(id)arg1;
@property(nonatomic) _Bool hasAutoRefreshed; // @synthesize hasAutoRefreshed=_hasAutoRefreshed;
- (unsigned long long)identifierForActiveViewMonitor:(id)arg1;
- (void)impressionMonitorDidMonitorImpression:(id)arg1;
- (id)inAppPurchaseDelegate;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak GADIntermission *intermission; // @synthesize intermission=_intermission;
- (void)interstitialViewWillAppear;
- (void)interstitialViewWillDisappear;
- (void)invalidJavaScriptRequest;
- (void)invalidate;
- (void)invalidateState;
- (_Bool)isBeingMediated;
- (_Bool)isGoogleAdURL:(id)arg1;
- (_Bool)isMRAIDEnabled;
- (_Bool)isMRAIDEnabledForActiveViewMonitor:(id)arg1;
- (_Bool)isMakingRequest;
- (_Bool)isMediating;
- (void)loadAd:(id)arg1 headers:(id)arg2;
- (void)loadAdNetworkJavaScriptRequest:(id)arg1;
- (void)loadAdURLWithParameters:(id)arg1;
- (void)loadNextRequestWithAutoRefresh:(_Bool)arg1;
- (void)loadRequest:(id)arg1;
- (void)loadStoreProductViewController;
@property(retain, nonatomic) GADAd *loadingAd; // @synthesize loadingAd=_loadingAd;
@property(copy, nonatomic) GADRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
- (void)logRequestTestAdInstructions;
- (void)makeRootLoggingObject;
@property(nonatomic) _Bool manualImpressionsEnabled; // @synthesize manualImpressionsEnabled=_manualImpressionsEnabled;
- (void)mediatedAdNetworkAutoRefreshed;
@property(retain, nonatomic) GADMAdNetworkConnector *mediationConnector;
- (_Bool)monitoredViewIsSubviewOfDeviceScreen;
@property(readonly, nonatomic) _Bool monitoredViewVisible;
@property(nonatomic) struct CGSize newAdSize; // @synthesize newAdSize=_newAdSize;
@property(copy, nonatomic) GADRequest *nextRequest; // @synthesize nextRequest=_nextRequest;
- (void)notifyDeviceFeatures;
- (void)notifyOrientationToMRAIDCreative;
- (void)ownerViewDidMoveToWindow:(id)arg1;
@property(copy, nonatomic) NSSet *pendingAdStatistics; // @synthesize pendingAdStatistics=_pendingAdStatistics;
- (void)pingClickURLs;
- (void)pingImpressionURLs;
- (void)pingManualTrackingURLs;
@property(nonatomic) __weak id placement; // @synthesize placement=_placement;
- (void)postVolumeNotification;
- (void)presentMediatedInterstitialFromRootViewController:(id)arg1;
- (void)processAdResponse:(id)arg1;
- (void)processCustomRenderingAdResponse:(id)arg1;
- (void)processMediationAdResponse:(id)arg1;
- (void)processStandardAdResponse:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)reloadCurrentRequest;
@property(nonatomic) double reloadInterval; // @synthesize reloadInterval=_reloadInterval;
@property(retain, nonatomic) NSTimer *reloadTimer; // @synthesize reloadTimer=_reloadTimer;
@property(nonatomic) _Bool reloadable; // @synthesize reloadable=_reloadable;
- (void)renderPendingCustomRenderingAd;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (id)requestParameters;
- (long long)requestedAdType;
- (void)resetLogger;
- (void)resetRequestState;
- (void)resetState;
@property(copy, nonatomic) NSDictionary *savedParamsForCheckingSwipeToViewController; // @synthesize savedParamsForCheckingSwipeToViewController=_savedParamsForCheckingSwipeToViewController;
- (void)scheduleAdReloadTimer;
- (void)scheduleSwipeToViewControllerChecker;
- (void)sendCSIAdLoadTimings;
- (void)setAdType:(id)arg1 andReloadRequest:(_Bool)arg2;
@property(nonatomic) __weak id <GADSlotDelegate> slotDelegate; // @synthesize slotDelegate=_slotDelegate;
- (void)setState:(long long)arg1;
@property(retain, nonatomic) GADSlot *strongSlotForSwipeToViewController; // @synthesize strongSlotForSwipeToViewController=_strongSlotForSwipeToViewController;
@property(retain, nonatomic) UIPanGestureRecognizer *swipeGestureRecognizer; // @synthesize swipeGestureRecognizer=_swipeGestureRecognizer;
@property(nonatomic) _Bool swipeToViewControllerAnimationControllerInitialized; // @synthesize swipeToViewControllerAnimationControllerInitialized=_swipeToViewControllerAnimationControllerInitialized;
@property(retain, nonatomic) GADScheduler *swipeToViewControllerChecker; // @synthesize swipeToViewControllerChecker=_swipeToViewControllerChecker;
@property(nonatomic) _Bool swipeToViewControllerEnabled; // @synthesize swipeToViewControllerEnabled=_swipeToViewControllerEnabled;
@property(retain, nonatomic) SKStoreProductViewController *swipeableStoreProductViewController; // @synthesize swipeableStoreProductViewController=_swipeableStoreProductViewController;
@property(retain, nonatomic) NSNumber *timeLastLoaded; // @synthesize timeLastLoaded=_timeLastLoaded;
- (void)setUpAnimationController;
- (void)setViewForAdUsingView:(id)arg1;
@property(nonatomic) _Bool viewHasMadeImpression;
- (_Bool)shouldChangeAudioSessionCategoryTo:(id)arg1;
- (_Bool)shouldMakeRequest:(id)arg1;
- (_Bool)shouldProcessTouch:(struct CGPoint)arg1 inView:(id)arg2;
@property(readonly, nonatomic) GADSlotStatistics *slotStats; // @synthesize slotStats=_slotStats;
- (void)startActiveViewReporting;
- (void)startActiveViewReportingIfEnabled;
- (void)startImpressionMonitoring;
- (void)startedProcessingAd:(id)arg1;
@property(readonly, nonatomic) long long state;
- (void)unloadActiveViewMonitor;
- (void)unscheduleSwipeToViewControllerChecker;
- (void)updateContentSize:(struct CGSize)arg1;
- (void)updatePositionFromView:(id)arg1;
- (void)updateVisibility:(_Bool)arg1;
- (_Bool)validateAdResponseWithAdSize:(struct GADAdSize)arg1 andValidAdSizes:(id)arg2;
- (id)viewControllerForPresentingModalView;
- (void)willFetchAdContent;
- (void)willLeaveAppDueToClick;
- (void)willLoadAdHTMLInWebView;
- (void)willProcessMediationResponse;
- (void)willRequestAdURL;
- (void)willStartAdRendering;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

