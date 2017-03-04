//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FIRAReachabilityChecker : NSObject
{
    NSString *_loggerDomain;
    int reachabilityStatus_;
    const struct FIRAReachabilityApi *reachabilityApi_;
    struct __SCNetworkReachability *reachability_;
    NSString *host_;
    id <FIRAReachabilityDelegate> delegate_;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <FIRAReachabilityDelegate> delegate; // @synthesize delegate=delegate_;
@property(copy, nonatomic) NSString *host; // @synthesize host=host_;
- (id)initWithDelegate:(id)arg1 withHost:(id)arg2 loggerDomain:(id)arg3;
@property(readonly, nonatomic) _Bool isActive;
@property(nonatomic) struct __SCNetworkReachability *reachability; // @synthesize reachability=reachability_;
@property(nonatomic) const struct FIRAReachabilityApi *reachabilityApi; // @synthesize reachabilityApi=reachabilityApi_;
- (void)reachabilityFlagsChanged:(unsigned int)arg1;
@property(nonatomic) int reachabilityStatus; // @synthesize reachabilityStatus=reachabilityStatus_;
- (_Bool)start;
- (int)statusForFlags:(unsigned int)arg1;
- (void)stop;

@end

