//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSString;

@interface UADSWebViewMethodInvokeOperation : NSOperation
{
    _Bool _success;
    int _waitTime;
    NSString *_webViewMethod;
    NSString *_webViewClass;
    NSArray *_parameters;
}

+ (void)callback:(id)arg1;
- (void).cxx_destruct;
- (id)initWithMethod:(id)arg1 webViewClass:(id)arg2 parameters:(id)arg3 waitTime:(int)arg4;
- (void)main;
@property(retain, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) int waitTime; // @synthesize waitTime=_waitTime;
@property(retain, nonatomic) NSString *webViewClass; // @synthesize webViewClass=_webViewClass;
@property(retain, nonatomic) NSString *webViewMethod; // @synthesize webViewMethod=_webViewMethod;

@end

