//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface TAGExpandedRule : NSObject <NSCopying>
{
    NSArray *_positivePredicates;
    NSArray *_negativePredicates;
    NSArray *_addTags;
    NSArray *_removeTags;
    NSArray *_addMacros;
    NSArray *_removeMacros;
}

+ (id)builder;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSArray *addMacros; // @synthesize addMacros=_addMacros;
@property(readonly, retain, nonatomic) NSArray *addTags; // @synthesize addTags=_addTags;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithPositivePredicates:(id)arg1 negativePredicates:(id)arg2 addTags:(id)arg3 removeTags:(id)arg4 addMacros:(id)arg5 removeMacros:(id)arg6;
@property(readonly, retain, nonatomic) NSArray *negativePredicates; // @synthesize negativePredicates=_negativePredicates;
@property(readonly, retain, nonatomic) NSArray *positivePredicates; // @synthesize positivePredicates=_positivePredicates;
@property(readonly, retain, nonatomic) NSArray *removeMacros; // @synthesize removeMacros=_removeMacros;
@property(readonly, retain, nonatomic) NSArray *removeTags; // @synthesize removeTags=_removeTags;

@end
