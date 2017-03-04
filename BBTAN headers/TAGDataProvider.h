//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext;

@interface TAGDataProvider : NSObject
{
    _Bool _hasHits;
    unsigned long long _maxHitCount;
    double _maxHitAge;
    NSManagedObjectContext *_context;
}

- (void).cxx_destruct;
- (oneway void)addHitWithURLString:(id)arg1;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (_Bool)context:(id)arg1 deleteRequest:(id)arg2 error:(id *)arg3;
- (unsigned long long)context:(id)arg1 hitCount:(id *)arg2;
- (void)dealloc;
- (_Bool)deleteExcessHits:(id *)arg1;
- (oneway void)deleteHits:(id)arg1;
- (oneway void)fetchHitsWithLimit:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)fetchNotRecentlyAttemptedHitsWithLimit:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool hasHits; // @synthesize hasHits=_hasHits;
- (id)init;
@property(nonatomic) double maxHitAge; // @synthesize maxHitAge=_maxHitAge;
@property(nonatomic) unsigned long long maxHitCount; // @synthesize maxHitCount=_maxHitCount;
- (void)onExit:(id)arg1;
- (void)save;
- (oneway void)updateFailedHits:(id)arg1;

@end

