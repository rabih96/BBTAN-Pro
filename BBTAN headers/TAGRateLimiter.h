//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TAGRateLimiter : NSObject
{
    double _secondsPerToken;
    double _maxTokens;
    double _tokens;
    double _lastTrackTime;
}

+ (id)rateLimiterWithMaxTokens:(double)arg1 secondsPerToken:(double)arg2;
@property(nonatomic) double lastTrackTime; // @synthesize lastTrackTime=_lastTrackTime;
@property(nonatomic) double maxTokens; // @synthesize maxTokens=_maxTokens;
@property(nonatomic) double secondsPerToken; // @synthesize secondsPerToken=_secondsPerToken;
@property(nonatomic) double tokens; // @synthesize tokens=_tokens;
- (_Bool)tokenAvailable;

@end

