//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GADURLConnection, GADURLConnectionRedirect, NSError, NSString, NSURL, NSURLResponse;

@protocol GADURLConnectionDelegate
- (void)connection:(GADURLConnection *)arg1 loadDidFail:(NSError *)arg2 httpStatusCode:(long long)arg3;
- (void)connection:(GADURLConnection *)arg1 loadDidFinish:(NSString *)arg2 baseURL:(NSURL *)arg3;
- (void)connection:(GADURLConnection *)arg1 loadDidReceiveCachedResponse:(NSURLResponse *)arg2;
- (_Bool)connection:(GADURLConnection *)arg1 loadShouldUseCacheForResponse:(NSURLResponse *)arg2;
- (NSError *)connection:(GADURLConnection *)arg1 shouldRedirectToURL:(NSURL *)arg2;
- (void)connection:(GADURLConnection *)arg1 willPerformRedirect:(GADURLConnectionRedirect *)arg2;
@end

