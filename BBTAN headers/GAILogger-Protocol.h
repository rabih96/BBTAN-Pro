//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol GAILogger <NSObject>
- (void)error:(NSString *)arg1;
- (void)info:(NSString *)arg1;
@property(nonatomic) unsigned long long logLevel;
- (void)verbose:(NSString *)arg1;
- (void)warning:(NSString *)arg1;
@end

