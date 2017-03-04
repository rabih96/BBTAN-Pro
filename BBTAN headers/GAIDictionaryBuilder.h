//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GAIEcommerceProductAction, NSMutableArray, NSMutableDictionary;

@interface GAIDictionaryBuilder : NSObject
{
    NSMutableDictionary *_parameters;
    NSMutableDictionary *_impressionLists;
    NSMutableArray *_impressionListNames;
    NSMutableArray *_impressionListSources;
    NSMutableArray *_products;
    NSMutableArray *_promotions;
    GAIEcommerceProductAction *_pAction;
}

+ (id)createAppView;
+ (id)createEventWithCategory:(id)arg1 action:(id)arg2 label:(id)arg3 value:(id)arg4;
+ (id)createExceptionWithDescription:(id)arg1 withFatal:(id)arg2;
+ (id)createItemWithTransactionId:(id)arg1 name:(id)arg2 sku:(id)arg3 category:(id)arg4 price:(id)arg5 quantity:(id)arg6 currencyCode:(id)arg7;
+ (id)createScreenView;
+ (id)createSocialWithNetwork:(id)arg1 action:(id)arg2 target:(id)arg3;
+ (id)createTimingWithCategory:(id)arg1 interval:(id)arg2 name:(id)arg3 label:(id)arg4;
+ (id)createTransactionWithId:(id)arg1 affiliation:(id)arg2 revenue:(id)arg3 tax:(id)arg4 shipping:(id)arg5 currencyCode:(id)arg6;
+ (id)gai_exceptionWithDescription:(id)arg1 withFatal:(id)arg2;
+ (id)valueForNumber:(id)arg1;
+ (id)valueForString:(id)arg1;
- (void).cxx_destruct;
- (id)addProduct:(id)arg1;
- (id)addProductImpression:(id)arg1 impressionList:(id)arg2 impressionSource:(id)arg3;
- (id)addPromotion:(id)arg1;
- (id)build;
- (id)gai_set:(id)arg1 forKey:(id)arg2;
- (id)get:(id)arg1;
@property(retain, nonatomic) NSMutableArray *impressionListNames; // @synthesize impressionListNames=_impressionListNames;
@property(retain, nonatomic) NSMutableArray *impressionListSources; // @synthesize impressionListSources=_impressionListSources;
@property(retain, nonatomic) NSMutableDictionary *impressionLists; // @synthesize impressionLists=_impressionLists;
- (id)init;
@property(retain, nonatomic) GAIEcommerceProductAction *pAction; // @synthesize pAction=_pAction;
@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSMutableArray *products; // @synthesize products=_products;
@property(retain, nonatomic) NSMutableArray *promotions; // @synthesize promotions=_promotions;
- (id)set:(id)arg1 forKey:(id)arg2;
- (id)setAll:(id)arg1;
- (id)setCampaignParametersFromUrl:(id)arg1;
- (id)setProductAction:(id)arg1;

@end

